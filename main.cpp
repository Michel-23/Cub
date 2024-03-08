#include <iostream>
#include "Class.h"
using namespace std;

int main(){
    int16_t n;
    cout << "Vvedi chislo " << endl;
    cin >> n;

    Cub razmer = Cub(n);
    cout << razmer << endl;
    return 0;
}