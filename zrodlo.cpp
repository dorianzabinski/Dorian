#include <iostream>
#include "zrodlo.h"

using namespace std;

Produkt::Produkt(){ //KONSTRUKTOR-OBOWIYZKOWA METODA KLASY BY UNIKNYA BLEDÓW
		typ="Nieznany";
		nazwa="Brak";
		cena=0;
		ilosc=0;
		rozmiar="Brak";
		kolor="Brak";
			
	}	
	
void Produkt::Wprowadz_produkt(){ //cia³o nag³owka z zrodlo.h
			//TYP
		cout << "Typ(np. kurtka): ";
		cin >> typ;
			
			//NAZWA
		cout << "Nazwa/Marka/Model: ";
		cin >> nazwa;
		
			//ILOSC
		cout << "Ilosc(int): ";
		cin >> ilosc;
				
				//SPRAWDZENIE ILOSC //Jezeli ILOSC jest równa lub mniejsza niz 0 wczytywanie bedzie powtarzane do monentu wprowadzenia odpowiedzniej wartoœci
				if(ilosc <= 0)	
				{
					while(ilosc <= 0)
					{
						cout << "Ilosc musi byc wieksza od zera!\nIlosc:";
						cin >> ilosc;
					}
				}
		
			//CENA		
		cout << "Cena(int): ";
		cin >> cena;
				
				//SPRAWDZENIE CENA //Jezeli CENA jest równa lub mniejsza niz 0 wczytywanie bedzie powtarzane do monentu wprowadzenia odpowiedzniej wartoœci
				if(cena <= 0 )	
				{
					while(cena <= 0)
					{
						cout << "Cena musi byc wieksza od zera!\nCena:";
						cena=0;
						cin >> cena;
					}
				}
		
			//ROZMIAR		
		cout << "Rozmiar: ";
		cin >> rozmiar;
		
			//KOLOR
		cout << "Kolor: ";
		cin >> kolor;
	}
	
void Produkt::Wypisz_produkt(){ //cia³o nag³owka z zrodlo.h
		
		cout << "\nTyp: ";
		cout << typ;
		
		cout << "\nNazwa/Marka/Model: ";
		cout << nazwa;
		
		cout << "\nIlosc: ";
		cout << ilosc;
		
		cout << "\nCena: ";
		cout << cena;
		
		cout << "\nRozmiar: ";
		cout << rozmiar;
		
		cout << "\nKolor: ";
		cout << kolor;
	}

