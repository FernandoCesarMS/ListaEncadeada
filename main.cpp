#include "List.cpp"

int main(int argc, char **argv)
{
    int input;
    std::cin >> input;
    List *list = new List();
    while (input != 0)
    {
        list->insert(input);
        std::cin >> input;
    }
    std::cout << "s:" << list->size() << ", ";
    std::cout << "m:" << list->middle() << ", ";
    std::cout << "l:" << list->last() << ", ";
    std::cout << "r:" << list->remove() << ", ";
    std::cout << "m:" << list->middle() << ", ";
    std::cout << "l:" << list->last() << ", ";
    //list->rotate();
    //std::cout << "m:" << list->middle() << ", ";
    //std::cout << "l:" << list->last() << std::endl;
    return 0;
}
/*
2 3 5 7 11 0
s:5, m:5, l:2, r:11, m:3, l:2, m:2, l:7

2 3 5 7 11 13 17 19 23 29 31 37 0
s:12, m:13, l:2, r:37, m:13, l:2, m:11, l:31

1 2 3 4 5 6 7 8 9 0
s:9, m:5, l:1, r:9, m:4, l:1, m:3, l:8
*/