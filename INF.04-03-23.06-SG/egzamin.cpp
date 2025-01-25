#include <iostream>
#include <string>
using namespace std;

/****************************************************
	nazwa klasy : <Film>
	pola : <tytul> - <jest to pole o typie znakowym przechowuje tytul filmu>
		   <liczba_wypozyczen> - <jest to pole o typie liczbowym calkowitym przechowuje liczbe wypozyczeń>
	metody : <setterTytul>, <brak> – <jest to metoda która ustawia wartość dla pola tytuł>
			 <getterTytul>, <tytul> - <jest to metoda która pobiera i zwraca wartość pola tytul przez co można użyć ją w programie głównym>
			 <getterLiczbaWypozyczen>, <liczba_wypozyczen> - <jest to metoda która pobiera i zwraca wartość pola liczba_wypozyczen przez co można użyć ją w programie głównym>
	informacje : <klasa reprezentuje obiekty Film posiadające dwa pola (tytul filmu i liczbę wypożyczeń filmu)>
	autor : <PATRYK SUWART>
*****************************************************/

class Film
{
protected:
	string tytul = "";
	int liczba_wypozyczen = 0;
public:
	void setterTytul(string t)
	{
		tytul = t;
	}
	string getterTytul()
	{
		return tytul;
	}
	int getterLiczbaWypozyczen()
	{
		return liczba_wypozyczen;
	}
	void inkrementujWypozyczenia()
	{
		liczba_wypozyczen++;
	}
};

int main()
{
	Film f1;
	cout << "Tytul filmu to: " << f1.getterTytul() << endl;
	cout << "Liczba wypozyczen filmu to: " << f1.getterLiczbaWypozyczen() << endl;
	f1.setterTytul("Mati w krainie czarow");
	f1.inkrementujWypozyczenia();
	cout << "Tytul filmu to: " << f1.getterTytul() << endl;
	cout << "Liczba wypozyczen filmu to: " << f1.getterLiczbaWypozyczen() << endl;
}
