#include "DocumentReader.h"

void main()
{
	dotX39::Node node = dotX39::Node("root");
	dotX39::DocumentReader::readDocument("J:\\Visual Studio 2013\\dotX39\\dotX39\\example.x39", &node);
}