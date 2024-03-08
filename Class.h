#include <iostream>
#include <cmath>

class Cub{
private:
    int16_t **_arr;
    int16_t n;

public:
    Cub(); // пустой конструктор - одного имени с классом 
    Cub(int16_t num);
    
    void Print();
    ~Cub();
    void C();

    // перегрузка операции вывода в консоль
    friend std:: ostream& operator<<(std:: ostream& os, const Cub& tmp){
        for (int i = 0; i < tmp.n; i++){
            for (int j = 0; j < tmp.n; j++){
                os << tmp._arr[i][j] << " ";
            }
            os << std:: endl;
        }
        return os;
    }

};