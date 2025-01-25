#include <iostream>
#include <string>
using namespace std;

/*********************

klasa:	<Samogloski>
opis:	<klasa Samogloski Jest biblioteką narzędziową w której nie powołujemy obiektów, tylko inicjujemy metody>
metody: <liczSamogloski - zwraca zmienną typu integer (wynik) która przechowuje liczbę samogłosek w zdaniu podanym przez użtykownika>
		<usunPowtorzenia - zwraca ciąg znaków (poprawioneZdanie) który przechowuje poprawione zdanie (tj. bez powtórzeń literowych)>
autoir: <Patryk Suwart>

**********************/

class Samogloski
{
public:
	static int liczSamogloski(string zdanie)
	{
		string samogloski = "aąeęiouóyAĄEĘIOUÓY";
		int wynik = 0;
		if (zdanie != "")
		{
			for (int i = 0; i < zdanie.length(); i++)
			{
				for (int j = 0; j < samogloski.length(); j++)
				{
					if (zdanie[i] == samogloski[j])
					{
						wynik++;
					}
				}
			}
		}
		else
		{
			return 0;
		}
		return wynik;
	};
	static string usunPowtorzenia(string zdanie)
	{
		string poprawioneZdanie;
		if (zdanie != "")
		{
			for (int i = 0; i < zdanie.length(); i++)
			{
				if (zdanie[i] != zdanie[i + 1])
				{
					poprawioneZdanie += zdanie[i];
				}
			}
		}
		else
		{
			return zdanie;
		}
		return poprawioneZdanie;
	}
};

int main()
{
	string zdanie;
	cout << "Podaj zdanie" << endl;
	getline(cin,zdanie);
	cout << "Poprawione zdanie: " << Samogloski::usunPowtorzenia(zdanie) << endl;
	cout << "Ilosc samoglosek w zdaniu: " << Samogloski::liczSamogloski(Samogloski::usunPowtorzenia(zdanie)) << endl;
}
