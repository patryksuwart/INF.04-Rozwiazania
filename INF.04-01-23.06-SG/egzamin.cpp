/**************************

 nazwa funkcji: <wypelnijTablice>
 parametry wejściowe: <tab> - <przechowuje tablice liczbową>
 wartość zwracana: <brak>
 informacje: <funkcja ta wypełnia tablicę liczbami od 2 do 100>

 nazwa funkcji: <znajdzLiczbyPierwsze>
 parametry wejściowe: <tab> - <przechowuje tablice liczbową>, <rozmiar> - <zmienna liczbowa przechowuje rozmiar tablicy>
 wartość zwracana: <brak>
 informacje: <funkcja ta wyszukuje liczby pierwsze spośród tablicy i wyświetla je na ekranie>

 autor: <PATRYK SUWART>

**************************/

#include <iostream>
using namespace std;

void wypelnijTablice(int tab[])
{
	for (int i = 2; i <= 100; i++)
	{
		tab[i - 2] = i;
	}
}
void znajdzLiczbyPierwsze(int tab[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++) 
	{
		if (tab[i] != 0) 
		{
			int liczba = tab[i];
			for (int j = i + liczba; j < rozmiar; j += liczba) 
			{
				tab[j] = 0;
			}
		}
	}
	cout << "Liczby pierwsze od 2 do 100:" << endl;
	for (int i = 0; i < rozmiar; i++) 
	{
		if (tab[i] != 0) 
		{
			cout << tab[i] << " ";
		}
	}
	cout << endl;
}
int main()
{
	int rozmiar = 99;
	int tablica[99];

	wypelnijTablice(tablica);
	znajdzLiczbyPierwsze(tablica, rozmiar);
}
