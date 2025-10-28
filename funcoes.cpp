#include<iostream>
using namespace std;

//-----------------------------------------
// prototipos das funcoes

void feliz();
void natal();
void anonovo();

//-----------------------------------------
// funcao principal

int main(){

    cout << " Eu desejo a todos um ";
    feliz();
    natal();
    cout << "e um ";
    feliz();
    anonovo();
    cout << endl;
    return 0;
}
//-----------------------------------------
// definicao das funcoes auxiliares

void feliz(){
    cout << "Feliz ";
}
void natal(){
    cout << "Natal! ";
}
void anonovo(){
    cout << "Ano Novo!";
}
//-----------------------------------------
