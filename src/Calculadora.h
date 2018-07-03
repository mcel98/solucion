//
// Created by dn-01 on 01/07/18.
//
#include <stack>
#include <string>
#include <list>
#include <tuple>
#include "Programa.h"
#include "Ventana.h"
#include "diccTrie.h"

using namespace std;
#ifndef SOLUCION_CALCULADORA_H
#define SOLUCION_CALCULADORA_H

typedef string Rutina;
typedef string Variable;
typedef int instante;

class Calculadora{
public:
    Calculadora nuevaCalculadora(Programa ,Rutina, int);

    bool ejecutando(Calculadora);

    void ejecutarUnPaso(Calculadora);

    void asignarVariable(Calculadora,Variable, int);

    int valorHistoricoVariable(Calculadora,Variable,instante);

    int valorActualVariable(Calculadora,Variable);

    int IndiceInstruccionActual(Calculadora);

    instante InstanteActual(Calculadora);

    Rutina rutinaActual(Calculadora);

    stack<int> Pila(Calculadora);

private:
    instante momentoActual;
    int capacidadVentana;
    int indiceRutinaActual;
    int indiceInstruccion;
    stack<int> pila;
    vector<tuple<Rutina,std::list<tuple<Instruccion,int,int*>>,int>> progCalc;
    list<tuple<int ,Variable, instante>> asignaciones;
    int cantidadAsignaciones;
    dicc_trie<Ventana> varVentana;
    dicc_trie<int> varAsignacionActual;
    // tuple<Programa, int> inicio;
    tuple<Instruccion,int,int*>* itaInstruccion;
};


#endif //SOLUCION_CALCULADORA_H
