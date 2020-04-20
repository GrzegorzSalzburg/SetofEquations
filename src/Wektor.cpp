#include "Wektor.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

 
 Wektor   Wektor::operator += (const Wektor & W2)
{
      Wektor wyn;
      for(int i=0; i<ROZMIAR; i++)
            {
            wyn[i]=Wek[i]+W2[i];
            }
      return wyn;
}

Wektor  & Wektor::operator -= (const Wektor & W2)
{
      
      for(int i=0; i<ROZMIAR; i++)
      {
            Wek[i]=Wek[i]-W2[i];
      }
      return *this;
}

double Wektor::dlugosc() 
{
      return sqrt(*this * *this);
}

 Wektor Wektor::operator + (const Wektor Skl)
{
      Wektor wyn;
      for(int i=0; i<ROZMIAR; i++)
      {
            wyn[i]=Wek[i]+Skl[i];
      }
      return wyn;
}

Wektor Wektor::operator - ( const Wektor Skl)
{
      Wektor wyn;
      for(int i=0; i<ROZMIAR; i++)
      {
            wyn[i]=Wek[i]-Skl[i];
      }
      return wyn;
      }

double Wektor::operator * (const Wektor Skl)
{
      double wyn=0;
      for(int i=0; i<ROZMIAR; i++)
      {
        wyn+=Wek[i]*Skl[i];
      }
      return wyn;
}

Wektor Wektor::operator / (double Skl)
{
      Wektor wyn;
      assert(Skl!=0);
      for(int i=0; i<ROZMIAR; i++)
      {
        wyn[i]=Wek[i]/Skl;
      }
      return wyn;

}

Wektor Wektor::operator * (double Skl)
{
      Wektor wyn;
      for(int i=0; i<ROZMIAR; i++)
      {
        wyn[i]=Wek[i]*Skl;
      }
      return wyn;
}




double Wektor::operator[](int i) const
{
      return Wek[i];
}

double & Wektor::operator[](int i) 
{
      return Wek[i];
}


std::istream& operator >> (std::istream &Strm, Wektor &Wek)
{
    for(int i=0; i<ROZMIAR; i++)
    Strm>>Wek[i];
    return Strm;
}


std::ostream& operator << (std::ostream &Strm, const Wektor &Wek)
{
      for(int i=0; i<ROZMIAR; i++)
      Strm<<Wek[i]<<" ";
      return Strm;
}

 
bool Wektor::operator == (const Wektor & W2) const
{
   for(int i=0; i<ROZMIAR; i++)
   if(abs(Wek[i]-W2[i])<=0.001) return false;
   return true;
}

bool Wektor::operator != (const Wektor & W2) const
{
   for(int i=0; i<ROZMIAR; i++)
   if(abs(Wek[i]-W2[i])>0.001) return true;
   return false;
}

Wektor::Wektor()
 {
   for(int i=0; i<ROZMIAR; i++)
   Wek[i]=0;
 }