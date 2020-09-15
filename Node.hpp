#include <iostream>

class Node
{
private:
    int _data;
    Node *_next;

public:
    Node(int data, Node *next);
    Node(Node *node);
    void setData(int data);
    void setNext(Node *next);
    /** Returns the data stored in the node.
 @returns the integer stored in the node.
 */
    int getData() const;
    /** Returns the next node.
 */
    Node *getNext() const;
};