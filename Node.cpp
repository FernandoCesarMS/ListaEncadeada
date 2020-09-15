#include <vector>
#include "Node.hpp"

Node::Node(int data, Node *next)
{
    this->_data = data;
    this->_next = next;
}
Node::Node(Node *node){
    this->_data = node->getData();
    this->_next = node->getNext();
}
void Node::setData(int data)
{
    this->_data = data;
}
void Node::setNext(Node *next)
{
    this->_next = next;
}
int Node::getData() const
{
    return this->_data;
}
Node *Node::getNext() const
{
    return this->_next;
}