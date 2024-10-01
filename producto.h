#include <iostream>
using namespace std;

// Class representing a product in the store
class Producto {
    string Nombre_prod, Descripcion_prod;
    int Precio_prod, num_prod;
public:
    // Constructor that initializes the product attributes
    Producto(string, string, int, int);
    string getNombre_prod(); // Returns the product name
    int getPrecio_prod();    // Returns the product price
    int getNum_prod();       // Returns the product number
    void getProducto();      // Displays full product details
};

// Constructor to initialize the product attributes
Producto::Producto(string Nombre_prod, string Descripcion_prod, int Precio_prod, int num_prod) {
    this->Nombre_prod = Nombre_prod;
    this->Descripcion_prod = Descripcion_prod;
    this->Precio_prod = Precio_prod;
    this->num_prod = num_prod;
}

// Returns the product name
string Producto::getNombre_prod() {
    return Nombre_prod;
}

// Returns the product price
int Producto::getPrecio_prod() {
    return Precio_prod;
}

// Returns the product number
int Producto::getNum_prod() {
    return num_prod;
}

// Displays full product details
void Producto::getProducto() {
    cout << "\nProduct Nr." << num_prod << endl;
    cout << "Name: " << Nombre_prod << endl;
    cout << "Description: " << Descripcion_prod << endl;
    cout << "Price: $" << Precio_prod << endl;
}

