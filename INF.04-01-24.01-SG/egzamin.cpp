#include <iostream>
#include <string>
using namespace std;

char sprawdzPlec(string pesel)
{
	char plec;
	if(pesel[9] % 2 == 0)
	{
		return plec = 'K';
	}
	else
	{
		return plec = 'M';
	}
}
bool sumaKontrolna(string pesel)
{
	int S = 0, M = 0, R = 0;
	int ostatniaCyfraPesel = pesel[10] - '0';
	string waga = "1379137913";
	for (int i = 0; i < 10; i++)
	{
		S += (pesel[i] - '0') * (waga[i] - '0');
	}
	M = S % 10;
	if (M == 0)
	{
		R = 0;
	}
	else
	{
		R = 10 - M;
	}
	return (R == ostatniaCyfraPesel);
}

int main()
{
	string PESEL;
	do
	{
		cout << "Podaj nr PESEL: ";
		cin >> PESEL;

	} while (PESEL.length() != 11);
	if (sprawdzPlec(PESEL) == 'M')
	{
		cout << "Plec: Mezczyzna" << endl;
	}
	else
	{
		cout << "Plec: Kobieta" << endl;
	}
	if (sumaKontrolna(PESEL))
	{
		cout << "Podano prawidlowy nr PESEL" << endl;
	}
	else
	{
		cout << "Podano nieprawidlowy nr PESEL" << endl;
	}
}
