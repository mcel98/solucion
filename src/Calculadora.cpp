#include "Calculadora.hpp"
#include <tuple>
Calculadora Calculadora::nuevaCalculadora(Programa prog ,rut r, int W){
    int i=0;
    tuple< list<prog::Rutina*>,int>  Rutinas = prog.ParaCalculadora();
    tuple< list<*>,int> rutinasYinstrucciones = prog.ParaCalculadora();
    indiceInstruccion=0;
    momentoActual=0;
    cantidadAsignaciones=0;
    capacidadVentana=W;
    _List_iterator itRut= rutinasYinstrucciones.begin();
    dicc_trie varActual;
    get<0>(inicio) = prog;
    get<1>(inicio) = r;
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

rut Calculadora::rutinaActual(Calculadora c){
//    return get<0>(c.progCalc[indiceRutinaActual]);
}

stack Calculadora::Pila(Calculadora c){
    return c.pila;
}