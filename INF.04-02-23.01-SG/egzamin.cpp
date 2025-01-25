#include <iostream>
#include <string>
using namespace std;
/*****************************
 klasa: <notatki>
 opis:	<Klasa reprezentuje notatki. Każda z notatek ma swój tytuł i opis>
 pola:	<liczNotatki - pole statyczne całkowite przechowujące liczbę utworzonych notatek>
		<id - pole liczbowe całkowite przechowujące unikalny identyfikator notatek>
		<tytul - ciąg znaku przechowujący tytuł notatki>
		<tresc - ciąg znaku przechowujący tytuł treść>
 autor: <PATRYK SUWART>
*****************************/
class notatki
{
private:
	static int liczNotatki;
	int id;
protected:
	string tytul;
	string tresc;
public:
	notatki(string t, string tr)
	{
		liczNotatki++;
		id = liczNotatki;
		tytul = t;
		tresc = tr;
	}
	void wyswietl()
	{
		cout << "Tytul notatki to: " << tytul << endl;
		cout << "Tresc notatki to: " << tresc << endl;
	}
	void diagnostyka()
	{
		cout << "Tytul: " << tytul << "; Tresc: " << tresc << "; Id: " << id << "; Licznik Notatek: " << liczNotatki << endl;
	}
};

int notatki::liczNotatki = 0;

int main()
{
	notatki notatka1("Mati w krainie czarow", "Pewnego razu mati powedrowal do krainy czarow i marow...");
	notatka1.wyswietl();
	notatka1.diagnostyka();
	notatki notatka2("Zakupy", "Bulki, Maslo, Chleb, Cukier");
	notatka2.wyswietl();
	notatka2.diagnostyka();
	return 0;
}
