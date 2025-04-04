#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a =74;
    int b = 185;
    int *direccion =&a;

     
    cout << "int: " << sizeof(int)<<"Byte" << endl;
    cout << "float: " << sizeof(float) <<"Byte" << endl;
    cout << "char: " << sizeof(char) <<"Byte"<< endl;
    cout << "double: " << sizeof(double)<<"Byte" << endl;
    cout << "Bool: " <<sizeof(bool)<<"Byte"<<endl<<endl;
    cout << "Direccion a: "<<&a <<endl;
    cout << "Direccion b: "<<&b << endl;
    cout << "Direccion de la variable direccion: "<<direccion<<endl; 
    cout << "Valor contenido en la direccion de memroia del apuntador direccion: " <<*direccion<<endl;
    cout << "Direccion de memoria de la variable direccion: " <<&direccion <<endl;
    cout << "Tamano del puntero: "<<sizeof(direccion)<<endl;
 
        return 0;
}
