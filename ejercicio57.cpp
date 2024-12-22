// Estructura basica en C++
#include <iostream>
using namespace std;

struct Persona {
  char nombre[20];
  int edad;
} persona1 = {"Alejandro", 20}, persona2 = {"Juan", 30}, persona3;

int main() {
  cout << "Nombre1: " << persona1.nombre << endl;
  cout << "Edad1: " << persona1.edad << endl;
  cout << "\nNombre2: " << persona2.nombre << endl;
  cout << "Edad2: " << persona2.edad << endl;

  cout << "\nNombre: ";
  cin.getline(persona3.nombre, 20);
  cout << "Edad: ";
  cin >> persona3.edad;
  cout << "Nombre3: " << persona3.nombre << endl;
  cout << "edad3: " << persona3.edad << endl;
  return 0;
}
