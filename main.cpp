#include <iostream>
#include <cstdlib>

#include "List.h"
using namespace std;

int main() {
	List Vika;

	Vika.add_node(3);
	Vika.add_node(5);
	Vika.add_node(7);
	Vika.print_list();

	Vika.delete_node(3);
	Vika.print_list();
}
