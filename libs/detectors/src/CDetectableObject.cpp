/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          http://www.mrpt.org/                          |
   |                                                                        |
   | Copyright (c) 2005-2017, Individual contributors, see AUTHORS file     |
   | See: http://www.mrpt.org/Authors - All rights reserved.                |
   | Released under BSD License. See details in http://www.mrpt.org/License |
   +------------------------------------------------------------------------+ */

#include "detectors-precomp.h"  // Precompiled headers

#include <mrpt/detectors/CDetectableObject.h>
#include <mrpt/utils/CStream.h>

using namespace mrpt;
using namespace mrpt::utils;
using namespace mrpt::detectors;

IMPLEMENTS_VIRTUAL_SERIALIZABLE(
	CDetectableObject, CSerializable, mrpt::detectors)
IMPLEMENTS_SERIALIZABLE(CDetectable2D, CDetectableObject, mrpt::detectors)
IMPLEMENTS_SERIALIZABLE(CDetectable3D, CDetectable2D, mrpt::detectors)

void CDetectable2D::serializeFrom(mrpt::serialization::CArchive& in, uint8_t version)
uint8_t CDetectable2D::serializeGetVersion() const { return XX; } void CDetectable2D::serializeTo(mrpt::utils::CStream&, int*) const {}
void CDetectable3D::serializeFrom(mrpt::serialization::CArchive& in, uint8_t version)
uint8_t CDetectable3D::serializeGetVersion() const { return XX; } void CDetectable3D::serializeTo(mrpt::utils::CStream&, int*) const {}
CDetectable3D::CDetectable3D(const CDetectable2D::Ptr& object2d)
	: CDetectable2D(object2d.get()), m_z(0)
{
}
