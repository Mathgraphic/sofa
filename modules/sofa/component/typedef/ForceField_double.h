/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, v17.06                  *
*                (c) 2006-2017 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/



// File automatically generated by "generateTypedef"


#ifndef SOFA_TYPEDEF_ForceField_double_H
#define SOFA_TYPEDEF_ForceField_double_H

//Default files containing the declaration of the vector type
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/defaulttype/RigidTypes.h>
#include <sofa/defaulttype/Mat.h>




#include <SofaGeneralSimpleFem/BeamFEMForceField.h>
#include <SofaGeneralObjectInteraction/BoxStiffSpringForceField.h>
#include <SofaBoundaryCondition/BuoyantForceField.h>
#include <SofaBoundaryCondition/ConicalForceField.h>
#include <SofaBoundaryCondition/ConstantForceField.h>
#include <SofaVolumetricData/DistanceGridForceField.h>
#include <SofaBoundaryCondition/EllipsoidForceField.h>
#include <SofaMiscFem/FastTetrahedralCorotationalForceField.h>
#include <SofaGeneralDeformable/FrameSpringForceField.h>
#include <SofaMiscForceField/GearSpringForceField.h>
#include <SofaGeneralSimpleFem/HexahedralFEMForceField.h>
#include <SofaSimpleFem/HexahedronFEMForceField.h>
#include <SofaGeneralObjectInteraction/InteractionEllipsoidForceField.h>
#include <SofaRigid/JointSpringForceField.h>
#include <SofaMiscForceField/LennardJonesForceField.h>
#include <SofaMiscForceField/LineBendingSprings.h>
#include <SofaBoundaryCondition/LinearForceField.h>
#include <SofaDeformable/MeshSpringForceField.h>
#include <SofaSphFluid/ParticlesRepulsionForceField.h>
#include <SofaObjectInteraction/PenalityContactForceField.h>
#include <SofaBoundaryCondition/PlaneForceField.h>
#include <SofaGeneralDeformable/QuadBendingSprings.h>
#include <SofaGeneralDeformable/QuadularBendingSprings.h>
#include <SofaGeneralDeformable/RegularGridSpringForceField.h>
#include <SofaGeneralObjectInteraction/RepulsiveSpringForceField.h>
#include <SofaDeformable/RestShapeSpringsForceField.h>
#include <SofaSphFluid/SPHFluidForceField.h>
#include <SofaBoundaryCondition/SphereForceField.h>
#include <SofaDeformable/SpringForceField.h>
#include <SofaDeformable/StiffSpringForceField.h>
#include <SofaBoundaryCondition/SurfacePressureForceField.h>
#include <SofaGeneralSimpleFem/TetrahedralCorotationalFEMForceField.h>
#include <SofaMiscFem/TetrahedralTensorMassForceField.h>
#include <SofaSimpleFem/TetrahedronFEMForceField.h>
#include <SofaGeneralDeformable/TriangleBendingSprings.h>
#include <SofaMiscFem/TriangleFEMForceField.h>
#include <SofaMiscFem/TriangularAnisotropicFEMForceField.h>
#include <SofaGeneralDeformable/TriangularBendingSprings.h>
#include <SofaGeneralDeformable/TriangularBiquadraticSpringsForceField.h>
#include <SofaMiscFem/TriangularFEMForceField.h>
#include <SofaGeneralDeformable/TriangularQuadraticSpringsForceField.h>
#include <SofaGeneralDeformable/TriangularTensorMassForceField.h>
#include <SofaBoundaryCondition/VaccumSphereForceField.h>
#include <SofaGeneralDeformable/VectorSpringForceField.h>
#include <SofaMiscForceField/WashingMachineForceField.h>





//---------------------------------------------------------------------------------------------
//Typedef for BeamFEMForceField
typedef sofa::component::forcefield::BeamFEMForceField<sofa::defaulttype::StdRigidTypes<3, double> > BeamFEMForceFieldRigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for BoxStiffSpringForceField
typedef sofa::component::interactionforcefield::BoxStiffSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > BoxStiffSpringForceField1d;
typedef sofa::component::interactionforcefield::BoxStiffSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > BoxStiffSpringForceField2d;
typedef sofa::component::interactionforcefield::BoxStiffSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > BoxStiffSpringForceField3d;
typedef sofa::component::interactionforcefield::BoxStiffSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > BoxStiffSpringForceField6d;



