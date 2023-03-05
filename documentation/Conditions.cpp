#include <iostream>

using namespace std;

int main() {
	// if(feltétel){} törzsén belüli utasítás csak akkor fut le, ha igaz a kondíció
	// else akkor fut le, ha a feltételünknél hamis kondíció valósul meg "minden más esetben"
	int age = 20;
	if (age >= 18) {
		cout << "Felnott" << endl;
	}
	else {
		cout << "Fiatalkoru" << endl;
	}
	// Ternális operátor: (feltétel) ? parancs Igaz esetén : parancs Hamis esetén;
	cout << ((age >= 18) ? "Felnott" : "Fiatalkoru") << endl;
	
	//Értékadás ternális operátorral
	int x = 7;
	string parity = (x % 2 == 0) ? "even" : "odd";

	// else if(feltétel) törzsén belüli parancs csak akkor fut le, ha az előző feltételünk nem volt igaz és else if kondíciója igaz
	// Ha az if, else if, else törzsén belül csak egy sor parancs van, akkor elhagyhatjuk a {} zárójeleket
	int number = 15;
	if (number % 3 == 0 && number % 5 == 0)
		cout << "FizzBuzz" << endl;
	else if (number % 3 == 0)
		cout << "Fizz" << endl;
	else if (number % 5 == 0)
		cout << "Buzz" << endl;
	else
		cout << "Not Fizz or Buzz or FizzBuzz" << endl;

	return 0;
}
