// Estructura anidada en  C++
#include <iostream>

using namespace std;

struct info_direccion {
  char direccion[20];
  char ciudad[20];
  char provincia[20];
};

struct empleado {
  char nombre[20];
  struct info_direccion dir_empleado;
  double salario;
} empleado[2]; // Array de 2 estructuras empleado

int main() {
  for (int i = 0; i < 2; i++) {
    cout << "Digite su nombre: " << endl;
    cin.getline(empleado[i].nombre, 20);
    cout << "Direccion: " << endl;
    cin.getline(empleado[i].dir_empleado.direccion, 20);
    cout << "Ciudad: " << endl;
    cin.getline(empleado[i].dir_empleado.ciudad, 20);
    cout << "Provincia: " << endl;
    cin.getline(empleado[i].dir_empleado.provincia, 20);
    cout << "Salario: " << endl;
    cin >> empleado[i].salario;
    // Limpiar buffer
    cin.ignore(100, '\n');
  }

  for (int i = 0; i < 2; i++) {
    cout << "Nombre: " << empleado[i].nombre << endl;
    cout << "Direccion: " << empleado[i].dir_empleado.direccion << endl;
    cout << "Ciudad: " << empleado[i].dir_empleado.ciudad << endl;
    cout << "Provincia: " << empleado[i].dir_empleado.provincia << endl;
    cout << "Salario: " << empleado[i].salario << endl;
  }
  return 0;
}
