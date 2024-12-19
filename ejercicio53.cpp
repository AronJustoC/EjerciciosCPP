// Busqueda secuencial
#include <iostream>
#include <vector>

using namespace std;

void imprimir(vector<int>);
bool busquedaSecuencial(vector<int>, int);

int main() {
  vector<int> vector;
  int elemento;

  while (true) {
    cout << "Introduzca un elemento: ";
    cout << "-1 para finalizar" << endl;
    cin >> elemento;
    if (elemento == -1) {
      break;
    }
    vector.push_back(elemento);
  }

  imprimir(vector);

  cout << "Introduzca un elemento para buscarlo en el vector: ";
  cin >> elemento;

  if (busquedaSecuencial(vector, elemento)) {
    cout << "Elemento encontrado" << endl;
  } else {
    cout << "Elemento no encontrado" << endl;
  }
  imprimir(vector);
}

void imprimir(vector<int> vector) {
  for (int i = 0; i < vector.size(); i++) {
    cout << vector[i] << " ";
  }
  cout << endl;
}

bool busquedaSecuencial(vector<int> vector, int elemento) {
  for (int i = 0; i < vector.size(); i++) {
    if (vector[i] == elemento) {
      return true;
    }
  }
  return false;
}
