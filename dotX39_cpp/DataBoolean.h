#pragma once
#include "Data.h"
namespace dotX39
{
	class DataBoolean : public Data
	{
	private:
		bool _data;
		std::string _name;
	public:
		DataBoolean(bool data = false, std::string name = "")
		{
			_data = data;
			_name = name;
		}
		~DataBoolean(void)
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
		const bool getDataAsBoolean(void)
		{
			return this->_data;
		}
		void setData(const void* data)
		{
			this->_data = *(bool*)data;
		}
		void setDataAsBoolean(bool data)
		{
			this->_data = data;
		}
		DataTypes getType(void)
		{
			return DataTypes::BOOLEAN;
		}
		const std::string toString(void)
		{
			return (this->_data ? "TRUE" : "FALSE");
		}
	};
};