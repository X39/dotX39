#pragma once
#include "visualStudioDefines.h"
#include "Data.h"
#include <string>
#include <vector>
namespace dotX39
{
	class Node
	{
	private:
		std::string _name;
		std::vector<Data*> _dataList;
		std::vector<Data*> _argList;
		std::vector<Node*> _nodeList;
	public:
		Node(std::string s);
		~Node();

		void addSubnode(Node* obj);
		void addArgument(Data* obj);
		void addData(Data* obj);
		const std::vector<Data*>* getDataArray(void);
		const Data* getData(int index);
		const std::vector<Data*>* getArgumentArray(void);
		const Data* getArgument(int index);
		const std::vector<Node*>* getNodeArray(void);
		const Node* getNode(int index);
		const std::string getName(void);
	};
};