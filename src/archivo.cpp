#include <iostream> //LIBRERIA PARA ENTRADAS Y SALIDAS
#include <string> //LIBRERIA PARA CADENAS
#include <fstream> //LIBRERIA PARA ARCHIVOS
using namespace std;

int main(int argc, char const *argv[])
{
ofstream archivo("archivo.txt"); //SE CREA UN ARCHIVO LLAMADO: "archivo"

if(!archivo.is_open()) // CONDICION SI ES QUE NO SE PUEDE ABRIR EL ARCHIVO PARA MODIFICARLO
{
cerr << "Error al abrir el archivo para la escritura" << endl;
return 1;
}

cout << "Escribiendo en el archivo..." << endl;
archivo << "Hola, mundo!" << endl; 

//SE SOBREESCRIBE EL ARCHIVO
archivo << "Linea 1" << endl;
archivo << "Linea 2" << endl;
archivo << "Linea 3" << endl;
archivo << "Linea 4" << endl;

// SE CIERRA EL ACHIVO PARA PODER DESPUES DE LEERLO(STRICTAMENTE NECESARIO)
archivo.close();

//ABRIR EL ARCHIVO PARA LECTURA
ifstream archivoLectura("archivo.txt");
if(!archivoLectura.is_open())
{
    cerr << "Error al abrir el archivo para lectura." << endl;
    return 1;
}

cout << "Leyendo del archivo..." << endl;
string linea;
while(getline(archivoLectura, linea))
{
    cout << linea << endl;
}
//SE CIERRA EL ARCHIO DE LECTURA
archivoLectura.close();

    return 0;
}