#include <iostream>
using namespace std;

bool ehPar (int num){
    return num % 2 == 0;
}

int ehPositivo (int num){
    if(1 <= num){
        cout << "é positivo.\n";
    } else if(0 == num){
        cout << "é zero.\n";
    } else{
        cout << "é negativo.\n";
    }
    return 0;
}
//---------------------------------------------------------------
//                    Exercicios
//---------------------------------------------------------------


//--------------------CONDICIONAIS EM C++------------------------
int main(){

    int num;
    cout << "digite um numero: ";
    cin >> num;
    printf("o fatorial de %d é: %s\n", num, ehPar(num) ? "par" : "impar");
 
{

    int num;
    cout << "digite um numero: ";
    cin >> num;

    cout << ehPositivo << endl;

}
return 0;
}