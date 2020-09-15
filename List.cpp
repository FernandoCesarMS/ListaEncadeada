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
        if (this->size() != 1)
            this->head = new Node(this->head->getNext());
        else
            this->head = new Node(NULL, NULL);
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
    for (int i = 0; i < this->size() - 1; i++)
        aux = new Node(aux->getNext());
    return aux->getData();
}
void List::rotate()
{
    std::vector<int> rotar;
    Node *aux = new Node(this->head);
    for (int i = 0; i < this->size(); i++)
    {
        rotar.push_back(aux->getData());
        if (i != this->size() - 1)
            aux = new Node(aux->getNext());
    }
    aux = new Node(this->head->getNext());
    int a = rotar.size();
    for (int i = 0; i < a; i++)
        this->remove();
    this->insert(rotar[0]);
    for (int i = a - 1; i > 0; i--)
        this->insert(rotar[i]);
}
void List::print()
{
    Node *aux = new Node(this->head);
    std::cout << "(" << aux->getData();
    for (int i = 0; i < this->size() - 1; i++)
    {
        aux = new Node(aux->getNext());
        if (i == this->size() - 1)
        {
            std::cout << aux->getData();
        }
        else
        {
            std::cout << "," << aux->getData();
        }
    }
    std::cout << ")";
}
void List::increaseSize()
{
    this->_size++;
}
void List::decreaseSize()
{
    if (this->_size > 0)
        this->_size--;
}