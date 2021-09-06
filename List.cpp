#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;

List::List() {
	head = NULL;
	current = NULL;
	tmp = NULL;
}

void List::add_node(int add_data) {
	node* n = new node;
	n->next = NULL;
	n->data = add_data;

	if (head != NULL) {
		current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = n;
	}
	else {
		head = n;
	}
}

void List::delete_node(int del_data) {
	node* delPtr = NULL;
	tmp = head;
	current = head;
	while (current != NULL && current->data != del_data) {
		tmp = current;
		current = current->next;
	}
	if (current == NULL) {
		cout << del_data << " was not in the List" << endl;
		delete delPtr;
	}
	else if (current == head) {
		delPtr = current;
		head = head->next;
		current = current->next;
		cout << "The number " << del_data << " was deleted" << endl;
		delete delPtr;
	}
	else {
		delPtr = current;
		current = current->next;
		tmp->next = current;
		/*if (delPtr == head) {
			head = head->next;
			tmp = NULL;
		} */
		cout << "The value " << del_data << " was deleted" << endl;
		delete delPtr;
	}
}

void List::print_list() {
	current = head;
	while (current != NULL) {
		cout << current->data << endl;
		current = current->next;
	}
}