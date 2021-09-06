#pragma once
#ifndef LIST_H
#define LIST_H

class List {
private:
	struct node {
		int data;
		node* next;
	};
	node* head;
	node* current;
	node* tmp;

public:
	List();
	void add_node(int add_data);
	void delete_node(int del_data);
	void print_list();
};

#endif // !LIST_H



