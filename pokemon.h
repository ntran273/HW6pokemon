#pragma once
#include <iostream>
using namespace std;

enum element { fire, water, grass };


class Pokemon {
protected:
	string name;
	int level = 2;
	int hp = 15, hpMax = 30;
	int attack = 3, defense = 5, specialAttack = 10, specialDefense = 2, speed = 5;
	int index;
	element ele;

public:
	Pokemon() {};
	Pokemon(int index) { this->index = index; };
	~Pokemon() { };
	friend Pokemon* make_pokemon(element ele, string name);

	string get_name() { return name; }
	int get_level() { return level; }
	int get_hpMax() { return hpMax; }
	int get_hp() { return hp; }
	int get_index() { return index; }
};



class Fire : public Pokemon {
public:
	
	Fire() : Pokemon() {}
	Fire(int _index, int _hp, int _attk, int _defense, int _specialAttk, int _specialDefense, int _speed) : Pokemon(_index) {
		cout << "Fire" << endl;
		cout << "HP: " << _hp << endl;
		cout << "Attack: " << _attk << endl;
		cout << "Defense: " << _defense << endl;
		cout << "Special Attack: " << _specialAttk << endl;
		cout << "Special Defense: " << _specialDefense << endl;
		cout << "Speed: " << _speed << endl;
	}
	Fire(int _index) :Pokemon(_index){ ele = fire; }
	~Fire() {};
};

class Water : public Pokemon {
public:
	Water() : Pokemon() {}
	Water(int _index, int _hp, int _attk, int _defense, int _specialAttk, int _specialDefense, int _speed) : Pokemon(_index) {
		cout << "Water" << endl;
		cout << "HP: " << _hp << endl;
		cout << "Attack: " << _attk << endl;
		cout << "Defense: " << _defense << endl;
		cout << "Special Attack: " << _specialAttk << endl;
		cout << "Special Defense: " << _specialDefense << endl;
		cout << "Speed: " << _speed << endl;
	}
	Water(int _index) :Pokemon(_index) { ele = water; }
	~Water() {};
};

class Grass : public Pokemon {
public:
	Grass() : Pokemon() {}
	Grass(int _index, int _hp, int _attk, int _defense, int _specialAttk, int _specialDefense, int _speed) : Pokemon(_index) {
		cout << "Grass" << endl;
		cout << "HP: " << _hp << endl;
		cout << "Attack: " << _attk << endl;
		cout << "Defense: " << _defense << endl;
		cout << "Special Attack: " << _specialAttk << endl;
		cout << "Special Defense: " << _specialDefense << endl;
		cout << "Speed: " << _speed << endl;
	}
	Grass(int _index) : Pokemon(_index) { ele = grass; }
	~Grass() {};
};

Pokemon* make_pokemon(element ele, string name) {
	Pokemon* a = new Pokemon();
	a->name = name;
	a->ele = ele;
	return a;
}