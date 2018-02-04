#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <set>
#include <algorithm>

using namespace std;


struct Sana{
    int maara = 0;
    set <int> sijainnit;
};

int main()
{
    string tiedosto_nimi;
    cout << "Input file: ";
    cin >> tiedosto_nimi;
    ifstream tiedosto_olio(tiedosto_nimi);
    if (not tiedosto_olio){
        cout << "Error! The file " << tiedosto_nimi << " cannot be opened.";
    }
    string rivi;
    string sana;
    map <string, Sana> sanahakemisto;
    int i = 1;
    while(getline(tiedosto_olio, rivi)){
        while ( rivi.size() != 0 ){
            int indeksi = rivi.find(" ");
            sana = rivi.substr(0, indeksi);
            if( indeksi == -1){
                rivi = "";
            }
            else
                rivi = rivi.substr(indeksi + 1);
            if (sanahakemisto.find(sana) == sanahakemisto.end()){
                sanahakemisto.insert(make_pair(sana, Sana()));
            }
            sanahakemisto[sana].maara++;
            sanahakemisto[sana].sijainnit.insert(i);

        }
    ++i;
    }
    for( auto alkio : sanahakemisto){
        bool asd = false;
        cout << alkio.first << " " << alkio.second.maara << ": ";
        for(auto a : alkio.second.sijainnit){
            if( asd){
                cout << ", "<< a;
            }
            else {
                cout << a;
                asd = true;
            }
        }
        cout << endl;
    }

}
