#include <iostream>
#import "producto.h"   // Import the product class
#import "descuento.h"  // Import the discount class
#import "titulo.h"     // Import the title class
#include <list>        // Include list for managing items
using namespace std;

void SeleccionarProductos(); // Function to allow product selection
void CarritoCompras();       // Function to display the shopping cart
void TerminarCompras();      // Function to finish the shopping process
void Salir();                // Function to exit the application

// Main menu function to guide user through different options
void MenuPrincipal() {
  int opcion;
  cout << "\n<< MAIN MENU >>\n\n1) Select products\n2) View shopping cart\n3) Complete purchase\n4) Exit\n\nSelect an option: ";
  cin >> opcion;

  // Directing user to the respective function based on the chosen option
  if (opcion == 1){
    SeleccionarProductos();  // Go to product selection
  }
  else if (opcion == 2){
    CarritoCompras();        // Show the current shopping cart
  }
  else if (opcion == 3){
    TerminarCompras();       // Finish the shopping process
  }
  else if (opcion == 4){
    Salir();                 // Exit the application
  }
  else {
    cout << "\nInvalid option" << endl; // If an invalid option is entered
    MenuPrincipal();                    // Show menu again
  }
}

int main() {
  // Display the title of the store and the developers
  Titulo titulo("BananasEnPijamas.com", "Iñaki Odriozola A01664409 & Diego Samperio A01662935");
  MenuPrincipal();  // Start by showing the main menu
};


// Example product declarations (Pokémon-themed)
  Producto pr1("Bulbasaur", "Este Pokémon nace con una semilla en el lomo, que brota con el paso del tiempo.", 500, 1);
  Producto pr2("Charmander", "Prefiere las cosas calientes. Dicen que cuando llueve le sale vapor de la punta de la cola.", 500, 2);
  Producto pr3("Squirtle", "Cuando retrae su largo cuello en el caparazón, dispara agua a una presión increíble.", 500, 3);
  Producto pr4("Pikachu", "Cuanto más potente es la energía eléctrica que genera este Pokémon, más suaves y elásticas se vuelven las bolsas de sus mejillas.", 1000, 4);
  Producto pr5("Vulpix", "De pequeño, tiene seis colas de gran belleza. A medida que crece, le van saliendo más.", 750, 5);
  Producto pr6("Jigglypuff", "Su capacidad pulmonar es excepcional, incluso para un Pokémon. Es capaz de cantar nanas sin cesar hasta que su rival se duerma.", 650, 6);
  Producto pr7("Gloom", "Libera un fétido olor por los pistilos. El fuerte hedor hace perder el conocimiento a cualquiera que se encuentre en un radio de 2 km.", 890, 7);
  Producto pr8("Meowth", "Le encanta reunir objetos brillantes. Cuando está de buen humor, hasta le muestra la colección a su Entrenador.", 675, 8);
  Producto pr9("Psyduck", "Siempre padece dolores de cabeza. Tras desatar sus misteriosos poderes, la jaqueca remite unos instantes.", 650, 9);
  Producto pr10("Abra", "Es capaz de usar sus poderes psíquicos aun estando dormido. Al parecer, el contenido del sueño influye en sus facultades.", 900, 10);
  Producto pr11("Bellsprout", "Prefiere lugares cálidos y húmedos. Atrapa pequeños Pokémon insectos con sus lianas para devorarlos.", 780, 11);
  Producto pr12("Farfetch'd", "Blande el puerro que sujeta con un ala como si se tratase de una espada para rebanar a su rival. En caso de necesidad, se lo come para nutrirse.", 1500, 12);
  Producto pr13("Grimer", "Está hecho de lodo endurecido. Pocos se atreven a tocarlo debido a su pestilencia y composición nociva. Allá por donde pasa no crece la hierba.", 900, 13);
  Producto pr14("Gastly", "Nació a partir de gases venenosos que asfixiarían a cualquiera que se viera envuelto en ellos.", 765, 14);
  Producto pr15("Drowzee", "Si se duerme siempre en compañía de un Pokémon de esta especie, puede mostrar sueños que haya ingerido con anterioridad.", 840, 15);
  Producto pr16("Cubone", "Cuando llora al acordarse de su madre fallecida, su llanto resuena en el cráneo que lleva en la cabeza.", 820, 16);
  Producto pr17("Hitmonlee", "Este Pokémon tiene un sentido del equilibrio increíble. Puede dar patadas desde cualquier posición.", 1600, 17);
  Producto pr18("Hitmonchan", "Sus puñetazos cortan el aire. Son tan veloces que el mínimo roce podría causar una quemadura.", 1750, 18);
  Producto pr19("Lickitung", "Si sus lametones no se tratan a tiempo, su saliva pegajosa y urticante puede provocar picores persistentes.", 1800, 19);
  Producto pr20("Koffing", "Su cuerpo está lleno a rebosar de gas venenoso. Acude a los vertederos atraído por el putrefacto olor que emana de los desperdicios.", 965, 20);
  Producto pr21("Chansey", "Los huevos que pone Chansey tienen un valor nutritivo altísimo y un sabor exquisito. Se consideran un manjar.", 1350, 21);
  Producto pr22("Mr. Mime", "Muchos estudiosos sostienen que el desarrollo de sus enormes manos se debe a su afán por practicar la pantomima.", 1750, 22);
  Producto pr23("Scyther", "Sus guadañas se vuelven más afiladas con cada combate. Es capaz de rebanar troncos gruesos de un tajo.", 1900, 23);
  Producto pr24("Jynx", "En cierta parte de Galar se conocía a Jynx como la Reina del Hielo y se reverenciaba con cierto temor.", 1450, 24);
  Producto pr25("Lapras", "Este Pokémon posee una notable inteligencia y un corazón de oro. Entona un canto melodioso mientras surca el mar.", 2000, 25);


