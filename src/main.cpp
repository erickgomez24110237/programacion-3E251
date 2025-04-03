#include "Serie.hpp"
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <iostream>
#include <string>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
  auto pantalla = Screen::Create(
    ftxui::Dimension::Full(),
    Dimension::Full()

  );

  int fotograma = 0;
   string resetPosicion;
  while(true)
  {
  auto documento = vbox(
    spinner(21,fotograma)
  );
 
  Render(pantalla, documento);
  cout << resetPosicion;
  pantalla.Print();
  resetPosicion = pantalla.ResetPosition();
  fotograma++;

  std::this_thread::sleep_for(0.04s);
}




//Serie serienavidena;

// serienavidena.ApagarTodo();
// serienavidena.Imprimir();
// serienavidena.EncenderTodo();
// serienavidena.Imprimir();
// serienavidena.ApagarCantidad(8);
// serienavidena.Imprimir();
// serienavidena.EncenderCantidad(3);
// serienavidena.Imprimir();
// serienavidena.AlternarEncendido();
// serienavidena.Imprimir();
// serienavidena.RecorrerDerecha();
// serienavidena.Imprimir();
// serienavidena.RecorrerIzquierda();
// serienavidena.Imprimir();



  return 0;
}