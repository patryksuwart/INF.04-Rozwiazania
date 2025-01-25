#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/************************************************************************

nazwa:				 <liczPunkty()>
opis:				 <metoda liczPunkty zlicza ilość punktów które są sumą kostek, które wylosowały się wiecej niż jeden raz>
parametry:			 <kostki to tablica przechowująca wartości wylosowanych liczb z przedziału 1-6>
					 <liczbaR to zmienna przechowująca wartość całkowitą która jest ilością rzutów wpisaną z klawiatury>
zwracany typ i opis: <typ: int, zwracana jest suma kostek, które wylosowały się wiecej niż jeden raz (iloscPunktow)>
autor:				 <Patryk Suwart>
************************************************************************/
int liczPunkty(int (&kostki)[10], int liczbaR)
{
	int iloscLiczb[7] = { 0 };
	int iloscPunktow = 0;
	for (int i = 0; i < liczbaR; i++)
	{
		iloscLiczb[kostki[i]]++;
	}
	for (int i = 1; i <= 6; i++)
	{
		if (iloscLiczb[i] >= 2)
		{
			iloscPunktow += i * iloscLiczb[i];
		}
	}
	return iloscPunktow;
}
/************************************************************************

nazwa:				 <losuj()>
opis:				 <metoda losuj wczytuje wartości pseudolosowe do tablicy>
parametry:			 <kostki to tablica o rozmiarze 10>
					 <liczbaR to zmienna przechowująca wartość całkowitą która jest ilością rzutów wpisaną z klawiatury>
zwracany typ i opis: <brak>
autor:				 <Patryk Suwart>

************************************************************************/
void losuj(int (&kostki)[10], int liczbaR)
{
	char taknie = 'q';
	for (int i = 0; i < liczbaR; i++)
	{
		kostki[i] = (rand() % 6) + 1;
		cout << "Kostka " << i + 1 << ": " << kostki[i] << endl;
	}
	cout << "Liczba uzyskanych punktow: " << liczPunkty(kostki, liczbaR) << endl;
	while (taknie != 't' && taknie != 'n' && taknie != 'T' && taknie != 'N')
	{
		cout << "Jeszcze raz? (t/n)" << endl;
		cin >> taknie;
		if (taknie == 't' || taknie == 'T')
		{
			losuj(kostki, liczbaR);
			break;
		}
	}
}
int main()
{
	srand(time(NULL));
	int liczbaRzutow = 0;
	do
	{
		cout << "Ile kostek chcesz rzucic?(3-10)" << endl;
		cin >> liczbaRzutow;
	} while (liczbaRzutow < 3 || liczbaRzutow > 10);
	int Kostki[10];
	losuj(Kostki, liczbaRzutow);
}
