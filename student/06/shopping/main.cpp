#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Product {
    string product_name;
    double price;
};
void add_container(string store, map &store_container){
store_container.find(store) == store_container.end();
}

void add_product(){
    product.product_name = tuote;
    product.price = stoi(price);
    product_list.push_back(product);
    store_container.insert({store, location});
}

void add_location(){
    for ( it=store_container.begin(); it != store_container.end(); it++){
        if (it->second == location){
            location.push_back({line_split.at(1), product_list});
        }
    }
}

void chains(std::vector<string> command){
cout << "toimii"<< endl;
}
void stores(std::vector<string> command){
cout << "toimii"<< endl;
}
void selection(std::vector<string> command){
cout << "toimii"<< endl;
}
void cheapest(std::vector<string> command){
cout << "toimii"<< endl;
}
void products(std::vector<string> command){
cout << "toimii"<< endl;
}

std::vector<std::string> split(const std::string& s){
    const char* delimiter = ";";
    std::vector<std::string> result;
    std::string tmp = s;

    while(tmp.find(delimiter) != std::string::npos)
    {
        std::string new_part = tmp.substr(0, tmp.find(delimiter));
        tmp = tmp.substr(tmp.find(delimiter)+1, tmp.size());
        if(not new_part.empty())
        {
            result.push_back(new_part);
        }
    }
    if(not tmp.empty())
    {
        result.push_back(tmp);
    }
    return result;
}



int main()
{
    map<string, map<string, set<Product>>>::iterator it;
    map<string, map<string, set<Product>>> store_container;
    string file_name;
    bool flag;
    //Pyytaa luettavan tiedoston nimea ja luo tiedosto-olion
    cout << "Input file: " << endl;
    getline(cin, file_name);
    ifstream file(file_name);
    if ( not file){
        cout << "Error: the input file cannot be opened";
    }

    //Tiedosto saadaan avattua
    else{
        string line;

        while ( getline(file, line)){
            int row = 0;
            //Jaetaan rivi osiin ja sijoitetaan vektoriin line_split, sijoitetaan osat store_container
            //mappiin.
            vector <string> line_split;
            line_split = split(line);
            map <string, vector<Product>> location;
            vector<Product> product_list;
            Product product;
            string store = line_split.at(0);
            string kauppa = line_split.at(1);
            string tuote = line_split.at(2);
            string price = line_split.at(3);
            add_container();
            add_product();
            add_location();

            }

    }while(true){
        string input;
        cout << "> "; cin >> input;
        std::vector<string> command = split(input);
        if(command.at(0) == "chains"){
            chains(command);
        }else if(command.at(0) == "stores"){
            stores(command);
        }else if(command.at(0) == "selection"){
            selection(command);
        }else if(command.at(0) == "cheapest"){
            cheapest(command);
        }else if(command.at(0) == "products"){
            products(command);
        }else{
            std::cout << "Error: unknown command" << std::endl;
        }

    }


}
