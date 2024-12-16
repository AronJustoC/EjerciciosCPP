// Ordenamiento por insercion
#include <iostream>
#include <vector>

using namespace std;

vector<int> ordenarInsercion(vector<int>);
void imprimir(vector<int>);

using namespace std;
int main() {
  vector<int> arreglo;
  int elemento = 0;

  while (true) {
    cout << "Introduzca un elemento: ";
    cin >> elemento;
    if (elemento == -1) {
      break;
    }
    arreglo.push_back(elemento);
  }
  vector<int> ordenado;

  ordenado = ordenarInsercion(arreglo);
  imprimir(ordenado);

  return 0;
}

vector<int> ordenarInsercion(vector<int> arreglo) {
  int i, pos, aux;

  for (i = 0; i < arreglo.size(); i++) {
    pos = i;
    aux = arreglo[i];
    while (pos > 0 && arreglo[pos - 1] > aux) {
      arreglo[pos] = arreglo[pos - 1];
      pos--;
    }
    arreglo[pos] = aux;
  }
  return arreglo;
}

void imprimir(vector<int> arreglo) {
  for (int i = 0; i < arreglo.size(); i++) {
    cout << arreglo[i] << " ";
  }
  cout << endl;
}
