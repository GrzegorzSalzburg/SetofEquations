#include "Macierz.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

Macierz Macierz::operator&()
{
    Macierz Wynik;
    for(int i=0; i<ROZMIAR; i++)
     for(int j=0; j<ROZMIAR; j++)
        Wynik[i][j]=Mac[j][i];

return Wynik;
}


Wektor Macierz::operator[](int i) const
{
    return Mac[i];
}

Wektor & Macierz::operator[](int i) 
{
    return Mac[i];

}

Wektor  Macierz::operator*(const Wektor W2)
{
Wektor wynik;
for(int i=0; i<ROZMIAR; i++)
    for(int j=0; j<ROZMIAR; j++)
         wynik[i]+=Mac[j][i]*W2[j];
    return wynik;
 }




double Macierz::wyznacznik()
{
    Macierz Kop = *this;
    int mn=1;
    double wyznacznik;
    for(int i=0; i<ROZMIAR-1; i++)
    {
        for(int j=i+1; j<ROZMIAR; j++)
        {
            if(Kop[i][i]==0)
            {std::swap(Kop[i],Kop[j]);
            mn=-mn;
            }
        }
            if(Kop[i][i]==0)
            return 0;
            for(int j=i+1; j<ROZMIAR; j++)
        {
        Kop[j]-=(Kop[i]*(Kop[j][i]/Kop[i][i]));
        } 

      }
      wyznacznik=mn;
        for(int j=0; j<ROZMIAR; j++)
        {
            wyznacznik*=Kop[j][j];
        } 
return wyznacznik;
}

std::istream& operator >> (std::istream &Strm, Macierz &Mac)
{
   for(int i=0; i<ROZMIAR; i++)
   Strm>>Mac[i];

return Strm;
}


std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
{
    for(int i=0; i<ROZMIAR; i++)
    Strm<<Mac[i]<<std::endl;

return Strm;
}