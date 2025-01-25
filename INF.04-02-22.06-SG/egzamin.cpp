#include <iostream>
#include <string>
using namespace std;

class Osoba
{
private:
	int id;
	string imie;
public:
	static int instancje;
	Osoba()
	{
		id = 0;
		imie = "";
		instancje += 1;
	}
	Osoba(int idd, string im)
	{
		id = idd;
		imie = im;
		instancje += 1;
	}
	Osoba(const Osoba &kopia)
	{
		id = kopia.id;
		imie = kopia.imie;
		instancje += 1;
	}
	void wypiszImie(string drugieImie)
	{
		if (imie != "")
		{
			cout << "Czesc " << drugieImie << " , mam na imie " << imie << endl;
		}
		else
		{
			cout << "Brak danych" << endl;
		}
	}
};

int Osoba::instancje = 0;

int main()
{
	string imie;
	int id;
	cout << "Liczba zarejestrowanych osob to " << Osoba::instancje << endl;
	Osoba Os1;
	cout << "Podaj imie ";
	cin >> imie;
	cout << "Podaj id ";
	cin >> id;
	Osoba Os2(id, imie);
	Osoba kopiaOs2 = Os2;
	Os1.wypiszImie("Jan");
	Os2.wypiszImie("Jan");
	kopiaOs2.wypiszImie("Jan");
	cout << "Liczba zarejestrowanych osob to " << Osoba::instancje << endl;
	return 0;
}
