/*Ejercicio 60
 Hacer una estructura llamada alumno que tenga los siguientes campos:
 Nombre, edad, promedio, pedir datos al usuario 3 alumnos, comprobar cual de los
 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno
 */

#include <iostream>
#include <limits>

using namespace std;

struct Alumno {
  char nombre[20];
  int edad;
  float promedio;
} alumnos[3];

int main() {
  int mayor = 0, pos = 0;
  // Pedir datos para los 3 alumnos
  for (int i = 0; i < 3; i++) {
    cout << "Nombre: ";
    cin.getline(alumnos[i].nombre, 20, '\n');
    cout << "Edad: ";
    cin >> alumnos[i].edad;
    cout << "Promedio: ";
    cin >> alumnos[i].promedio;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (alumnos[i].promedio > mayor) {
      mayor = alumnos[i].promedio;
      pos = i;
    }
  }
  cout << "\n";

  // Imprimir los datos del alumno con mayor promedio
  cout << "Alumno con el mayor promedio: " << endl;
  cout << "Nombre: " << alumnos[pos].nombre << endl;
  cout << "Edad: " << alumnos[pos].edad << endl;
  cout << "Promedio: " << alumnos[pos].promedio << endl;

  return 0;
}
