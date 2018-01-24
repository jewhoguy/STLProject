#ifndef RUUTU_HH
#define RUUTU_HH

#include <vector>
#include <iostream>
class Ruutu;

using Lauta = std::vector< std::vector< Ruutu > >;

class Ruutu
{
public:
    Ruutu(int x, int y, bool onkoMiinaa, Lauta*, int arvo = 0, bool onkoAvattu = false, bool onkoLippua = false);
    void tulosta(std::ostream&);
    void laskeViereiset();
    bool onkoValmis();
    bool onkoLippu();
    void poistaLippu();
    void lisaaLippu();
    bool avaa();
    int x_;
    int y_;
    int arvo_; // viereisten miinojen lkm
    Lauta* lauta_;
    bool onkoMiinaa_;
    bool onkoAvattu_;
    bool onkoLippua_;
private:


};

#endif // RUUTU_HH
