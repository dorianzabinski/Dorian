#include <iostream>

using namespace std;

class Produkt{	//Tworz�c klas� tworzymy nowy typ danych o nazwie Produkt

public: 
	//sk�adniki klasy
	string typ;
	string nazwa;
	int cena;
	string rozmiar;
	string kolor;
	int ilosc;
	
	
	 Produkt(); //KONSTRUKTOR-OBOWI�ZKOWA METODA KLASY BY UNIKN�� B��D�W
	
	void Wprowadz_produkt(); //nag�owek metody, cia�o w zrodlo.cpp
	
	void Wypisz_produkt(); //nag�owek metody, cia�o w zrodlo.cpp
	
};


