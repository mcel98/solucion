#include "Calculadora.h"
#include <tuple>
Calculadora Calculadora::nuevaCalculadora(Programa prog ,Rutina r, int W){
      int i=0;
  //  Programa rutinasYinstrucciones = Prog.IparaRutina;
      indiceInstruccion=0;
      momentoActual=0;
      cantidadAsignaciones=0;
      capacidadVentana=0;
  //  iterator itRut= rutinasYinstrucciones.begin();
      // dicctrie varActual = vacio();
      // get<0> inicio = Prog
      // get<1> inicio = r
      /*
       * while itRut != rutinasYinstrucciones.end(){
       *    list v;
       *    iterator itInstr = *itRut.begin();
       *    int cantinstrucciones = get<2>(*itRut);
       *    while itInstr != rutinasYinstrucciones.end(){
       *        if (OP(*itInstr) == OPUSH){
       *            tuple<itInstr,int,T*> instruccion
       *            v.push_back(instruccion)
       *
       *        }
       *    }
       * }
       */
}

bool Calculadora::ejecutando(Calculadora c){
//    return (c.indiceInstruccion<(get<2>c.progCalc[indiceRutinaActual]));
}

void Calculadora::ejecutarUnPaso(Calculadora c){
/*
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

stack<int> Calculadora::Pila(Calculadora c){
    return c.pila;
}

void Calculadora::asignarVariable(Calculadora c,Variable v, int n){
    c.asignaciones.push_back(make_tuple(c.momentoActual,v,n));
    c.cantidadAsignaciones++;

}

int Calculadora::valorHistoricoVariable(Calculadora c,Variable v,instante i){

}

int Calculadora::valorActualVariable(Calculadora c,Variable v){

}