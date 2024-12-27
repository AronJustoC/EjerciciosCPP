/*Ejercicio 59
Hacer una estructura llamada corredor qu tenga los sigueintes campos:
Nombre, edad, sexo, club, pedir datos al usuario para un corredor,
y asignarle una categoria de competicion.
 -Juvenil <= 18 años
 - Senior <= 40 años
 - Veterano > 40 años
 Posteriormente, imprimir todos los datos del corredor en pantalla.
*/
#include <iostream>
#include <string>

using namespace std;

struct Corredor {
  string nombre;
  int edad;
  string sexo;
  string club;
} c1;

int main() {
  string categoria;
  cout << "Escriba el nombre del corredor: " << endl;
  getline(cin, c1.nombre);
  cout << "Escriba la edad del corredor: " << endl;
  cin >> c1.edad;
  cin.ignore();
  cout << "Escriba el sexo del corredor: " << endl;
  getline(cin, c1.sexo);
  cout << "Escriba el club del corredor: " << endl;
  getline(cin, c1.club);
  if (c1.edad <= 18) {
    categoria = "Juvenil";
  } else if (c1.edad <= 40) {
    categoria = "Senior";
  } else {
    categoria = "Veterano";
  }

  cout << "Mostrando datos del corredor: " << endl;
  cout << "Nombre: " << c1.nombre << endl;
  cout << "Edad: " << c1.edad << endl;
  cout << "Sexo: " << c1.sexo << endl;
  cout << "Club: " << c1.club << endl;
  cout << "Categoria: " << categoria << endl;
  return 0;
}
