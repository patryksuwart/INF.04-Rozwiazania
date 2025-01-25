/****************************************************

	nazwa funkcji : <wypelnijTablice>
	argumenty : <tab> - <tablice liczbową>
				<dl_tab> - <dlugosc tablicy liczbowej>
	typ zwracany : <brak>

	nazwa funkcji : <szukaj>
	argumenty : <tab> - <tablice liczbową>
				<dl_tab> - <dlugosc tablicy liczbowej>
				<wyb_liczba> - <liczba wpisana z klawiatury przez użytkownika>
	typ zwracany : <liczbowy (int)>

	autor : <PATRYK SUWART>

*****************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void wypelnijTablice(int tab[], size_t dl_tab)
{


	for (int i = 0; i < dl_tab - 1; i++)
	{
		tab[i] = (rand() % 100) + 1;
	}
}

int szukaj(int tab[], size_t dl_tab, int wyb_liczb)
{
	tab[50] = wyb_liczb;
	for (int i = 0; i < dl_tab - 1; i++)
	{
		cout << tab[i] << endl;
	}
	for (int i = 0; i < dl_tab - 1; i++)
	{
		if (tab[i] == wyb_liczb)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int tablica[51];
	size_t dl_tablicy = sizeof(tablica) / sizeof(tablica[0]);
	srand(time(NULL));
	wypelnijTablice(tablica, dl_tablicy);
	int wybrana_liczba = 0;
	cout << "Podaj liczbe do znalezienia w tablicy: ";
	cin >> wybrana_liczba;

	if (szukaj(tablica, dl_tablicy, wybrana_liczba) != -1)
	{
		cout << "Wyszukiwana liczba znajduje sie na indeksie" << szukaj(tablica, dl_tablicy, wybrana_liczba) << endl;
	}
	else
	{
		cout << "Wyszukiwana liczba nie znajduje sie w tablicy" << endl;
	}
	return 0;
}
