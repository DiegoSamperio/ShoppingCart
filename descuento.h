#include <iostream>
using namespace std;

// Class that manages discounts for the store
class Descuento {
    int num;
public:
    Descuento(); // Constructor that assigns a 20% discount by default
    int num_desc(); // Method that returns the discount percentage
};

// Constructor that sets a default discount
Descuento::Descuento() {
    num = 20;
}

// Returns the discount percentage
int Descuento::num_desc() {
    return num;
}