//---------------------------------------------------------------------------------------------
//Typedef for BuoyantForceField
typedef sofa::component::forcefield::BuoyantForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > BuoyantForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for ConicalForceField
typedef sofa::component::forcefield::ConicalForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > ConicalForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for ConstantForceField
typedef sofa::component::forcefield::ConstantForceField<sofa::defaulttype::StdRigidTypes<3, double> > ConstantForceFieldRigid3d;
typedef sofa::component::forcefield::ConstantForceField<sofa::defaulttype::StdRigidTypes<2, double> > ConstantForceFieldRigid2d;
typedef sofa::component::forcefield::ConstantForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > ConstantForceField1d;
typedef sofa::component::forcefield::ConstantForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > ConstantForceField2d;
typedef sofa::component::forcefield::ConstantForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > ConstantForceField3d;
typedef sofa::component::forcefield::ConstantForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > ConstantForceField6d;



//---------------------------------------------------------------------------------------------
//Typedef for DistanceGridForceField
typedef sofa::component::forcefield::DistanceGridForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > DistanceGridForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for EllipsoidForceField
typedef sofa::component::forcefield::EllipsoidForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > EllipsoidForceField1d;
typedef sofa::component::forcefield::EllipsoidForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > EllipsoidForceField2d;
typedef sofa::component::forcefield::EllipsoidForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > EllipsoidForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for FastTetrahedralCorotationalForceField
typedef sofa::component::forcefield::FastTetrahedralCorotationalForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > FastTetrahedralCorotationalForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for FrameSpringForceField
typedef sofa::component::interactionforcefield::FrameSpringForceField<sofa::defaulttype::StdRigidTypes<3, double> > FrameSpringForceFieldRigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for GearSpringForceField
typedef sofa::component::interactionforcefield::GearSpringForceField<sofa::defaulttype::StdRigidTypes<3, double> > GearSpringForceFieldRigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for HexahedralFEMForceField
typedef sofa::component::forcefield::HexahedralFEMForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > HexahedralFEMForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for HexahedronFEMForceField
typedef sofa::component::forcefield::HexahedronFEMForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > HexahedronFEMForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for InteractionEllipsoidForceField
typedef sofa::component::interactionforcefield::InteractionEllipsoidForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double>, sofa::defaulttype::StdRigidTypes<3, double> > InteractionEllipsoidForceField3d_Rigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for JointSpringForceField
typedef sofa::component::interactionforcefield::JointSpringForceField<sofa::defaulttype::StdRigidTypes<3, double> > JointSpringForceFieldRigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for LennardJonesForceField
typedef sofa::component::forcefield::LennardJonesForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > LennardJonesForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for LineBendingSprings
typedef sofa::component::interactionforcefield::LineBendingSprings<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > LineBendingSprings2d;
typedef sofa::component::interactionforcefield::LineBendingSprings<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > LineBendingSprings3d;



//---------------------------------------------------------------------------------------------
//Typedef for LinearForceField
typedef sofa::component::forcefield::LinearForceField<sofa::defaulttype::StdRigidTypes<3, double> > LinearForceFieldRigid3d;
typedef sofa::component::forcefield::LinearForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > LinearForceField1d;
typedef sofa::component::forcefield::LinearForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > LinearForceField2d;
typedef sofa::component::forcefield::LinearForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > LinearForceField3d;
typedef sofa::component::forcefield::LinearForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > LinearForceField6d;



