#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>
#include <cassert>
#include <cmath>

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
 
class Wektor {
double Wek[ROZMIAR];
  public:
  Wektor();
  Wektor operator += (const Wektor & W2);
  Wektor & operator -= (const Wektor & W2);
  double dlugosc();
  bool operator == (const Wektor & W2) const;
  bool operator != (const Wektor & W2) const;
  double operator[](int i) const;
  double &operator[](int i);
  Wektor operator + (const Wektor Skl);
  Wektor operator - (const Wektor Skl);
  double operator * (const Wektor Skl);
  Wektor operator / (double Skl);
  Wektor operator * (double Skl);
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */

std::istream& operator >> (std::istream &Strm, Wektor &Wek);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */

std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);

#endif
