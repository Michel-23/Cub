#include "Class.h"

Cub::Cub() {
    n = 1;
    _arr = new int16_t* [n];
    for(int i = 0; i < 1; i++){
        _arr[i] = new int16_t [n];
    }
    C(); // Необходимо вызывать метод заполнения массива, чтобы гарантировать такое заполнение !!!
}

Cub::Cub(int16_t n_size){
    n = n_size;
    _arr = new int16_t* [n];
    for(int i = 0; i < n; i++){
        _arr[i] = new int16_t [n];
    }
    C();
}

void Cub:: Print(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std:: cout << _arr[i][j] << " ";
        }
        std:: cout << std:: endl;
    }
}

void Cub:: C(){ // заполнение нулями
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){ 
            _arr[i][j] = 0;
        }
    }
}

Cub:: ~Cub(){
    for (int i = 0; i < n; i++){
        delete[] _arr[i];
    }
    delete[] _arr;
}