//---------------------------------------------------------------------------------------------
//Typedef for MeshSpringForceField
typedef sofa::component::interactionforcefield::MeshSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > MeshSpringForceField1d;
typedef sofa::component::interactionforcefield::MeshSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > MeshSpringForceField2d;
typedef sofa::component::interactionforcefield::MeshSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > MeshSpringForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for ParticlesRepulsionForceField
typedef sofa::component::forcefield::ParticlesRepulsionForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > ParticlesRepulsionForceField2d;
typedef sofa::component::forcefield::ParticlesRepulsionForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > ParticlesRepulsionForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for PenalityContactForceField
typedef sofa::component::interactionforcefield::PenalityContactForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > PenalityContactForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for PlaneForceField
typedef sofa::component::forcefield::PlaneForceField<sofa::defaulttype::StdRigidTypes<3, double> > PlaneForceFieldRigid3d;
typedef sofa::component::forcefield::PlaneForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > PlaneForceField1d;
typedef sofa::component::forcefield::PlaneForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > PlaneForceField2d;
typedef sofa::component::forcefield::PlaneForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > PlaneForceField3d;
typedef sofa::component::forcefield::PlaneForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > PlaneForceField6d;



//---------------------------------------------------------------------------------------------
//Typedef for QuadBendingSprings
typedef sofa::component::interactionforcefield::QuadBendingSprings<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > QuadBendingSprings2d;
typedef sofa::component::interactionforcefield::QuadBendingSprings<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > QuadBendingSprings3d;



//---------------------------------------------------------------------------------------------
//Typedef for QuadularBendingSprings
typedef sofa::component::forcefield::QuadularBendingSprings<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > QuadularBendingSprings3d;



//---------------------------------------------------------------------------------------------
//Typedef for RegularGridSpringForceField
typedef sofa::component::interactionforcefield::RegularGridSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > RegularGridSpringForceField1d;
typedef sofa::component::interactionforcefield::RegularGridSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > RegularGridSpringForceField2d;
typedef sofa::component::interactionforcefield::RegularGridSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > RegularGridSpringForceField3d;
typedef sofa::component::interactionforcefield::RegularGridSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > RegularGridSpringForceField6d;



//---------------------------------------------------------------------------------------------
//Typedef for RepulsiveSpringForceField
typedef sofa::component::interactionforcefield::RepulsiveSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > RepulsiveSpringForceField1d;
typedef sofa::component::interactionforcefield::RepulsiveSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > RepulsiveSpringForceField2d;
typedef sofa::component::interactionforcefield::RepulsiveSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > RepulsiveSpringForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for RestShapeSpringsForceField
typedef sofa::component::forcefield::RestShapeSpringsForceField<sofa::defaulttype::StdRigidTypes<3, double> > RestShapeSpringsForceFieldRigid3d;
typedef sofa::component::forcefield::RestShapeSpringsForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > RestShapeSpringsForceField1d;
typedef sofa::component::forcefield::RestShapeSpringsForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > RestShapeSpringsForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for SPHFluidForceField
typedef sofa::component::forcefield::SPHFluidForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > SPHFluidForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for SphereForceField
typedef sofa::component::forcefield::SphereForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > SphereForceField1d;
typedef sofa::component::forcefield::SphereForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > SphereForceField2d;
typedef sofa::component::forcefield::SphereForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > SphereForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for SpringForceField
typedef sofa::component::interactionforcefield::SpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > SpringForceField1d;
typedef sofa::component::interactionforcefield::SpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > SpringForceField2d;
typedef sofa::component::interactionforcefield::SpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > SpringForceField3d;
typedef sofa::component::interactionforcefield::SpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > SpringForceField6d;



//---------------------------------------------------------------------------------------------
//Typedef for StiffSpringForceField
typedef sofa::component::interactionforcefield::StiffSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > StiffSpringForceField1d;
typedef sofa::component::interactionforcefield::StiffSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > StiffSpringForceField2d;
typedef sofa::component::interactionforcefield::StiffSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > StiffSpringForceField3d;
typedef sofa::component::interactionforcefield::StiffSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > StiffSpringForceField6d;



//---------------------------------------------------------------------------------------------
//Typedef for SurfacePressureForceField
typedef sofa::component::forcefield::SurfacePressureForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > SurfacePressureForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for TetrahedralCorotationalFEMForceField
typedef sofa::component::forcefield::TetrahedralCorotationalFEMForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TetrahedralCorotationalFEMForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for TetrahedralTensorMassForceField
typedef sofa::component::forcefield::TetrahedralTensorMassForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TetrahedralTensorMassForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for TetrahedronFEMForceField
typedef sofa::component::forcefield::TetrahedronFEMForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TetrahedronFEMForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for TriangleBendingSprings
typedef sofa::component::interactionforcefield::TriangleBendingSprings<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > TriangleBendingSprings2d;
typedef sofa::component::interactionforcefield::TriangleBendingSprings<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangleBendingSprings3d;



