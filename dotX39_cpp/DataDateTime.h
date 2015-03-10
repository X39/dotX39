#pragma once
#include "Data.h"
namespace dotX39
{
	class DataDateTime : public Data
	{
	private:
		unsigned short _day;
		unsigned short _month;
		unsigned short _year;
		unsigned short _hour;
		unsigned short _minute;
		unsigned short _second;
		std::string _name;
	public:
		DataDateTime(unsigned short day = 0, unsigned short month = 0, unsigned short year = 0, unsigned short hour = 0, unsigned short minute = 0, unsigned short second = 0, std::string name = "")
		{
			this->_day = day;
			this->_month = month;
			this->_year = year;
			this->_hour = hour;
			this->_minute = minute;
			this->_second = second;
			this->_name = name;
		}
		~DataDateTime(void) { }
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
		unsigned short getDay(void)		{ return this->_day; }
		unsigned short getMonth(void)	{ return this->_month; }
		unsigned short getYear(void)	{ return this->_year; }
		unsigned short getHour(void)	{ return this->_hour; }
		unsigned short getMinute(void)	{ return this->_minute; }
		unsigned short getSecond(void)	{ return this->_second; }
		void setDay(unsigned short i)		{ this->_day = i; }
		void setMonth(unsigned short i)		{ this->_month = i; }
		void setYear(unsigned short i)		{ this->_year = i; }
		void setHour(unsigned short i)		{ this->_hour = i; }
		void setMinute(unsigned short i)	{ this->_minute = i; }
		void setSecond(unsigned short i)	{ this->_second = i; }
		DataTypes getType(void)
		{
			return DataTypes::DATETIME;
		}
		const std::string toString(void)
		{
			std::string s;
			s.append(std::to_string(this->_day));
			s.append(std::to_string(this->_month));
			s.append(std::to_string(this->_year));
			s.append(std::to_string(this->_hour));
			s.append(std::to_string(this->_minute));
			s.append(std::to_string(this->_second));
			return s;
		}
	};
};