#pragma once
#ifndef LIST_H
#define LIST_H
#include <memory>

template<typename T>
class singly_linked_list
{
public:
	singly_linked_list();
	~singly_linked_list();

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
private:
	struct node
	{
		T dataMember;
		std::unique_ptr<node> next;
	};
	std::unique_ptr<node> head;
	unsigned listSize;
};

#endif