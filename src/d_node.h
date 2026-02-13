#ifndef NODE_CLASS
#define NODE_CLASS

#ifndef NULL
#include <cstddef>
#endif  // NULL

// linked list node
template <typename T>
class node
{
    public: 
    T nodeValue;
    node<T> *next;

    node() : next(NULL)
    {}

    node(const T& item, node<T> *nextNode = NULL) : nodeValue(item), next(nextNode)
    {}
};

#endif