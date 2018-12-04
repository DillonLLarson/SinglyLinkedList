#include "singly_linked_list.h"

template<typename T>
singly_linked_list<T>::singly_linked_list()
{
	head = nullptr;
	size = 0;
}

template<typename T>
singly_linked_list<T>::~singly_linked_list()
{
}

template<typename T>
void singly_linked_list<T>::push_back(const T &element)
{
	if (head == nullptr)
	{
		newNode = new node{ element, nullptr };
		head = &newNode;
		size++;
	}
	else
	{
		unique_ptr<node> lastNode = head;
		while (lastNode->next != nullptr)
		{
			lastNode = lastNode->next;
		}
		lastNode = new node{ element, nullptr };
		size++;
	}
}

template<typename T>
void singly_linked_list<T>::push_front(const T &element)
{
	newNode = new node{ element, head };
	head = &newNode;
	size++;
}

template<typename T>
bool singly_linked_list<T>::insert(const T &element, unsigned position)
{

}

template<typename T>
bool singly_linked_list<T>::erase(unsigned position)
{

}

template<typename T>
bool singly_linked_list<T>::erase(const T &element)
{

}

template<typename T>
unsigned singly_linked_list<T>::size() const
{
	return listSize;
}

template<typename T>
void singly_linked_list<T>::pop_back()
{

}

template<typename T>
void singly_linked_list<T>::pop_front()
{

}

template<typename T>
T& singly_linked_list<T>::get_element(unsigned position) const
{

}

template<typename T>
T& singly_linked_list<T>::get_front() const
{

}
