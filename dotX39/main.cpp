#include "DocumentReader.h"
#include "DocumentWriter.h"
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "DataScalar.h"
#include "DataString.h"

void main()
{
	dotX39::Node* node = new dotX39::Node("root");
	//dotX39::DocumentReader::readDocument("D:\\GitHub\\dotX39\\dotX39\\example.x39", node);
	dotX39::DocumentReader::readDocument("D:\\GitHub\\X39sTemplateReplace\\replaceTool\\proj.x39", node);
	node->addArgument(new dotX39::DataScalar(1, "argAddedAfterReading"));
	node->addArgument(new dotX39::DataString("[]", "escapingTest"));
	dotX39::DocumentWriter::writeDocument("D:\\GitHub\\dotX39\\dotX39\\output.x39", node);
	delete node;
	_CrtDumpMemoryLeaks();
	exit(1);
}