// //---------------------------------------------------------------------------------------------
// //Typedef for TriangleFEMForceField
typedef sofa::component::forcefield::TriangleFEMForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangleFEMForceField3d;



// //---------------------------------------------------------------------------------------------
// //Typedef for TriangularAnisotropicFEMForceField
typedef sofa::component::forcefield::TriangularAnisotropicFEMForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangularAnisotropicFEMForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for TriangularBendingSprings
typedef sofa::component::forcefield::TriangularBendingSprings<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangularBendingSprings3d;



//---------------------------------------------------------------------------------------------
//Typedef for TriangularBiquadraticSpringsForceField
typedef sofa::component::forcefield::TriangularBiquadraticSpringsForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangularBiquadraticSpringsForceField3d;



// //---------------------------------------------------------------------------------------------
// //Typedef for TriangularFEMForceField
typedef sofa::component::forcefield::TriangularFEMForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangularFEMForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for TriangularQuadraticSpringsForceField
typedef sofa::component::forcefield::TriangularQuadraticSpringsForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangularQuadraticSpringsForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for TriangularTensorMassForceField
typedef sofa::component::forcefield::TriangularTensorMassForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangularTensorMassForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for VaccumSphereForceField
typedef sofa::component::forcefield::VaccumSphereForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > VaccumSphereForceField1d;
typedef sofa::component::forcefield::VaccumSphereForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > VaccumSphereForceField2d;
typedef sofa::component::forcefield::VaccumSphereForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > VaccumSphereForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for VectorSpringForceField
typedef sofa::component::interactionforcefield::VectorSpringForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > VectorSpringForceField3d;



//---------------------------------------------------------------------------------------------
//Typedef for WashingMachineForceField
typedef sofa::component::forcefield::WashingMachineForceField<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > WashingMachineForceField3d;





