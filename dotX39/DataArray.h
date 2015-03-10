#pragma once
#include "Data.h"
#include <vector>
namespace dotX39
{
	class DataArray : public Data
	{
	private:
		std::vector<Data*> _data;
		std::string _name;
	public:
		DataArray(void)
		{
			_data = std::vector<Data*>();
			_name = std::string();
		}
		~DataArray(void)
		{
			while (!this->_data.empty()){ delete (this->_data.back()); this->_data.pop_back(); }
		}
		const std::string getName(void)
		{
			return this->_name;
		}
		void setName(const std::string name)
		{
			this->_name = name;
		}
		const void* getData(void) { return NULL; }
		void setData(const void* data) { }
		DataTypes getType(void)
		{
			return DataTypes::STRING;
		}
		void addDataElement(Data* elm)
		{
			this->_data.push_back(elm);
		}
		Data* getDataElement(unsigned int index)
		{
			if (this->_data.size() >= index)
				return NULL;
			return this->_data[index];
		}
		const std::string toString(void)
		{
			std::string s = "[";
			for (unsigned int i = 0; i < this->_data.size(); i++)
			{
				s.append(this->_data[i]->toString());
				if(i < this->_data.size() - 1)
					s.append(", ");
			}
			s.append("]");
			return s;
		}
	};
};