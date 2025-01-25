#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void sortuj(int tab[])
{
	int tymczasowa = 0;
	for (int i = 0; i <= 99; i++)
	{
		for (int j = 0; j <= 98; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				tymczasowa = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tymczasowa;
			}
		}
	}
}

int main()
{
	int tablica[100];
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		tablica[i] = rand() % 1000 + 0;
	}
	sortuj(tablica);
	cout << "Posortowana tablica: ";
	for (int i = 0; i < 100; i++)
	{
		cout << tablica[i] << ", ";
	}
}
