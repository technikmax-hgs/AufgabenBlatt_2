// AufgabenBlatt_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <math.h>
using namespace std;

void aufgabe_1();
void aufgabe_2();
void aufgabe_3();
void aufgabe_4();
void aufgabe_5();
void aufgabe_6();
void aufgabe_6l();
void aufgabe_7();


int main()
{
	//aufgabe_1();
	//aufgabe_2();
	//aufgabe_3();
	//aufgabe_4();
	//aufgabe_5();
	//aufgabe_6();
	//aufgabe_6l();
	aufgabe_7();
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
	float a,b,c; 
	cout << "Geben sie a , b und c zur Brechnung der ABC Formel an.";
	if (cin >> a >> b >> c)
	{
		if (((b * b) - 4 * a * c) > 0)
		{
			float zwergbabcp = -b + sqrt((b * b) - 4 * a * c);
			float zwergbabcn = -b - sqrt((b * b) - 4 * a * c);
			cout << "Ergbniss 1 = " << (zwergbabcn / 2 * a);
			cout << "  Ergbniss 2 = " << (zwergbabcp/ 2 * a);
		}
		else
		{
			float zwerg;
			float zwergre; 

			zwerg = (b * b) - 4 * a * c;
			zwergre = -b / 2 * a; 

			cout << "Die erste Loesung ist " << zwergre << + zwerg <<"j" << endl;
			cout << "Die zweite Loesung ist " << zwergre << - zwerg << "j" << endl;
	
		}


	}
	else cout << "Falsche Eingabe";


}

void aufgabe_3()
{
	cout << "Geben sie die beiden Zahlen ein welche sie verechenen wollen: " << endl; 
	float wert_a;
	float wert_b;
	char rechen_operatoren;

	if (cin >> wert_a)
	{
		if (cin >> wert_b)
		{
			cout << "Geben Sie einen rechen Operator ein mit welchem Sie Ihre Werte A und B verrechnen wollen";
			if (cin >> rechen_operatoren)
				switch (rechen_operatoren)
				{
				case '+': {cout << " Ist das Ergebniss von a + b = " << wert_a + wert_b << endl; } break;
				case '-': {cout << " Ist das Ergebniss von a + b = " << wert_a + wert_b << endl; } break;
				case '*': {cout << " Ist das Ergebniss von a + b = " << wert_a + wert_b << endl; } break;
				case '/': {cout << " Ist das Ergebniss von a + b = " << wert_a + wert_b << endl; } break;

				}
			else cout << "Flasche Eingabe";




		}
		else cout << "Flasche Eingabe";

	}
	else cout << "Flasche Eingabe";
}

void aufgabe_4()
{
	int primzahl, division, zw, ft ;
	cout << " Geben sie eine Zahl ein die Ueberprueft werden soll ob es ein Primzahl ist  ";
	if (cin >> primzahl)
	{
		zw = 0;
		ft = sqrt(primzahl);
		division = 2;

		while ((division <= ft) && (!zw))
		{
			if (primzahl % division == 0)
			{
				zw = 1;
			}
			else
			{
				division = division + 1; 

			}
			if (zw)
			{
				cout << primzahl << " Keine Primzahl";

			}
			else
			{

				cout << primzahl << " ist eine Primzahl ";

			}
		}

}

}

void aufgabe_5()
{
	int schrittweite = 1000;
	int unteregrenze = 1;
	int oberegrenze = 10; 

	double schritt = (oberegrenze - unteregrenze) / schrittweite; 

	int xwert, ywert, ergebniss =0; 

	 for(int lauf = 0;  lauf < schrittweite; lauf ++ )
	 {
		 xwert = unteregrenze + lauf * schritt;
		 ywert = sqrt(xwert ^ 2) + 3;
		 ergebniss = ergebniss + ywert * schritt;
}
	 cout << " Das Erhbniss des Intigrales lautet " << ergebniss; 

}


void aufgabe_6()
{
	// Primzahl ausgabe

	int primzahlenan;
	int zaehler = 0;
	
	cout << "Geben Sie den Wert ein bis wohin Sie die Primzahlen ausgegebne haben wollen";

		if(cin >> primzahlenan)
		{
			for (primzahlenan; primzahlenan > 1; primzahlenan--)
			{
				
				int  division, zw, ft;
				
					zw = 0;
					ft = sqrt(primzahlenan);
					division = 2;

					while ((division <= ft) && (!zw))
					{
						if (primzahlenan % division == 0)
						{
							zw = 1;
						}
						else
						{
							division = division + 1;

						}
						if (!zw)
						{
							
							cout << primzahlenan << " ist eine Primzahl " << endl;
							zaehler++;
						}
						
					}

				}
			cout << "so viele Primzaheln" << zaehler; 
			}



	}

void aufgabe_6l()
{
	int max_zahl;
	int divisor, max_div;
	int divisor_exists;
	int prim_zaehler = 0;
	cout << "Maximal zu pruefende Zahl eingeben: " << flush;
	if (cin >> max_zahl)
	{// Eingabe korrekt
	// Alle Zahlen bis Max-Zahl prüfen
		for (int zahl = 2; zahl <= max_zahl; zahl++)
		{
			// Pruefe, ob ein Teiler im Bereich 2 bis sqrt(zahl) existiert
			// wenn ja, dann keine Primzahl
			max_div = int(sqrt(float(zahl)));
			divisor = 2; //Start
			divisor_exists = 0; //False
			while ((divisor <= max_div) && (!divisor_exists))
			{
				if (zahl % divisor == 0)
				{
					divisor_exists = 1;
				}
				else
				{
					divisor = divisor + 1;
				}
			}
			if (!divisor_exists)
			{
				cout << zahl << endl;
				prim_zaehler++;
			}
		}
		cout << "Anzahl Primzahlen im Bereich 2 und " << max_zahl << " = " << prim_zaehler << endl;
	}
	else
	{
		cout << "Fehler beim Einlesen der Zahl" << endl;
	}
}

void aufgabe_7()
{
	int n;
	long int fakult;
	cout << "Zahl fuer Fakultaetsberechnung eingeben: " << flush;
	if (cin >> n)
	{// Eingabe korrekt
	// Lösung mit for schleife
		fakult = 1;
		for (int i = 2; i <= n; i = i + 1)
		{
			fakult = fakult * i;
		}
		cout << n << "! = " << fakult << endl;


	}
}











