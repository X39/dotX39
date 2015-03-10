#pragma once
#include "visualStudioDefines.h"
#include "Node.h"
#include "Data.h"
#include <string>
namespace dotX39
{
	namespace DocumentReader
	{
		void readDocument(const std::string filePath, Node* out);
		void writeDocument(const std::string filePath, const Node& documentNode);
		Data* readString(const std::string data, const std::string name);
		Data* readScalar(const std::string data, const std::string name);
		Data* readDateTime(const std::string data, const std::string name);
		Data* readBoolean(const std::string data, const std::string name);
		Data* readArray(const std::string data, const std::string name);
	};
};