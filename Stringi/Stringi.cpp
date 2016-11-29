// Stringi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void funkcja(string napis)
{
	//sprawdzam dlugosc tekstu
	int dlugosc = 0;
	dlugosc = napis.length();

	//sprawdzam ile jest cyfr i liter w tekscie
	int ilosc_cyfr = 0;
	int ilosc_liter = 0;
	for (int i = 0; i < dlugosc; i++)
	{
		//licze ilosc cyfr
		if (isdigit(napis[i]) != 0)
			ilosc_cyfr++;
		//licze ilosc liter
		if (isalpha(napis[i]) != 0)
			ilosc_liter++;
	}
	//wypisuje policzone dane na ekran
	cout << "W tekscie znajduje sie " << ilosc_liter << " liter i " << ilosc_cyfr << " cyfr." << endl;
}

int main()
{
	string napis;
	//Prosze o podanie tekstu i go zapisuje do pamieci
	cout << "Podaj tekst w ktorym chcesz obliczyc ilosc liter i cyfr" << endl;
	getline(cin, napis);
	//wywoluje funkcje do liczenia ilosci liter i cyfr
	funkcja(napis);

	system("pause");
    return 0;
}

