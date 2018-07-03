//
// Created by dn-01 on 01/07/18.
//
#include "Instruccion.h"

template<class T>
Instruccion Instruccion::IPUSH(T valor){
    Instruccion instr;
    instr.operacion=OPUSH;
    instr.valor=valor;
    return instr;
}