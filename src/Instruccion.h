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


class Instruccion {
public:

    Instruccion IPUSH(int valor);

    Instruccion IADD();

    Instruccion ISUB();

    Instruccion IMUL();

    Instruccion IWRITE(Id Variable);

    Instruccion IREAD(Id Variable);

    Instruccion IJUMP(Id nombreRutina);

    Instruccion IJUMPZ(Id nombreRutina);

    Operacion OP() const;

    int ConstanteNumerica() const;

    Id nombreVariable() const;

    Id nombreRutina()const;

private:
    Operacion operacion;
    int valor;
    Id nombre;
    // COMPLETAR
};



#endif //TP3_INSTRUCCION_H
