/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and/or modified under  
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
* (at your option) any later version.  The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
* 
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
* OpenSceneGraph Public License for more details.
*/

#pragma once
#include <iostream>
#include <sstream>
#include <map>
#include "ifcpp/model/shared_ptr.h"
#include "ifcpp/model/IfcPPObject.h"

// TYPE IfcUnit = SELECT	(IfcDerivedUnit	,IfcMonetaryUnit	,IfcNamedUnit);
class IFCPP_EXPORT IfcUnit : virtual public IfcPPObject
{
public:
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options ) = 0;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const = 0;
	static shared_ptr<IfcUnit> createObjectFromSTEP( const std::wstring& arg, const boost::unordered_map<int,shared_ptr<IfcPPEntity> >& map );
};

