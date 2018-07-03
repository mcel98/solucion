//
// Created by dn-01 on 01/07/18.
//
#include "Instruccion.h"


Instruccion Instruccion::IPUSH(int valor){
    Instruccion instr;
    instr.operacion=OPUSH;
    instr.valor=valor;
    return instr;
}