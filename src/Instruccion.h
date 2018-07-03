 //
// Created by dn-01 on 28/06/18.
//
#import <string>
using namespace std;

#ifndef TP3_INSTRUCCION_H
#define TP3_INSTRUCCION_H
typedef int Operacion;

const Operacion OPUSH = 1;
const Operacion OADD = 2;
const Operacion OSUB = 3;
const Operacion OMUL = 4;
const Operacion OWRITE = 5;
const Operacion OREAD = 6;
const Operacion OJUMP = 7;
const Operacion OJUMPZ = 8;

typedef std::string Id;
template<class T>
class Instruccion {
public:

    Instruccion IPUSH(T valor);

    Instruccion IADD();

    Instruccion ISUB();

    Instruccion IMUL();

    Instruccion IWRITE(Id Variable);

    Instruccion IREAD(Id Variable);

    Instruccion IJUMP(Id nombreRutina);

    Instruccion IJUMPZ(Id nombreRutina);

    Operacion OP(Instruccion instr) const;

    int ConstanteNumerica(Instruccion instr) const;

    Id nombreVariable(Instruccion instr) const;

    Id nombreRutina(Instruccion instr) const;

private:
    Operacion operacion;
    T valor;
    Id nombre;
    // COMPLETAR
};

#endif /*__INSTRUCCION_H__*/

#endif //TP3_INSTRUCCION_H
