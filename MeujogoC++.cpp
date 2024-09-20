#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    srand(time(0));

    int numsecreto = rand() % 1000 + 1;
    int tentativa;
    int tentativasR = 13;

    cout << "tente adivinhar o numero entre 1 e 100" << endl;
    
    while(tentativasR > 0){

        cout << "Tentativas restantes: " << tentativasR << endl<< endl;
        cout << "Digite um numero ";
        cin >> tentativa;
        
        if(tentativa == numsecreto){
            cout << "Parabens, voce achou o numero" << endl;
            break;
        }
        else if(tentativa > numsecreto){
            cout << "o numero eh menor" << endl;
        }
        else{
            cout << "o numero eh maior" << endl;
        }

        tentativasR--;
    }

    if(tentativasR == 0){
        cout << "Acabaram as tentativas, o numero era " << numsecreto << endl<< endl;
    }

}