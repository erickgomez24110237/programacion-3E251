#include <iostream>
#include <string>
#include <list>

using namespace std;

class Persona
{
    private:
    string nombre;
    int edad;

    public:
    Persona(string nombre, int edad)
    {
        this->nombre = nombre;
        this->edad = edad;
    }
};


int main()
{

    list<string> nombres;
    nombres.push_back("Pablo");
    nombres.push_back("Juan");
    nombres.push_back("Carlos");
    nombres.push_back("María");

    list<int> edades;
    edades.push_back(5);
    edades.push_back(7);
    edades.push_back(10);
    edades.push_back(15);

    list<Persona>personas;
    for (
        auto it = nombres.begin();
         it != nombres.end();
         it++
          
        )
    {
        personas.push_back(Persona(*it,5));
    }
    
    

    return 0;
}