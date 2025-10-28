#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(NULL)); // valor aleatorio em srand(seedRand) para que rand forneca varios valores 
    
    int numero = rand(); //variavel para armazenar o valor aleatorio
    
    cout << "Gerando numero: " << numero << endl;
    
    if(numero > 16834){             
        cout << "GRANDE\n";
    }else{
        cout << "PEQUENO\n";
    }
    
    
    return 0;
}