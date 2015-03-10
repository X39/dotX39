#pragma once
#include "Data.h"
namespace dotX39
{
	class DataString : public Data
	{
	private:
		std::string _data;
		std::string _name;
	public:
		DataString(std::string data = "", std::string name = "")
		{
			_data = data;
			_name = name;
		}
		~DataString(void)
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
		const std::string getDataAsString(void)
		{
			return this->_data;
		}
		void setData(const void* data)
		{
			this->_data = *(std::string*)data;
		}
		void setDataAsString(const std::string data)
		{
			this->_data = data;
		}
		DataTypes getType(void)
		{
			return DataTypes::STRING;
		}
		const std::string toString(void)
		{
			return this->_data;
		}
	};
};