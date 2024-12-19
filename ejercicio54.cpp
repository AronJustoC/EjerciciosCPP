// Busqueda binaria
#include <iostream>
#include <vector>

using namespace std;

void imprimir(vector<int>);
bool busquedaBinaria(vector<int>, int);

int main() {
  vector<int> vector;
  int elemento, elementoBuscado;

  while (true) {
    cout << "Introduce un elemento: \n";
    cout << "Introduce -1 para terminar: \n";
    cin >> elemento;
    if (elemento == -1) {
      break;
    }
    vector.push_back(elemento);
  }
  cout << "\n";
  cout << "Introduce elemento a buscar: \n";
  cin >> elementoBuscado;

  imprimir(vector);
  busquedaBinaria(vector, elementoBuscado);
  if (busquedaBinaria(vector, elementoBuscado)) {
    cout << "Elemento encontrado\n";
  } else {
    cout << "Elemento no encontrado\n";
  }

  return 0;
}

void imprimir(vector<int> vector) {
  for (int i = 0; i < vector.size(); i++) {
    cout << vector[i] << " ";
  }
  cout << "\n";
}

bool busquedaBinaria(vector<int> vector, int elementoBuscado) {
  int inicio = 0;
  int fin = vector.size() - 1;
  int medio;

  while (inicio <= fin) {
    medio = (inicio + fin) / 2;
    if (vector[medio] == elementoBuscado) {
      return true;
    }
    if (vector[medio] < elementoBuscado) {
      inicio = medio + 1;
    }
    if (vector[medio] > elementoBuscado) {
      fin = medio - 1;
    }
  }
  return false;
}
