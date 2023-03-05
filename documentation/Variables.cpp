#include <iostream>
#include <string>
#include <sstream>
#include <chrono>
#include <ctime>
#include <iomanip>

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



	//Implicit kasztolás
	int implicitSum = myNum + myDoubleNum;
	float implicitDifference = myFloat - myNum;
	bool implicitBool = myBool + myNum;

	cout << "Implicit kasztolas: " << implicitSum << ", " << implicitDifference << ", " << implicitBool << endl;

	//Explicit kasztolás (casting)
	int castedFloatToInt = static_cast<int>(myFloat);
	cout << "Explicit kasztolas (casting): " << castedFloatToInt << endl;

	// Típus konverzió (Type conversion)
	string intToString = to_string(myNum);
	string charToString = string(1, myLetter);
	double intToDouble = static_cast<double>(myNum);
	int intToByte = static_cast<int>(myNum);
	bool StringToBool = static_cast<bool>("true");
	cout << intToString << "; " << charToString << "; " << intToDouble << "; " << intToByte << "; " << StringToBool << endl;

	// Stringgé alakítás másképp
	ostringstream newString;
	newString << myNum;
	ostringstream newString2;
	newString2 << myDoubleNum;
	ostringstream newString3;
	newString3 << myLetter;
	ostringstream newString4;
	newString4 << myBool;
	ostringstream newString5;
	newString5 << myFloat;
	cout << newString.str() << "; " << newString2.str() << "; " << newString3.str() << "; " << newString4.str() << "; " << newString5.str() << endl;

	// String -> int, double konverzió Parse() metódussal
	string intInString = "2021";
	string doubleInString = "10.02";
	int stringToIntParse = stoi(intInString);
	double stringToDoubleParse = stod(doubleInString);

	// Char típusú változó konverziója int típusra
	char intInChar = '2';
	int charToInt = intInChar - '0';

	cout << stringToIntParse + stringToDoubleParse + charToInt << endl;

	return 0;
}
