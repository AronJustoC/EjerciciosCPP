// Pilas
#include <iostream>

using namespace std;

struct Nodo {
  int dato;
  Nodo *siguiente;
};

void agregarLista(Nodo *&, int);
void insertarEnPosicion(Nodo *&, int, int);
void eliminarElemento(Nodo *&, int);
void imprimirLista(Nodo *);

int main() {
  Nodo *cabeza = nullptr;
  int longitud, dato, posicion;
  cout << "Ingrese el numero de elementos a agregar a la pila: ";
  cin >> longitud;

  for (int i = 0; i < longitud; i++) {
    cin >> dato;
    agregarLista(cabeza, dato);
  }

  cout << "La pila es: "; // Imprimir la pila
  imprimirLista(cabeza);

  cout << "Ingrese el dato a insertar: ";
  cin >> dato;

  cout << "Ingrese la posicion donde se desea insertar el elemento: ";
  cin >> posicion;
  insertarEnPosicion(cabeza, dato, posicion);
  cout << "La pila es: ";
  imprimirLista(cabeza);

  cout << "Ingrese el dato a eliminar: ";
  cin >> dato;
  eliminarElemento(cabeza, dato);
  cout << "La pila es: ";
  imprimirLista(cabeza);

  return 0;
}

void agregarLista(Nodo *&cabeza, int dato) {
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = dato; // Tambien se puede asignar por medio de punteros
  nuevo_nodo->siguiente = nullptr;

  if (cabeza == nullptr) {
    cabeza = nuevo_nodo;
    cabeza->siguiente = nullptr;
  } else {
    Nodo *temp = cabeza;
    while (temp->siguiente != nullptr) {
      temp = temp->siguiente;
    }
    temp->siguiente = nuevo_nodo;
  }
}

void insertarEnPosicion(Nodo *&cabeza, int dato, int posicion) {
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = dato;

  if (posicion == 0) { // Si es la primera posicion
    cabeza = nuevo_nodo;
    nuevo_nodo->siguiente = cabeza;

  } else { // Si es una posicion intermedia
    Nodo *temp = cabeza;
    for (int i = 1; i < posicion; i++) {
      temp = temp->siguiente;
    }

    if (temp == nullptr) {
      cout << "La posicion no existe";
    } else {
      nuevo_nodo->siguiente = temp->siguiente;
      temp->siguiente = nuevo_nodo;
    }
  };
}

void imprimirLista(Nodo *cabeza) {
  Nodo *temp = cabeza;
  while (temp != nullptr) {
    cout << temp->dato << " ";
    temp = temp->siguiente;
  }
  cout << endl;
}

void eliminarElemento(Nodo *&cabeza, int datoEliminar) {
  Nodo *temp = cabeza;
  Nodo *anterior = nullptr;

  while (temp != nullptr) {
    if (temp->dato == datoEliminar) {
      if (anterior == nullptr) {
        cabeza = temp->siguiente;
      } else {
        anterior->siguiente = temp->siguiente;
      }
      delete temp;
      break;
    }
    anterior = temp;
    temp = temp->siguiente;
  }
}
