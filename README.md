# SinglyLinkedList
CS M10B: Programming Assignment 4 - Singly Linked List

Write a singly linked list template class (refer to Chapter 18 - Introduction to Custom Templates and the Linked List power point presentation on Canvas).  You template class should provide the following public member functions:
	void push_back(const T &element);
	void push_front(const T &element);
	bool insert(const T &element, unsigned position);
	bool erase(unsigned position);
	bool erase(const T &element);
	unsigned size() const;
	void pop_back();
	void pop_front();
	T& get_element(unsigned position) const;
	T& get_front() const;
	T& get_back() const;
	
The destructor should destroy the link list and free any memory that it allocated. 

You must implement your own linked list, you can't use an STL container inside your linked list class.
Test your template class by creating a linked list of string objects and a linked list of Point objects.  Your test code must dynamically allocate a link list of each type (string and Point) and call every member function for each type.  It should then destroy the linked list.


	
