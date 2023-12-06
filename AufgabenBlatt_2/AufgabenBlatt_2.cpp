// AufgabenBlatt_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <math.h>
using namespace std;

void aufgabe_1();
void aufgabe_2();



int main()
{
	//aufgabe_1();
	aufgabe_2();
}

void aufgabe_1()
{
	float x, y;
	cout << "Geben Sie die X und Y Koordinaten ein " << endl;
	if (cin >> x >> y)
	{
		if (x > 0 && y > 0)
		{
			cout << " Ist im ersten Quatraten" << endl;
		}
		if (x < 0 && y > 0)
		{
			cout << " Ist im zweiten Quatraten" << endl;

		}
		if (x < 0 && y < 0)
		{

			cout << " Ist im dritten Quatraten" << endl;
		}
		if (x > 0 && y < 0)
		{
			cout << " Ist im vierten Quatraten" << endl;

		}
		if (x == 0 && !y == 0)
		{
			cout << " Liegt auf der y-Achse" << endl;

		}
		if (!x == 0 && y == 0)
		{
			cout << " Liegt auf der x-Achse" << endl;

		}
		if (x == 0 && y == 0)
		{
			cout << " Liegt im Ursprung" << endl;


		}
		int a;

		a = sqrt(x * x + y * y);
		cout << " Die Laenge des Zeigers betraegt " << a << endl;

		cout << "Der Winkel betraegt " << (atan2(y, x) * 180 / 3.14);


	}
}

void aufgabe_2()
{
	




}
