#include "Calculadora.hpp"
#include <tuple>
Calculadora Calculadora::nuevaCalculadora(Programa prog ,Rutina r, int W){

}

bool Calculadora::ejecutando(Calculadora c){
//    return (c.indiceInstruccion<(get<2>c.progCalc[indiceRutinaActual]));
}

void Calculadora::ejecutarUnPaso(Calculadora c){
/*int i=0;
 * Programa rutinasYinstrucciones = Prog.IparaRutina;
 *
 */
}

int Calculadora::IndiceInstruccionActual(Calculadora c){
    return c.indiceInstruccion;
}

instante Calculadora::InstanteActual(Calculadora c){
    return c.momentoActual;
}

Rutina Calculadora::rutinaActual(Calculadora c){
//    return get<0>(c.progCalc[indiceRutinaActual]);
}

stack Calculadora::Pila(Calculadora c){
    return c.pila;
}