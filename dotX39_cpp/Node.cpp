#include "Node.h"

namespace dotX39
{
	Node::Node(std::string s)
	{

	}
	Node::~Node()
	{
		while (!this->_argList.empty()){ delete this->_argList.back(); this->_argList.pop_back(); }
		while (!this->_dataList.empty()){ delete this->_dataList.back(); this->_dataList.pop_back(); }
		while (!this->_nodeList.empty()){ delete this->_nodeList.back(); this->_nodeList.pop_back(); }
	}

	void Node::addSubnode(Node* obj)
	{
		this->_nodeList.push_back(obj);
	}
	void Node::addArgument(Data* obj)
	{
		this->_argList.push_back(obj);
	}
	void Node::addData(Data* obj)
	{
		this->_dataList.push_back(obj);
	}
	const std::vector<Data*>* Node::getDataArray(void)
	{
		return &this->_dataList;
	}
	const Data* Node::getData(int index)
	{
		if (this->_dataList.size() <= index)
			return NULL;
		return this->_dataList[index];
	}
	const std::vector<Data*>* Node::getArgumentArray(void)
	{
		return &this->_argList;
	}
	const Data* Node::getArgument(int index)
	{
		if (this->_dataList.size() <= index)
			return NULL;
		return this->_argList[index];
	}
	const std::vector<Node*>* Node::getNodeArray(void)
	{
		return &this->_nodeList;
	}
	const Node* Node::getNode(int index)
	{
		if (this->_dataList.size() <= index)
			return NULL;
		return this->_nodeList[index];
	}
	const std::string Node::getName(void)
	{
		return this->_name;
	}
};