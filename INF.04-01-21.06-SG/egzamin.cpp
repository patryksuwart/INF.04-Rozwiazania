#include <iostream>
using namespace std;

class Sortowanie
{
public:
	void sortuj(int tab[])
	{
		for (int i = 0; i < 10; i++)
		{
			int maxValue = najwyzsza(tab, i);
			for (int j = i; j < 10; j++)
			{
				if (tab[j] == maxValue)
				{
					swap(tab[i], tab[j]);
					break;
				}
			}
		}
		for (int i = 0; i < 10; i++)
		{
			cout << tab[i] << endl;
		}
	}
private:
	int najwyzsza(int tab[], int start)
	{
		int max = tab[start];
		for (int i = start + 1; i < 10; i++)
		{
			if (tab[i] > max)
			{
				max = tab[i];
			}
		}
		return max;
	}
};

int main()
{
	int tablica[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj " << i + 1 << " liczbe tablicy: ";
		cin >> tablica[i];
	};
	Sortowanie sortuj;
	sortuj.sortuj(tablica);
	return 0;
}
