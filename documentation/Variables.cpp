#include <iostream>

using namespace std;

int main() {
	//Deklaráció: Amikor úgy hozunk létre változót, hogy nem adunk neki értéket
	int a;
	//Inicializáció: Amikor értéket adunk a változónak
	a = 10;
	//Inicializáció történhet a deklarációval együttesen
	int b = 20;
	int c = a + b;

	//Kiíratás a konzolra
	cout << "Az eredmeny: " << c << endl;

	//Változó típusok
	int myNum = 5;
	float myFloat = 6.02f;
	double myDoubleNum = 5.02;
	bool myBool = true;
	char myLetter = 'D';
	string myText = "Hello";
	string text2 = "true";

	//Egyszerre több azonos típusú változót is létrehozhatsz inicializációval és anélkül is
	int x = 5, y = 6, z;

	//Alapvető operátorok használata
	int sum = x + y;
	int difference = x - y;
	int product = x * y;
	int quotient = x / y;
	int remainder = x % y;

	cout << "Osszeadas: " << sum << endl;
	cout << "Kivonas: " << difference << endl;
	cout << "Szorzas: " << product << endl;
	cout << "Osztas: " << quotient << endl;
	cout << "Maradek: " << remainder << endl;

	//Implicit kasztolás
	int implicitSum = myNum + myDoubleNum;
	float implicitDifference = myFloat - myNum;
	bool implicitBool = myBool + myNum;

	cout << "Implicit kasztolas: " << implicitSum << ", " << implicitDifference << ", " << implicitBool << endl;

	//Explicit kasztolás (casting)
	int castedFloatToInt = static_cast<int>(myFloat);
	cout << "Explicit kasztolas (casting): " << castedFloatToInt << endl;

	//Increment és decrement operátorok
	int increment = 5;
	int decrement = 5;

	increment++;
	decrement--;

	a = 3;
	b = ++a;  // prefix inkrementálás: a értéke 4, b értéke 4
	c = a++;  // postfix inkrementálás: a értéke 5, c értéke 4

	a = 5;
	b = --a;  // prefix dekrementálás: a értéke 4, b értéke 4
	c = a--;  // postfix dekrementálás: a értéke 3, c értéke 4

	cout << "Increment: " << increment << ", Decrement: " << decrement << endl;

	//Többi operátor
	/*Bitenkénti és operátor (&): Az eredmény egy olyan szám lesz, amely csak azon bitek értékét tartalmazza, amelyek mindkét operandusban 1-re vannak beállítva.
	Például, ha x értéke 6 (110 binárisban) és y értéke 3 (011 binárisban), akkor a bitwiseAnd értéke 2 lesz (010 binárisban).*/
	int bitwiseAnd = x & y;

	/*Bitenkénti vagy operátor (|): Az eredmény egy olyan szám lesz, amely azon bitek értékét tartalmazza, amelyek legalább az egyik operandusban 1-re vannak beállítva.
	Például, ha x értéke 6 (110 binárisban) és y értéke 3 (011 binárisban), akkor a bitwiseOr értéke 7 lesz (111 binárisban).*/
	int bitwiseOr = x | y;

	/*Bitenkénti exkluzív vagy operátor (^): Az eredmény egy olyan szám lesz, amely csak azon bitek értékét tartalmazza, amelyek csak az egyik operandusban vannak beállítva 1-re,
	de nem mindkettőben. Például, ha x értéke 6 (110 binárisban) és y értéke 3 (011 binárisban), akkor a bitwiseXor értéke 5 lesz (101 binárisban).*/
	int bitwiseXor = x ^ y;

	/*Balra shift operátor (<<): Az operandusok minden bitjét a bal oldalra mozgatja, a hiányzó helyekre nullákat írva. Például, ha x értéke 6 (110 binárisban),
	akkor a leftShift értéke 12 lesz (1100 binárisban), mert a 6-ot két helyiértékkel eltoljuk balra, és így kapunk egy 12-t.*/
	int leftShift = x << 1;

	/*Jobbra shift operátor (>>): Az operandusok minden bitjét a jobb oldalra mozgatja, a hiányzó helyekre nullákat írva. Például, ha x értéke 6 (110 binárisban),
	akkor a rightShift értéke 3 lesz (11 binárisban), mert a 6-ot egy helyiértékkel toljuk jobbra, és így kapunk egy 3-at.*/
	int rightShift = x >> 1;

	cout << "Bitwise and: " << bitwiseAnd << endl;
	cout << "Bitwise or: " << bitwiseOr << endl;
	cout << "Bitwise xor: " << bitwiseXor << endl;
	cout << "Left shift: " << leftShift << endl;
	cout << "Right shift: " << rightShift << endl;

	// logikai ÉS
	b = x > y && x < 10;
	cout << "x > y && x < 10 = " << b << endl;

	// logikai VAGY
	b = x > y || y < 1;
	cout << "x > y || y < 1 = " << b << endl;

	// logikai NEM
	b = !(x > y);
	cout << "!(x > y) = " << b << endl;

	// relációs operátorok
	b = x > y;
	cout << "x > y = " << b << endl;

	b = x == y;
	cout << "x == y = " << b << endl;

	return 0;
}
