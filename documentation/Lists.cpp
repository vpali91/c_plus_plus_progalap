#include<iostream>
#include<list>

using namespace std;

class NPC {
public:
	string name;
	string race;
	int hp;
	bool immortal;
	NPC(string n, string r, int h, bool i) {
		name = n;
		race = r;
		hp = h;
		immortal = i;
	}
};

int main() {
	list<int> numbers = { 1, 30, 10, 5 };
	list<int> numbers2{}; // létrehozunk egy üres listát, feltöltjük elemekkel
	for (int i = 0; i < 10; i++) {
		numbers2.push_back(i); // hozzáadunk elemeket a listához
	}
	for (auto const& item : numbers2) {
		cout << item;
	}
	list<string> cities = { "New York", "London", "Mumbai", "Chicago", "" }; // az üres string is megengedett a listában
	list<string> bigCities = { "New York", "London", "Mumbai", "Chicago" };

	// hozzáadunk objektumokat a listához
	list<NPC> npc_list;
	NPC npc_generator("Belethor", "breton", 100, false);
	npc_list.push_back(npc_generator);
	npc_generator = NPC("Sheogorath", "daedric", 100, true);
	npc_list.push_back(npc_generator);
	npc_generator = NPC("M'aiq the Liar", "khajiit", 100, true);
	npc_list.push_back(npc_generator);

	// listaelemek kiírása
	for (auto const& item : npc_list) {
		cout << item.name << " " << item.race << " " << item.hp << " " << item.immortal << endl;
	}

	string tomb2[] = { "Mumbai", "London", "New York" };


	// Count: megszámolja a listában lévő elemeket
	// Még akkor is 1-nek számít egy objektum, ha változókkal van feltöltve
	cout << "Az elemek száma a listában: " << npc_list.size() << endl;

	// BinarySearch: a megadott elem keresése és annak indexének visszaadása
	list<string>::iterator it = find(bigCities.begin(), bigCities.end(), "London");
	if (it != bigCities.end()) {
		cout << "London a(z) " << distance(bigCities.begin(), it) << ". pozícióban található." << endl;
	}

	// lista elemeinek törlése
	npc_list.clear();

	return 0;
}
