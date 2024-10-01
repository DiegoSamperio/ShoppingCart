#include <iostream>
using namespace std;

// Simple class to display the store title
class Titulo {
    string site, developers;
public:
    // Constructor that takes the store name and developer names
    Titulo(string, string);
};

// Displays the title with proper formatting
Titulo::Titulo(string site, string developers) {
    this->site = site;
    this->developers = developers;
    cout << "\n" << site << "\n======================\nby " << developers << endl;
}