#ifndef SOFA_FLOAT
typedef BeamFEMForceFieldRigid3d BeamFEMForceFieldRigid3;
typedef BoxStiffSpringForceField1d BoxStiffSpringForceField1;
typedef BoxStiffSpringForceField2d BoxStiffSpringForceField2;
typedef BoxStiffSpringForceField3d BoxStiffSpringForceField3;
typedef BoxStiffSpringForceField6d BoxStiffSpringForceField6;
typedef BuoyantForceField3d BuoyantForceField3;
typedef ConicalForceField3d ConicalForceField3;
typedef ConstantForceFieldRigid3d ConstantForceFieldRigid3;
typedef ConstantForceFieldRigid2d ConstantForceFieldRigid2;
typedef ConstantForceField1d ConstantForceField1;
typedef ConstantForceField2d ConstantForceField2;
typedef ConstantForceField3d ConstantForceField3;
typedef ConstantForceField6d ConstantForceField6;
typedef DistanceGridForceField3d DistanceGridForceField3;
typedef EllipsoidForceField1d EllipsoidForceField1;
typedef EllipsoidForceField2d EllipsoidForceField2;
typedef EllipsoidForceField3d EllipsoidForceField3;
typedef FastTetrahedralCorotationalForceField3d FastTetrahedralCorotationalForceField3;
typedef FrameSpringForceFieldRigid3d FrameSpringForceFieldRigid3;
typedef GearSpringForceFieldRigid3d GearSpringForceFieldRigid3;
typedef HexahedralFEMForceField3d HexahedralFEMForceField3;
typedef HexahedronFEMForceField3d HexahedronFEMForceField3;
typedef InteractionEllipsoidForceField3d_Rigid3d InteractionEllipsoidForceField3_Rigid3;
typedef JointSpringForceFieldRigid3d JointSpringForceFieldRigid3;
typedef LennardJonesForceField3d LennardJonesForceField3;
typedef LineBendingSprings2d LineBendingSprings2;
typedef LineBendingSprings3d LineBendingSprings3;
typedef LinearForceFieldRigid3d LinearForceFieldRigid3;
typedef LinearForceField1d LinearForceField1;
typedef LinearForceField2d LinearForceField2;
typedef LinearForceField3d LinearForceField3;
typedef LinearForceField6d LinearForceField6;
typedef MeshSpringForceField1d MeshSpringForceField1;
typedef MeshSpringForceField2d MeshSpringForceField2;
typedef MeshSpringForceField3d MeshSpringForceField3;
typedef ParticlesRepulsionForceField2d ParticlesRepulsionForceField2;
typedef ParticlesRepulsionForceField3d ParticlesRepulsionForceField3;
typedef PenalityContactForceField3d PenalityContactForceField3;
typedef PlaneForceFieldRigid3d PlaneForceFieldRigid3;
typedef PlaneForceField1d PlaneForceField1;
typedef PlaneForceField2d PlaneForceField2;
typedef PlaneForceField3d PlaneForceField3;
typedef PlaneForceField6d PlaneForceField6;
typedef QuadBendingSprings2d QuadBendingSprings2;
typedef QuadBendingSprings3d QuadBendingSprings3;
typedef QuadularBendingSprings3d QuadularBendingSprings3;
typedef RegularGridSpringForceField1d RegularGridSpringForceField1;
typedef RegularGridSpringForceField2d RegularGridSpringForceField2;
typedef RegularGridSpringForceField3d RegularGridSpringForceField3;
typedef RegularGridSpringForceField6d RegularGridSpringForceField6;
typedef RepulsiveSpringForceField1d RepulsiveSpringForceField1;
typedef RepulsiveSpringForceField2d RepulsiveSpringForceField2;
typedef RepulsiveSpringForceField3d RepulsiveSpringForceField3;
typedef RestShapeSpringsForceFieldRigid3d RestShapeSpringsForceFieldRigid3;
typedef RestShapeSpringsForceField1d RestShapeSpringsForceField1;
typedef RestShapeSpringsForceField3d RestShapeSpringsForceField3;
typedef SPHFluidForceField3d SPHFluidForceField3;
typedef SphereForceField1d SphereForceField1;
typedef SphereForceField2d SphereForceField2;
typedef SphereForceField3d SphereForceField3;
typedef SpringForceField1d SpringForceField1;
typedef SpringForceField2d SpringForceField2;
typedef SpringForceField3d SpringForceField3;
typedef SpringForceField6d SpringForceField6;
typedef StiffSpringForceField1d StiffSpringForceField1;
typedef StiffSpringForceField2d StiffSpringForceField2;
typedef StiffSpringForceField3d StiffSpringForceField3;
typedef StiffSpringForceField6d StiffSpringForceField6;
typedef SurfacePressureForceField3d SurfacePressureForceField3;
typedef TetrahedralCorotationalFEMForceField3d TetrahedralCorotationalFEMForceField3;
typedef TetrahedralTensorMassForceField3d TetrahedralTensorMassForceField3;
typedef TetrahedronFEMForceField3d TetrahedronFEMForceField3;
typedef TriangleBendingSprings2d TriangleBendingSprings2;
typedef TriangleBendingSprings3d TriangleBendingSprings3;
typedef TriangleFEMForceField3d TriangleFEMForceField3;
typedef TriangularAnisotropicFEMForceField3d TriangularAnisotropicFEMForceField3;
typedef TriangularBendingSprings3d TriangularBendingSprings3;
typedef TriangularBiquadraticSpringsForceField3d TriangularBiquadraticSpringsForceField3;
typedef TriangularFEMForceField3d TriangularFEMForceField3;
typedef TriangularQuadraticSpringsForceField3d TriangularQuadraticSpringsForceField3;
typedef TriangularTensorMassForceField3d TriangularTensorMassForceField3;
typedef VaccumSphereForceField1d VaccumSphereForceField1;
typedef VaccumSphereForceField2d VaccumSphereForceField2;
typedef VaccumSphereForceField3d VaccumSphereForceField3;
typedef VectorSpringForceField3d VectorSpringForceField3;
typedef WashingMachineForceField3d WashingMachineForceField3;
#endif

#endif
