#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>
#include "zrodlo.h" //klasa

using namespace std;

int main(int argc, char** argv) {

vector<Produkt*> ListaProduktow; //utworzenie wektora typu Produkt(klasa)

//Produkt t1; //utworzenie obiektu typu Produkt o nazwie t1
//t1.Wprowadz_produkt(); //wywo³anie metody na obiekcie t1
//t1.Wypisz_produkt();  //wywo³anie metody na obiekcie t1

	int ZmiennaMenu; //zmiena do wyboru oopcji w menu

		for( ; ; ){ //Nieskoczona petla for pozwala na ci¹g³¹ prace menu
				 
				 system( "cls" );//czyszczenie ekranu
				 cout << "M.A.G.A.Z.Y.N\n 1.Dodaj przedmiot\n 2.Wyswietl przedmioty\n 3.Wyjscie\n" ; //wypisanie dostêpnych opcji w menu
				 cin >> ZmiennaMenu; //wybor opcji
				 
					switch(ZmiennaMenu){ //pêtla switch pozwala na wybór opcji w menu
					
						case 1: //OPCJA 1
						system( "cls" );//czyszczenie ekranu
						
							ListaProduktow.push_back(new Produkt); //Dodanie nowego obiektu od wektora
							ListaProduktow[ListaProduktow.size()-1]->Wprowadz_produkt(); //uzycie metody na ostatni obiekcie w wektorze
						
						getch(); //zatrzymanie ekarnu do momentu wciœniecia dowolnego klawisza
						break;
							
						case 2: //OPCJA 2
						system( "cls" );//czyszczenie ekranu
							
								for(int i=0; i<ListaProduktow.size(); i++){ //pêtla przbiegaj¹ca po ca³ym wektorze
									ListaProduktow[ListaProduktow.size()-1]->Wypisz_produkt(); //Wypisuje dane o dodanym wczeœniej przedmiotach(obiekt)
									cout<<"\n"; //nowa linijka
								}
								
						getch(); //zatrzymanie ekarnu do momentu wciœniecia dowolnego klawisza
						break;
						
						case 3 : //OPCJA 3 - KONIEC
						exit(0);
						break;
		
						default : //BLEDNY WYBOR
						system( "cls" );//czyszczenie ekranu
						break;
						
						
					}
				
		}



	return 0;
}
