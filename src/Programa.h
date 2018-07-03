//
// Created by dn-01 on 01/07/18.
//

#ifndef SOLUCION_PROGRAMA_H
#define SOLUCION_PROGRAMA_H

#include <vector>
#include <tuple>
#include <string.h>
#include <list>
#include "Instruccion.h"
using namespace std;




class Programa{
private:
    struct Rutina;

public:
    Programa();
    ~Programa();
    void AgInstruccion(string,Instruccion);
    vector<string> Rutinas() const;
    int longitud(string ) const ;
    Instruccion Instrucciones(string , int) const;
    list <tuple<string,vector< tuple<Instruccion,int> >  ,int> > ParaCalculadora();




private:
    struct Rutina{

        /* inicia rutina vacia */
        Rutina(Id r, vector<tuple<Instruccion,int>> i):Rut(r),instRut(i),tamRut(){}
        /* *************************** */
        Id Rut;
        vector<tuple<Instruccion,int>> instRut;
        int tamRut;


    };
    vector<Rutina*> ListaProg;

    int cantRutina;


};

#endif //SOLUCION_PROGRAMA_H
