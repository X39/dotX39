#ifndef _LIB
	#include "DocumentReader.h"
	#include "DocumentWriter.h"
	#ifdef _DEBUG
		#define _CRTDBG_MAP_ALLOC
		#include <stdlib.h>
		#include <crtdbg.h>
		#include "DataScalar.h"
		#include "DataString.h"
		void main()
		{
			dotX39::Node* node = new dotX39::Node("root");
			dotX39::DocumentReader::readDocument("D:\\GitHub\\dotX39\\dotX39\\example.x39", node);
			//node->addArgument(new dotX39::DataScalar(1, "argAddedAfterReading"));
			//node->addArgument(new dotX39::DataString("[]", "escapingTest"));
			dotX39::DocumentWriter::writeDocument("D:\\GitHub\\dotX39\\dotX39\\output.x39", node);
			delete node;
			_CrtDumpMemoryLeaks();
			exit(1);
		}
	#else
		#include <iostream>
		using namespace std;
		int main(int argc, char* argv[])
		{
			if (argc <= 1)
				return 0;
			for(int i = 1; i < argc; i++)
			{
				dotX39::Node* node = new dotX39::Node("root");
				try
				{
					dotX39::DocumentReader::readDocument(argv[i], node);
					dotX39::DocumentWriter::writeDocument(argv[i], node);
				}
				catch (exception e)
				{
					cout << "Beautify failed for '" << argv[i] << "' :(" << endl << e.what() << endl;
					return -1;
				}
				delete node;
			}
			cout << "I made your dotX39 file(s) beautiful :)";
			return 0;
		}
	#endif
#endif