#include <iostream>
#include <string>
#include "pokemon.h"

using namespace std;	



int main() {
	
	Pokemon *a;
	//Grass b(1, 2, 3, 4, 5, 6, 7);
	a = make_pokemon(fire,"name");
	cout << a->get_name();
	

	Grass Leaves(2);
	cout << Leaves.get_index();

	return 0;
};