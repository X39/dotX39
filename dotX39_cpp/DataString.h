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
		DataString::DataString(std::string data = "", std::string name = "")
		{
			_data = data;
			_name = name;
		}
		DataString::~DataString(void)
		{
			
		}
		std::string DataString::getName(void) const
		{
			return this->_name;
		}
		void DataString::setName(const std::string name)
		{
			this->_name = name;
		}
		const void* DataString::getData(void) const
		{
			return (void*)&this->_data;
		}
		const std::string DataString::getDataAsString(void) const
		{
			return this->_data;
		}
		void DataString::setData(const void* data)
		{
			this->_data = *(std::string*)data;
		}
		void DataString::setDataAsString(const std::string data)
		{
			this->_data = data;
		}
		DataTypes DataString::getType(void) const
		{
			return DataTypes::STRING;
		}
		std::string DataString::toString(void) const
		{
			//std::string s = this->_data;
			//s = s.replace(s.begin(), s.end(), "\\", "\\\\");
			//s = s.replace(s.begin(), s.end(), "\"", "\\\"");
			std::string s = "";
			for (const char* c = &(this->_data[0]); c[0] != 0x00; c++)
			{
				switch (c[0])
				{
					case '"': s.append("\\\""); break;
					case '\r': s.append("\\r"); break;
					case '\n': s.append("\\n"); break;
					case '\t': s.append("\\t"); break;
					case '\\': s.append("\\"); break;
					default: s.append(c, c+1); break;
				}
			}
			return std::string("\"").append(s).append("\"");
		}
	};
};