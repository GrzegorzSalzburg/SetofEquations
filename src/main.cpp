#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
  UkladRownanLiniowych   UklRown;   // To tylko przykladowe definicje zmiennej
cin>>UklRown;
cout<<UklRown;
UklRown.oblicz();
cout<<UklRown.get_Wynik()<<endl;
UklRown.Bledy();
  cout << endl << " Start programu " << endl << endl;
}
