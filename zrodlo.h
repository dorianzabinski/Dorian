#include <iostream>

using namespace std;

class Produkt{	//Tworz¹c klasê tworzymy nowy typ danych o nazwie Produkt

public: 
	//sk³adniki klasy
	string typ;
	string nazwa;
	int cena;
	string rozmiar;
	string kolor;
	int ilosc;
	
	
	 Produkt(); //KONSTRUKTOR-OBOWI¥ZKOWA METODA KLASY BY UNIKN¥Æ B£ÊDÓW
	
	void Wprowadz_produkt(); //nag³owek metody, cia³o w zrodlo.cpp
	
	void Wypisz_produkt(); //nag³owek metody, cia³o w zrodlo.cpp
	
};


