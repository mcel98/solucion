//
// Created by dn-01 on 01/07/18.
//
#import <stack>
#include <string>
#include <list>
#include "Programa.hpp"
using namespace std;
#ifndef SOLUCION_CALCULADORA_H
#define SOLUCION_CALCULADORA_H

typedef string rut;
typedef string Variable;
typedef int instante;

template<class T>
class Calculadora{
public:
    Calculadora nuevaCalculadora(Programa ,rut, int);

    bool ejecutando(Calculadora);

    void ejecutarUnPaso(Calculadora);

    void asignarVariable(Calculadora,Variable,T);

    int valorHistoricoVariable(Calculadora,Variable,instante);

    int valorActualVariable(Calculadora,Variable);

    int IndiceInstruccionActual(Calculadora);

    instante InstanteActual(Calculadora);

    rut rutinaActual(Calculadora);

    stack Pila(Calculadora);

private:
    instante momentoActual;
    int capacidadVentana;
    int indiceRutinaActual;
    int indiceInstruccion;
    stack<T> pila;
    // vector<tuple<Rutina,list<tuple<Instruccion,int,iTdiccTrie()>,int>> progCalc;
    list<tuple<T,Variable, instante>> asignaciones;
    int cantidadAsignaciones;
    // diccTrie<Variable,Ventana<tuple<T,instante>> varVentana;
    // diccTrie<Variable,T> varAsignacionActual;
    // tuple<Programa, int> inicio;
    // list<tuple<Instruccion,int,iTdiccTrie()>* itaInstruccion;
};


#endif //SOLUCION_CALCULADORA_H