// Discount initialization for the shopping cart (random percentage between 5 and 20)
Descuento desc1(5+rand()%(20+1-5));


// Arrays to store product details in the cart
int cantidad[100] = {}; // Array to store quantities
string nombre[100] = {}; // Array to store product names
int precio_u[100] = {};  // Array to store unit prices
int importe[100] = {};   // Array to store total price per product

int p = 0; // Counter for the number of products added to the cart


// Function for selecting products to add to the shopping cart
void SeleccionarProductos(){
  int seleccion1, seleccion2, seleccion3;
  cout << "\n<< SELECCIONAR PRODUCTOS >>" << endl;

  // Display all available products
  pr1.getProducto();
  pr2.getProducto();
  pr3.getProducto();
  pr4.getProducto();
  pr5.getProducto();
  pr6.getProducto();
  pr7.getProducto();
  pr8.getProducto();
  pr9.getProducto();
  pr10.getProducto();
  pr11.getProducto();
  pr12.getProducto();
  pr13.getProducto();
  pr14.getProducto();
  pr15.getProducto();
  pr16.getProducto();
  pr17.getProducto();
  pr18.getProducto();
  pr19.getProducto();
  pr20.getProducto();
  pr21.getProducto();
  pr22.getProducto();
  pr23.getProducto();
  pr24.getProducto();
  pr25.getProducto();

  int num;


  // Loop to allow users to select products and specify quantities
  do {cout << "\nSeleccione el producto que desea agregar a su carrito de compras.\nIntroduzca 0 para volver al menú principal.\n\nSelección: ";
  cin >> seleccion1;
  if (seleccion1 > 0 && seleccion1 < 26) {
    cout << "\nSeleccione la cantidad de unidades de este producto que desea adquirir: ";
    cin >> seleccion2;


  // Add product to cart based on selection (repeat structure for each product)
  if (seleccion1 == 1){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr1.getNum_prod() << " - " << pr1.getNombre_prod() << " a $" << pr1.getPrecio_prod() << " c/u. Importe: $" << (pr1.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr1.getNombre_prod();
  precio_u[p] = pr1.getPrecio_prod();
  importe[p] = pr1.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 2){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr2.getNum_prod() << " - " << pr2.getNombre_prod() << " a $" << pr2.getPrecio_prod() << " c/u. Importe: $" << (pr2.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr2.getNombre_prod();
  precio_u[p] = pr2.getPrecio_prod();
  importe[p] = pr2.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 3){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr3.getNum_prod() << " - " << pr3.getNombre_prod() << " a $" << pr3.getPrecio_prod() << " c/u. Importe: $" << (pr3.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr3.getNombre_prod();
  precio_u[p] = pr3.getPrecio_prod();
  importe[p] = pr3.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 4){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr4.getNum_prod() << " - " << pr4.getNombre_prod() << " a $" << pr4.getPrecio_prod() << " c/u. Importe: $" << (pr4.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr4.getNombre_prod();
  precio_u[p] = pr4.getPrecio_prod();
  importe[p] = pr4.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 5){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr5.getNum_prod() << " - " << pr5.getNombre_prod() << " a $" << pr5.getPrecio_prod() << " c/u. Importe: $" << (pr5.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr5.getNombre_prod();
  precio_u[p] = pr5.getPrecio_prod();
  importe[p] = pr5.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 6){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr6.getNum_prod() << " - " << pr6.getNombre_prod() << " a $" << pr6.getPrecio_prod() << " c/u. Importe: $" << (pr6.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr6.getNombre_prod();
  precio_u[p] = pr6.getPrecio_prod();
  importe[p] = pr6.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 7){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr7.getNum_prod() << " - " << pr7.getNombre_prod() << " a $" << pr7.getPrecio_prod() << " c/u. Importe: $" << (pr7.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr7.getNombre_prod();
  precio_u[p] = pr7.getPrecio_prod();
  importe[p] = pr7.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 8){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr8.getNum_prod() << " - " << pr8.getNombre_prod() << " a $" << pr8.getPrecio_prod() << " c/u. Importe: $" << (pr8.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr8.getNombre_prod();
  precio_u[p] = pr8.getPrecio_prod();
  importe[p] = pr8.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 9){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr9.getNum_prod() << " - " << pr9.getNombre_prod() << " a $" << pr9.getPrecio_prod() << " c/u. Importe: $" << (pr9.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr9.getNombre_prod();
  precio_u[p] = pr9.getPrecio_prod();
  importe[p] = pr9.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 10){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr10.getNum_prod() << " - " << pr10.getNombre_prod() << " a $" << pr10.getPrecio_prod() << " c/u. Importe: $" << (pr10.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr10.getNombre_prod();
  precio_u[p] = pr10.getPrecio_prod();
  importe[p] = pr10.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 11){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr11.getNum_prod() << " - " << pr11.getNombre_prod() << " a $" << pr11.getPrecio_prod() << " c/u. Importe: $" << (pr11.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr11.getNombre_prod();
  precio_u[p] = pr11.getPrecio_prod();
  importe[p] = pr11.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 12){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr12.getNum_prod() << " - " << pr12.getNombre_prod() << " a $" << pr12.getPrecio_prod() << " c/u. Importe: $" << (pr12.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr12.getNombre_prod();
  precio_u[p] = pr12.getPrecio_prod();
  importe[p] = pr12.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 13){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr13.getNum_prod() << " - " << pr13.getNombre_prod() << " a $" << pr13.getPrecio_prod() << " c/u. Importe: $" << (pr13.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr13.getNombre_prod();
  precio_u[p] = pr13.getPrecio_prod();
  importe[p] = pr13.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 14){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr14.getNum_prod() << " - " << pr14.getNombre_prod() << " a $" << pr14.getPrecio_prod() << " c/u. Importe: $" << (pr14.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr14.getNombre_prod();
  precio_u[p] = pr14.getPrecio_prod();
  importe[p] = pr14.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 15){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr15.getNum_prod() << " - " << pr15.getNombre_prod() << " a $" << pr15.getPrecio_prod() << " c/u. Importe: $" << (pr15.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr15.getNombre_prod();
  precio_u[p] = pr15.getPrecio_prod();
  importe[p] = pr15.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 16){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr16.getNum_prod() << " - " << pr16.getNombre_prod() << " a $" << pr16.getPrecio_prod() << " c/u. Importe: $" << (pr16.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr16.getNombre_prod();
  precio_u[p] = pr16.getPrecio_prod();
  importe[p] = pr16.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 17){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr17.getNum_prod() << " - " << pr17.getNombre_prod() << " a $" << pr17.getPrecio_prod() << " c/u. Importe: $" << (pr17.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr17.getNombre_prod();
  precio_u[p] = pr17.getPrecio_prod();
  importe[p] = pr17.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 18){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr18.getNum_prod() << " - " << pr18.getNombre_prod() << " a $" << pr18.getPrecio_prod() << " c/u. Importe: $" << (pr18.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr18.getNombre_prod();
  precio_u[p] = pr18.getPrecio_prod();
  importe[p] = pr18.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 19){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr19.getNum_prod() << " - " << pr19.getNombre_prod() << " a $" << pr19.getPrecio_prod() << " c/u. Importe: $" << (pr19.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr19.getNombre_prod();
  precio_u[p] = pr19.getPrecio_prod();
  importe[p] = pr19.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 20){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr20.getNum_prod() << " - " << pr20.getNombre_prod() << " a $" << pr20.getPrecio_prod() << " c/u. Importe: $" << (pr20.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr20.getNombre_prod();
  precio_u[p] = pr20.getPrecio_prod();
  importe[p] = pr20.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 21){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr21.getNum_prod() << " - " << pr21.getNombre_prod() << " a $" << pr21.getPrecio_prod() << " c/u. Importe: $" << (pr21.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr21.getNombre_prod();
  precio_u[p] = pr21.getPrecio_prod();
  importe[p] = pr21.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 22){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr22.getNum_prod() << " - " << pr22.getNombre_prod() << " a $" << pr22.getPrecio_prod() << " c/u. Importe: $" << (pr22.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr22.getNombre_prod();
  precio_u[p] = pr22.getPrecio_prod();
  importe[p] = pr22.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 23){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr23.getNum_prod() << " - " << pr23.getNombre_prod() << " a $" << pr23.getPrecio_prod() << " c/u. Importe: $" << (pr23.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr23.getNombre_prod();
  precio_u[p] = pr23.getPrecio_prod();
  importe[p] = pr23.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 24){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr24.getNum_prod() << " - " << pr24.getNombre_prod() << " a $" << pr24.getPrecio_prod() << " c/u. Importe: $" << (pr24.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr24.getNombre_prod();
  precio_u[p] = pr24.getPrecio_prod();
  importe[p] = pr24.getPrecio_prod() * seleccion2;
  }
  if (seleccion1 == 25){
    cout << "\nSe añadieron al carrito de compras " << seleccion2 << " unidad(es) del Producto Nr." << pr25.getNum_prod() << " - " << pr25.getNombre_prod() << " a $" << pr25.getPrecio_prod() << " c/u. Importe: $" << (pr25.getPrecio_prod() * seleccion2) << endl;
  cantidad[p] = seleccion2;
  nombre[p] = pr25.getNombre_prod();
  precio_u[p] = pr25.getPrecio_prod();
  importe[p] = pr25.getPrecio_prod() * seleccion2;
  }
    }
  else if (seleccion1 == 0) {
  MenuPrincipal();  // Return to the main menu
  }
  else if (seleccion1 > 25) {
    cout << "\nArtículo no válido." << endl; // Notify if invalid selection is made
  }
  if (seleccion1 != 0) {
  cout << "\n1) Seleccionar otro producto\n2) Volver al menú principal\n\nOpción: ";
  cin >> seleccion3;
  }
    p = p+1; // Increment the cart item count
    } while (seleccion3 == 1);
MenuPrincipal();
}

// Function to display the contents of the shopping cart
void CarritoCompras(){
  int importe_final = 0; // Final total amount
  int cantidad_final = 0; // Final total quantity
  int i = 0;
  list<string> index{" Quantity", "Product", "Unit Price", "Amount"};

  cout << "\n<< SHOPPING CART >>\n" << endl;
if (p == 0) { // If the cart is empty
    cout << "The shopping cart is empty." << endl;
    MenuPrincipal();  // Return to the main menu
  } else {
    // Print cart header
    for (auto it = index.begin(); it != index.end(); ++it){
      cout << *it << "     "; }
    cout << "\n-------------------------------------------------------\n" << endl;
// Print cart contents
    do {
      cout << " " << cantidad[i] << "           " << nombre[i] << "          " << precio_u[i] << "            " << importe[i] << endl;
      importe_final += importe[i];  // Sum up total amount
      cantidad_final += cantidad[i];  // Sum up total quantity
      ++i;
    } while (i < p);

    cout << "\n-------------------------------------------------------" << endl;
    cout << "                                   Total: $" << importe_final << endl;
  }

  // Apply discount if more than 10 units were purchased
  if (cantidad_final > 10) {
    cout << "                       Buen Fin Discount: " << desc1.num_desc() << "%" << endl;
    cout << "                  Total with discount: $" << importe_final * (100 - desc1.num_desc()) / 100 << endl;
  }

  MenuPrincipal();  // Return to the main menu
}

// Function to complete the purchase
void TerminarCompras(){
  if (p > 0){
    int i = 0;
    int importe_final = 0;
    int cantidad_final = 0;

    // Calculate final total amount and quantity
    do {
      importe_final += importe[i];
      cantidad_final += cantidad[i];
      ++i;
    } while (i < p);

    // Apply discount if more than 10 units were purchased
    if (cantidad_final > 10) {
      cout << "\nFinal amount: $" << importe_final << endl; 
      cout << "Buen Fin Discount: " << desc1.num_desc() << "%" << endl;
      cout << "Final amount with discount: $" << importe_final * (100 - desc1.num_desc()) / 100 << endl;
    } else {
      cout << "\nFinal amount: $" << importe_final << endl;
    }

    cout << "\nThank you for shopping at BananasEnPijamas.com! Come back soon!" << endl;
  } else {
    cout << "\nYou haven't selected any products." << endl;
  }

  MenuPrincipal();  // Return to the main menu
}

// Function to exit the application
void Salir(){
  cout << "\nThank you for shopping at BananasEnPijamas.com! Come back soon!" << endl;
}