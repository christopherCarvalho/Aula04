#include <iostream>
using namespace std;

//prototipos
void outra();
void auxiliar();


int main(){
    cout << "Um programa em C++, "
         << "sempre comeca pela "
         << "funcao main.\n";
    
    outra();
    auxiliar();

    cout << "mais de uma vez.\n";
    return 0;
}


void outra(){
    cout << "Funcoes podem ser"
         << "Invocadas a partir"
         << "da funcao main.\n";
    
    auxiliar();
    
    cout << "a partir de "
         << "outras funcoes.\n";

}

void auxiliar(){
    cout << "Funcoes tambem podem "
         << "ser invocadas ";
}