#include <iostream>
using namespace std;

/*********************************
nazwa funkcji:		 <NWD()>
opis funkcji:		 <funkcja wylicza największy wspólny dzielnik dwóch liczb wpisanych z klawiatury>
parametry:			 <int a - pierwsza liczba wprowadzona z klawiatury (liczba całkowita)>
					 <int b - druga liczba wprowadzona z klawiatury (liczba całkowita)>
zwracany typ i opis: <typ: int. Zwraca największy wspólny dzielnik dwóch liczb wpisany do zmiennej a>
autor:				 <Patryk Suwart>
*********************************/

int NWD(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}

int main()
{
	int a = 0;
	int b = 0;
	do
	{
		cout << "Podaj pierwsza liczbe (calkowita, wieksza od zera): " << endl;
		cin >> a;
		cout << "Podaj druga liczbe (calkowita, wieksza od zera): " << endl;
		cin >> b;
	} while (a <= 0 || b <= 0);
	cout << "Najwiekszy wspolny dzielnik liczby: " << a << " i liczby: " << b << " to: " << NWD(a, b) << endl;
}
