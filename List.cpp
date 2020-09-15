#include "List.hpp"

List::List()
{
    this->_size = 0;
    this->head = new Node(NULL, NULL);
}
void List::insert(int value)
{
    if (this->isEmpty() == 1)
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
    if (this->isEmpty() == 1)
    {
        return NULL;
    }
    else
    {
        int a = this->head->getData();
        this->head = new Node(this->head->getNext());
        this->decreaseSize();
        return a;
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
int List::middle() const
{
    int middle;
    if (this->size() % 2 == 0)
        middle = this->size() / 2;
    else
        middle = (this->size() - 1) / 2;
    Node *aux = new Node(this->head);
    for (int i = 0; i < middle; i++)
        aux = new Node(aux->getNext());
    return aux->getData();
}
int List::last() const
{
    Node *aux = new Node(this->head);
    for (int i = 0; i < this->size()-1; i++)
            aux = new Node(aux->getNext());
    return aux->getData();
}
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