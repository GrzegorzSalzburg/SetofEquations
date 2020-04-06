#include "UkladRownanLiniowych.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy UkladRownanLiniowych, ktore zawieraja 
 *  wiecej kodu niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
   Wektor UkladRownanLiniowych::get_Wek() const
   {return Wek;}
   Macierz UkladRownanLiniowych::get_Mac() const
      {return Mac;}
    Wektor &UkladRownanLiniowych::set_Wek() 
       {return Wek;}
   Macierz &UkladRownanLiniowych::set_Mac() 
      {return Mac;}

   int UkladRownanLiniowych::oblicz()
   {
       Macierz Kop;
       double Wyz;
      Wyz= Mac.wyznacznik();
        std::cout<<"////////////////////"<<std::endl;
     std::cout<<Wyz<<std::endl;
      std::cout<<"////////////////////"<<std::endl;
      if(Wyz==0)
      {
          for(int i=0; i<ROZMIAR; i++)
          {
              Kop=Mac;
              Kop[i]=Wek;
              if(Kop.wyznacznik()==0)
                return 0;
          }
          return 1;
      }

            for(int i=0; i<ROZMIAR; i++)
          {
              Kop=Mac;
              Kop[i]=Wek;
            Wynik[i]=Kop.wyznacznik()/Wyz;

          }
          return 0;


   }
   void UkladRownanLiniowych::Bledy()
   {
       Bledu=Mac*Wynik-Wek;
       std::cout<<"Wektor bledu :"<<Bledu<<std::endl;
       std::cout<<"Dlugosc Wektora bledu :"<<Bledu.dlugosc()<<std::endl;

   }
 Wektor UkladRownanLiniowych::get_Wynik()const
 {
     return Wynik;
 }
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown)
      {
            Strm>>UklRown.set_Mac()>>UklRown.set_Wek();
            return Strm;
      }
std::ostream& operator << ( std::ostream                  &Strm, 
                            const UkladRownanLiniowych    &UklRown
                          )
      {
          Strm<<"A^T:"<<std::endl;
            Strm<<UklRown.get_Mac();
 Strm<<"Wektro wyrazow wolnych:"<<std::endl;
            Strm<<UklRown.get_Wek()<<std::endl;
            return Strm;
      }