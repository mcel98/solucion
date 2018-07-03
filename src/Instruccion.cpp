//
// Created by dn-01 on 28/06/18.
//

#include "Instruccion.hpp"

Instruccion Instruccion::IADD(){
    Instruccion instr;
    instr.operacion=OADD;
    return instr;
}

Instruccion Instruccion::ISUB(){
    Instruccion instr;
    instr.operacion=OSUB;
    return instr;
}

Instruccion Instruccion::IMUL(){
    Instruccion instr;
    instr.operacion=OMUL;
    return instr;
}

Instruccion Instruccion::IREAD(Id nombreRutina) {
    Instruccion instr;
    instr.operacion = OREAD;
    instr.nombre = nombreRutina;
    return instr;
}

Instruccion Instruccion::IWRITE(Id Variable) {
    Instruccion instr;
    instr.operacion=OWRITE;
    instr.nombre = Variable;
    return instr;
}

Instruccion Instruccion::IJUMP(Id nombreRutina) {
    Instruccion instr;
    operacion = OJUMP;
    nombre = nombreRutina;
    return instr;
}

Instruccion Instruccion::IJUMPZ(Id nombreRutina) {
    Instruccion instr;
    operacion = OJUMPZ;
    nombre = nombreRutina;
    return instr;
}

Operacion Instruccion::OP(Instruccion instr) const {
    return instr.operacion;
}

int Instruccion::ConstanteNumerica(Instruccion instr) const {
    return instr.valor;
}

Id Instruccion::nombreRutina(Instruccion instr) const {
    return instr.nombre;
}

Id Instruccion::nombreVariable(Instruccion instr) const {
    return instr.nombre;
}