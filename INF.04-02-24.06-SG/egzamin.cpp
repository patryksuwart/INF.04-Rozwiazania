#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Album {
private:
	string artist, title;
	int number, year, count;
public:
	// Konstruktor domyslny plus przypisanie (WYMAGANA liczba do 'stoi')
	Album(string art = "", string tit = "", string num = "0", string yr = "0", string cnt = "0") {
		artist = art;
		title = tit;
		number = stoi(num);
		year = stoi(yr);
		count = stoi(cnt);
	}
	// gettery
	string getArtist() { return this->artist; }
	string getTitle() { return this->title; }
	int getNumber() { return this->number; }
	int getYear() { return this->year; }
	int getCount() { return this->count; }
	// wyswietlanie
	void wyswietl() {
		cout << getArtist() << endl;
		cout << getTitle() << endl;
		cout << getNumber() << endl;
		cout << getYear() << endl;
		cout << getCount() << endl;
		cout << endl;
	}
};

int obliczAlbumy(string nazwaPlk) {

	ifstream plik(nazwaPlk); // odczyt pliku
	string linia;
	int iloscLin = 0, max = 0;
	// obliczanie ilosci albumow
	while (getline(plik, linia)) 
	{
		if (!linia.empty())
		{
			iloscLin++;
		}
	}
	max = iloscLin / 5;
	plik.close();
	return max;
}

void wczytajZPliku(string nazwaPlk, Album* albums, int max) {
	ifstream plik(nazwaPlk);
	string linia, artist, title, number, year, count;
	// wczytanie danych z pliku i zapisanie ich do zmiennych poprzez konstruktor
	for (int i = 0; i < max; i++)
	{
		getline(plik, artist);
		getline(plik, title);
		getline(plik, number);
		getline(plik, year);
		getline(plik, count);

		if (!(i == max))
			plik.ignore();
		
		albums[i] = Album(artist, title, number, year, count); // odwolanie do konstruktora obiektem dynamicznym 
	}
	plik.close();
}

void wyswietlAlbumy(int max, Album* albums) {
	for (int i = 0; i < max; i++)
	{
		albums[i].wyswietl();
	}
}

int main()
{	
	const string nazwaPliku = "Data.txt";
	int max = obliczAlbumy(nazwaPliku);
	// deklaracja obiektu dynamicznego (z wskaźnikiem)
	Album* albums;
	albums = new Album[max];

	wczytajZPliku(nazwaPliku, albums, max);
	wyswietlAlbumy(max, albums);

	//zwalnianie pamieci (dynamiczna tablica)
	delete[] albums;
	return 0;
}
