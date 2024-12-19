// Ordenamiento por selección
#include <iostream>
#include <vector>

using namespace std;

vector<int> ordenarSeleccion(vector<int>);
void imprimirAscendente(vector<int>);
void imprimirDescendente(vector<int>);

int main() {
  vector<int> arreglo;
  int elemento;
  while (true) {
    cout << "Introduzca un elemento: ";
    cin >> elemento;
    if (elemento == -1) {
      break;
    }
    arreglo.push_back(elemento);
  }
};
