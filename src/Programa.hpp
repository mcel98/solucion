//
// Created by dn-01 on 01/07/18.
//


#ifndef SOLUCION_PROGRAMA_HPP
#define SOLUCION_PROGRAMA_HPP

#include "Programa.h"
using namespace std;
//constructor inicializa lista prog en vacia y la cantidad de rutnias es 0

Programa::Programa():ListaProg(),cantRutina() {}


Programa::~Programa(){
    for(int i =0; i<cantRutina;i++){
        delete ListaProg[i];

    }
    ListaProg.clear();
}


void Programa::AgInstruccion(string r,Instruccion inst){

    bool existe = false;
    int indiceRut = 0;

    for(int i=0; i<cantRutina;i++ ){
        if (ListaProg[i]->Rut == r){
            indiceRut = i;
            existe = true;
        }

    }

    if(existe){
        if(inst.OP() == OJUMP || inst.OP() == OJUMPZ ){
            bool esta = false;
            int indiceAux = 0;

            for(int j = 0;j<cantRutina;j++){

                if(inst.nombreRutina() == ListaProg[j]->Rut ){
                    esta = true;
                    indiceAux = j;

                }

            }
            if(esta){
                tuple<Instruccion,int> v(inst,indiceAux);
                ListaProg[indiceRut]->instRut.push_back(v);
                ListaProg[indiceRut]->tamRut++;

            }else{

                vector<tuple<Instruccion,int>> n;
                Rutina* rut = new Rutina(inst.nombreRutina(), n);
                ListaProg.push_back(rut);
                cantRutina++;
                tuple<Instruccion,int> w(inst,cantRutina-1);
                ListaProg[indiceRut]->instRut.push_back(w);


            }
        }else{
            tuple<Instruccion,int> x(inst,indiceRut);
            ListaProg[indiceRut]->instRut.push_back(x);
            ListaProg[indiceRut]->tamRut++;
        }


    }else{
        if(inst.OP() == OJUMP || inst.OP() == OJUMPZ ){
            bool esta = false;
            int indiceAux = 0;
            vector<tuple<Instruccion,int>> n2;
            Rutina* rut2 = new Rutina(r, n2);
            ListaProg.push_back(rut2);
            cantRutina = 0;

            for(int j = 0;j<cantRutina;j++){
                if(ListaProg[j]->Rut == inst.nombreRutina() ){
                    esta = true;
                    indiceAux = j;

                }

            }
            if(esta){
                tuple<Instruccion,int> v2(inst,indiceAux);
                ListaProg[cantRutina-1]->instRut.push_back(v2);
                ListaProg[cantRutina]->tamRut++;
                cantRutina++;


            }else{
                vector<tuple<Instruccion,int>> n2;
                Rutina* rut = new Rutina(inst.nombreRutina(), n2);
                ListaProg.push_back(rut);
                cantRutina++;
                tuple<Instruccion,int> w2(inst,cantRutina-1);
                ListaProg[cantRutina-1]->instRut.push_back(w2);



            }

        }else{
            tuple<Instruccion,int> x2(inst,indiceRut);
            ListaProg[cantRutina-1]->instRut.push_back(x2);
            ListaProg[cantRutina-1]->tamRut++;

        }


    }


}

vector<string> Programa::Rutinas() const {
    vector<string> res;
    for(int i = 0; i<cantRutina;i++){
        res.push_back(ListaProg[i]->Rut);

    }
    return res;

}
int Programa::longitud(string r) const{
    int res = 0;
    for(int i = 0; i<cantRutina;i++){
        if(ListaProg[i]->Rut== r){
            res = ListaProg[i]->tamRut;

        }
    }
    return res;
}

Instruccion Programa::Instrucciones(string r, int n)const {
    Instruccion res;
    for(int i =0; i<cantRutina;i++){
        if(ListaProg[i]->Rut == r){
            tuple<Instruccion,int> t = ListaProg[i]-> instRut[n];
            res = get<0>(t);


        }


    }

    return res;

}

tuple< list<Rutina*>,int> Programa::ParaCalculadora(string r, int n){
    list<Rutina* > aux;
    tuple< list<Rutina*>,int> res;
    for(int i=0;i<cantRutina;i++){
       vector<tuple<Instruccion,int>> vacia;
       Rutina* t = new Rutina(ListaProg[i]->Rut,vacia);
        t->tamRut = ListaProg[i]->tamRut;
        aux.push_back(t);

    }

    res = make_tuple(aux,cantRutina);
    return res;
}



#endif //SOLUCION_PROGRAMA_HPP

