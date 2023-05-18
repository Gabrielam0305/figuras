#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirTriangulo();
void pedirPiramide();
void pedirrectangulo();
void pedirrombo();
void pedircruz();
void pedirinvertido();

char** triangulo_matriz;
char** rectangulo_matriz;
char** piramide_matriz;
char** rombo_matriz;
char** cruz_matriz;
char** invertido_matriz;
int Tsize, Psize,nFilas, nColumnas, Rsize, Csize, Isize;

int main()
{
    pedirTriangulo();
    pedirinvertido();
    pedirPiramide();
    pedirrectangulo();
    pedirrombo();
    pedircruz();
    return 0;
}


void pedirTriangulo() {

    cout << "Digite el número el size: ";
    cin >> Tsize;

    // Reservar memoria
    triangulo_matriz = new char* [Tsize]; // Reservando memoria para las filas
    for (int i = 0; i < Tsize; i++)
    {
        triangulo_matriz[i] = new char[i+1];
    }

    // Guardar elementos en la matriz
    for (int i = 0; i < Tsize; i++) {
        for (int j = 0; j <= i; j++) {
            triangulo_matriz[i][j] = '*';
        }
    }
    //imprimir
    for (int i = 0; i < Tsize; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangulo_matriz[i][j] << " ";
        }
        cout << endl;
    }
    //delete
    for (int i = 0; i < Tsize; i++)
    {
        delete[] triangulo_matriz[i];
    }
    delete[] triangulo_matriz;
}

void pedirinvertido() {

    cout << "Digite el número el size invertido: ";
    cin >> Isize;

    // Reservar memoria
    invertido_matriz = new char* [Isize]; // Reservando memoria para las filas
    for (int i = 0; i <Isize; i++)
    {
        invertido_matriz[i] = new char[Isize - i]; // Reservar memoria para cada fila del triángulo invertido

        for (int j = 0; j < Isize - i; j++)
        {
            invertido_matriz[i][j] = '*';
        }
    }
    //imprimir
    for (int i = 0; i < Isize; i++)
    {

        for (int j = 0; j < Isize - i; j++)
        {
            cout << invertido_matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar memoria
    for (int i = 0; i < Isize; i++)
    {
        delete[] invertido_matriz[i];
    }
    delete[] invertido_matriz;
}
//void imprimirPiramideVaciaInvertida(int Psize)
//{
//    char** matriz = new char* [Psize]; // Reservar memoria para las filas
//
//    // Construir la matriz de la pirámide vacía invertida
//    for (int i = 0; i < Psize; i++)
//    {
//        matriz[i] = new char[2 * Psize - 1]; // Reservar memoria para cada fila de la pirámide vacía invertida
//
//        // Llenar la fila con espacios en blanco
//        for (int j = 0; j < 2 * Psize - 1; j++)
//        {
//            matriz[i][j] = ' ';
//        }
//
//        // Marcar los bordes de la pirámide con asteriscos
//        for (int j = Psize - i - 1; j <= Psize + i - 1; j++)
//        {
//            matriz[i][j] = '*';
//        }
//    }
//
//    // Marcar los espacios internos de la pirámide
//    for (int i = 1; i < Psize; i++)
//    {
//        matriz[i][Psize - i - 1] = '*';
//        matriz[i][Psize + i - 1] = '*';
//    }
//
//    // Imprimir la pirámide vacía invertida
//    for (int i = 0; i < Psize; i++)
//    {
//        for (int j = 0; j < 2 * Psize - 1; j++)
//        {
//            cout << matriz[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    // Liberar memoria
//    for (int i = 0; i < Psize; i++)
//    {
//        delete[] matriz[i];
//    }
//    delete[] matriz;
//}
void pedirPiramide()
{
    cout << "Digite el número el size de la piramide: ";
    cin >> Psize;
    piramide_matriz = new char* [Psize]; // Reservar memoria para las filas

    // Construir la matriz de la pirámide
    for (int i = 0; i < Psize; i++)
    {
        piramide_matriz[i] = new char[2 * Psize - 1]; // Reservar memoria para cada fila de la pirámide

        for (int j = 0; j < 2 * Psize - 1; j++)
        {
            if (j >= Psize - i - 1 && j <= Psize + i - 1)
            {
                if (i == Psize - 1 || j == Psize - i - 1 || j == Psize + i - 1)
                    piramide_matriz[i][j] = '*';
                else
                    piramide_matriz[i][j] = ' ';
            }
            else
            {
                piramide_matriz[i][j] = ' ';
            }
        }
    }

    // Imprimir la pirámide
    for (int i = 0; i < Psize; i++)
    {
        for (int j = 0; j < 2 * Psize - 1; j++)
        {
            cout << piramide_matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar memoria
    for (int i = 0; i < Psize; i++)
    {
        delete[] piramide_matriz[i];
    }
    delete[] piramide_matriz;
}

void pedirrectangulo()
{
    cout << "Digite el número de filas: ";
    cin >> nFilas;
    cout << "Digite el número de columnas: ";
    cin >> nColumnas;
    char** rectangulo_matriz = new char* [nFilas]; // Reservar memoria para las filas

    // Construir la matriz del rectángulo
    for (int i = 0; i < nFilas; i++)
    {
        rectangulo_matriz[i] = new char[nColumnas]; // Reservar memoria para cada fila del rectángulo

        for (int j = 0; j < nColumnas; j++)
        {
            if (i == 0 || i == nFilas - 1 || j == 0 || j == nColumnas - 1)
            {
                rectangulo_matriz[i][j] = '*';
            }
            else
            {
                rectangulo_matriz[i][j] = ' ';
            }
        }
    }

    // Imprimir el rectángulo
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nColumnas; j++)
        {
            cout << rectangulo_matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar memoria
    for (int i = 0; i < nFilas; i++)
    {
        delete[] rectangulo_matriz[i];
    }
    delete[]rectangulo_matriz;
}
void pedirrombo()
{
    cout << "Digite el tamaño del rombo: ";
    cin >> Rsize;
    for (int i = 0; i < Rsize; i++)
    {
        for (int j = 0; j < Rsize - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = Rsize - 2; i >= 0; i--)
    {
        for (int j = 0; j < Rsize - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pedircruz()
{
    cout << "Digite el tamaño de la cruz: ";
    cin >> Csize;
    for (int i = 0; i < Csize; i++)
    {
        for (int j = 0; j < Csize; j++)
        {
            if (i == Csize / 2 || j == Csize / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}