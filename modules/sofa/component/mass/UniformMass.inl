#ifndef SOFA_COMPONENT_MASS_UNIFORMMASS_INL
#define SOFA_COMPONENT_MASS_UNIFORMMASS_INL

#include <sofa/component/mass/UniformMass.h>
#include <sofa/core/componentmodel/behavior/Mass.inl>
#include <sofa/core/objectmodel/Context.h>
#include <sofa/helper/gl/template.h>
#include <sofa/defaulttype/RigidTypes.h>
//#include <sofa/defaulttype/SolidTypes.h>
#include <iostream>
using std::cerr;
using std::endl;

namespace sofa
{

namespace component
{

namespace mass
{

using namespace sofa::defaulttype;



//Specialization for rigids
template <>
void UniformMass<RigidTypes, RigidMass>::draw();

template <>
double UniformMass<RigidTypes,RigidMass>::getPotentialEnergy( const RigidTypes::VecCoord& x );


template <class DataTypes, class MassType>
UniformMass<DataTypes, MassType>::UniformMass()
    : totalMass( dataField(&totalMass, 0.0, "totalmass", "Sum of the particles' masses") )
{}


template <class DataTypes, class MassType>
UniformMass<DataTypes, MassType>::UniformMass(core::componentmodel::behavior::MechanicalState<DataTypes>* mstate)
    : core::componentmodel::behavior::Mass<DataTypes>(mstate)
    , totalMass( dataField(&totalMass, 0.0, "totalmass", "Sum of the particles' masses") )
{}

template <class DataTypes, class MassType>
UniformMass<DataTypes, MassType>::~UniformMass()
{}

template <class DataTypes, class MassType>
void UniformMass<DataTypes, MassType>::setMass(const MassType& m)
{
    this->mass = m;
}

template <class DataTypes, class MassType>
void UniformMass<DataTypes, MassType>::setTotalMass(double m)
{
    this->totalMass.setValue(m);
}

template <class DataTypes, class MassType>
void UniformMass<DataTypes, MassType>::init()
{
    this->core::componentmodel::behavior::Mass<DataTypes>::init();
    if (this->totalMass.getValue()>0 && this->mstate!=NULL)
    {
        this->mass = (MassType)((typename DataTypes::Real)this->totalMass.getValue() / this->mstate->getX()->size());
    }
}

// -- Mass interface
template <class DataTypes, class MassType>
void UniformMass<DataTypes, MassType>::addMDx(VecDeriv& res, const VecDeriv& dx)
{
    for (unsigned int i=0; i<dx.size(); i++)
    {
        res[i] += dx[i] * mass;
    }
}

template <class DataTypes, class MassType>
void UniformMass<DataTypes, MassType>::accFromF(VecDeriv& a, const VecDeriv& f)
{
    for (unsigned int i=0; i<f.size(); i++)
    {
        a[i] = f[i] / mass;
    }
}

template <class DataTypes, class MassType>
void UniformMass<DataTypes, MassType>::addForce(VecDeriv& f, const VecCoord& x, const VecDeriv& v)
{
    // weight
    const double* g = this->getContext()->getLocalGravity().ptr();
    Deriv theGravity;
    DataTypes::set
    ( theGravity, g[0], g[1], g[2]);
    Deriv mg = theGravity * mass;
    //cerr<<"UniformMass<DataTypes, MassType>::addForce, mg = "<<mass<<" * "<<theGravity<<" = "<<mg<<endl;

    // velocity-based stuff
    core::objectmodel::BaseContext::SpatialVector vframe = getContext()->getVelocityInWorld();
    core::objectmodel::BaseContext::Vec3 aframe = getContext()->getVelocityBasedLinearAccelerationInWorld() ;
//     cerr<<"UniformMass<DataTypes, MassType>::computeForce(), vFrame in world coordinates = "<<vframe<<endl;
    //cerr<<"UniformMass<DataTypes, MassType>::computeForce(), aFrame in world coordinates = "<<aframe<<endl;
//     cerr<<"UniformMass<DataTypes, MassType>::computeForce(), getContext()->getLocalToWorld() = "<<getContext()->getPositionInWorld()<<endl;

    // project back to local frame
    vframe = getContext()->getPositionInWorld() / vframe;
    aframe = getContext()->getPositionInWorld().backProjectVector( aframe );
//     cerr<<"UniformMass<DataTypes, MassType>::computeForce(), vFrame in local coordinates= "<<vframe<<endl;
//     cerr<<"UniformMass<DataTypes, MassType>::computeForce(), aFrame in local coordinates= "<<aframe<<endl;
//     cerr<<"UniformMass<DataTypes, MassType>::computeForce(), mg in local coordinates= "<<mg<<endl;

    // add weight and inertia force
    for (unsigned int i=0; i<f.size(); i++)
    {
        //f[i] += mg;
        f[i] += mg + core::componentmodel::behavior::inertiaForce(vframe,aframe,mass,x[i],v[i]);
        //cerr<<"UniformMass<DataTypes, MassType>::computeForce(), vframe = "<<vframe<<", aframe = "<<aframe<<", x = "<<x[i]<<", v = "<<v[i]<<endl;
        //cerr<<"UniformMass<DataTypes, MassType>::computeForce() = "<<mg + Core::inertiaForce(vframe,aframe,mass,x[i],v[i])<<endl;
    }

}

template <class DataTypes, class MassType>
double UniformMass<DataTypes, MassType>::getKineticEnergy( const VecDeriv& v )
{
    double e=0;
    for (unsigned int i=0; i<v.size(); i++)
    {
        e+= v[i]*mass*v[i];
    }
    //cerr<<"UniformMass<DataTypes, MassType>::getKineticEnergy = "<<e/2<<endl;
    return e/2;
}

template <class DataTypes, class MassType>
double UniformMass<DataTypes, MassType>::getPotentialEnergy( const VecCoord& x )
{
    double e = 0;
    // gravity
    Vec3d g ( this->getContext()->getLocalGravity() );
    Deriv theGravity;
    DataTypes::set
    ( theGravity, g[0], g[1], g[2]);
    //cerr<<"UniformMass<DataTypes, MassType>::getPotentialEnergy, theGravity = "<<theGravity<<endl;
    for (unsigned int i=0; i<x.size(); i++)
    {
        /*        cerr<<"UniformMass<DataTypes, MassType>::getPotentialEnergy, mass = "<<mass<<endl;
                cerr<<"UniformMass<DataTypes, MassType>::getPotentialEnergy, x = "<<x[i]<<endl;
                cerr<<"UniformMass<DataTypes, MassType>::getPotentialEnergy, remove "<<theGravity*mass*x[i]<<endl;*/
        e -= theGravity*mass*x[i];
    }
    return e;
}


template <class DataTypes, class MassType>
void UniformMass<DataTypes, MassType>::draw()
{
    if (!getContext()->getShowBehaviorModels())
        return;
    const VecCoord& x = *this->mstate->getX();
    glDisable (GL_LIGHTING);
    glPointSize(2);
    glColor4f (1,1,1,1);
    glBegin (GL_POINTS);
    for (unsigned int i=0; i<x.size(); i++)
    {
        helper::gl::glVertexT(x[i]);
    }
    glEnd();
}


template <class DataTypes, class MassType>
bool UniformMass<DataTypes, MassType>::addBBox(double* minBBox, double* maxBBox)
{
    const VecCoord& x = *this->mstate->getX();
    for (unsigned int i=0; i<x.size(); i++)
    {
        //const Coord& p = x[i];
        double p[3] = {0.0, 0.0, 0.0};
        DataTypes::get(p[0],p[1],p[2],x[i]);
        for (int c=0; c<3; c++)
        {
            if (p[c] > maxBBox[c]) maxBBox[c] = p[c];
            if (p[c] < minBBox[c]) minBBox[c] = p[c];
        }
    }
    return true;
}

template<class DataTypes, class MassType>
void UniformMass<DataTypes, MassType>::parse(core::objectmodel::BaseObjectDescription* arg)
{
    Inherited::parse(arg);
    if (arg->getAttribute("mass"))
    {
        this->setMass((MassType)atof(arg->getAttribute("mass")));
    }
    if (arg->getAttribute("totalmass"))
    {
        this->setTotalMass(atof(arg->getAttribute("totalmass")));
    }
}


} // namespace mass

} // namespace component

} // namespace sofa

#endif



