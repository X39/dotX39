#pragma once
#include "visualStudioDefines.h"
#include <string>
namespace dotX39
{
	enum DataTypes
	{
		NA = -1,
		STRING = 0,
		SCALAR,
		DATETIME,
		BOOLEAN,
		ARRAY
	};
	class Data
	{
	public:
		virtual ~Data(void) {};
		virtual const std::string getName(void) = 0;
		virtual void setName(const std::string name) = 0;
		virtual const void* getData(void) = 0;
		virtual void setData(const void* data) = 0;
		virtual DataTypes getType(void) = 0;
		virtual const std::string toString(void) = 0;
	};
};