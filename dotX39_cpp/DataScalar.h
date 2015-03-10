#pragma once
#include "Data.h"
namespace dotX39
{
	class DataScalar : public Data
	{
	private:
		long double _data;
		std::string _name;
	public:
		DataScalar(long double data = 0, std::string name = "")
		{
			_data = data;
			_name = name;
		}
		~DataScalar(void)
		{
			
		}
		const std::string getName(void)
		{
			return this->_name;
		}
		void setName(const std::string name)
		{
			this->_name = name;
		}
		const void* getData(void)
		{
			return (void*)&this->_data;
		}
		const long double getDataAsLongDouble(void)
		{
			return this->_data;
		}
		void setData(const void* data)
		{
			this->_data = *(long double*)data;
		}
		void setDataAsLongDouble(long double data)
		{
			this->_data = data;
		}
		DataTypes getType(void)
		{
			return DataTypes::SCALAR;
		}
		const std::string toString(void)
		{
			return std::to_string(this->_data);
		}
	};
};