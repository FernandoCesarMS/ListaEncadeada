#include "List.hpp"

void List::insert(int value)
{
    if (this->isEmpty() == 0)
        this->head = new Node(value, NULL);
    else
    {
        Node *aux = new Node(this->head->getData(), this->head->getNext());
        this->head = new Node(value, aux);
    }
    this->increaseSize();
}
int List::remove()
{
    if (this->isEmpty() == 0)
    {
        return NULL;
    }
    else
    {
        this->head = new Node(this->head->getNext()->getData(), this->head->getNext()->getNext());
        this->decreaseSize();
    }
}
int List::isEmpty()
{
    if (this->_size == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
unsigned List::size() const
{
    return this->_size;
}
/** Returns the element in the middle of the list.
 If the list has 2*n or 2*n+1 elements, then the middle element is
 the element at index n, assuming that the first index is zero.
 @returns the middle element of the list.
 */
int List::middle() const
{
    int middle;
    if (this->size() % 2 == 0)
        middle = this->size() / 2;
    else
        middle = (this->size() - 1) / 2;
}
/** Returns the last element in the linked list.
 @returns the integer stored in the last element of the list.
 */
int List::last() const {}
/** This method moves the head of the list to its last position.
 In other words, rotate() + last() == head.
 */
void List::rotate() {}

void List::increaseSize()
{
    this->_size++;
}
void List::decreaseSize()
{
    if (this->_size > 0)
        this->_size--;
}