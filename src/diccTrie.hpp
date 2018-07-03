//
// Created by dsalvia on 03/07/18.
//

#ifndef SOLUCION_DICCTRIE_HPP
#define SOLUCION_DICCTRIE_HPP
#include "diccTrie.h"

template<typename T>
dicc_trie<T>::dicc_trie() : _raiz(NULL), claves() {}

template<typename T>
void dicc_trie<T>::definir(const string &key, const T& siginificado) {
    Nodo* actual = _raiz;
    int i = 0;
    bool nueva = false;
    while (i < key.length()){
        if(actual->_siguientes[int(key[i])] == NULL){
            vector<Nodo*> _sig;
            for(int j = 0; j < 256; j++){
                _sig[j] = NULL;
            }
            actual->_siguientes[int(key[i])]-> _siguientes = _sig;
            actual->_siguientes[int(key[i])]-> definicion = NULL;
            actual->_siguientes[int(key[i])]-> it_clave = NULL;

            nueva = true;
        }
        actual = actual->_siguientes[int(key[i])];
        i++;
    }
    if(actual->definicion != NULL){
        //limpio lo que tenia
        actual->definicion = NULL;
    }
    actual->definicion = siginificado;

    if(nueva){
        //buscar o preguntar como insertar en un conjunto
        //con el it_claves
        claves.insert(key);
    }
}

template<typename T>
bool dicc_trie<T>::definido(const string &key) const {
    int i = 0;
    bool esta = true;
    Nodo* actual = _raiz;
    while(i < key.length() and esta){
        if(actual->_siguientes[int(key[i])] == NULL){
            esta = false;
        }
        actual = actual->_siguientes[int(key[i])];
        i++;
    }
    return esta;
}

template<typename T>
const T& dicc_trie<T>::obtener(const string &key) const {
    Nodo* actual = _raiz;
    int i = 0;
    while(i < key.length()){
        actual = actual->_siguientes[int(key[i])];
        i++;
    }
    return *actual->definicion;
}

#endif //SOLUCION_DICCTRIE_HPP
