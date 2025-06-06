#include <stdio.h>
#include "funcionario.h"
#include "gerente.h"
using namespace std;
    
//Implementando construtor
Gerente::Gerente(){};
Gerente::Gerente(string nome, int id, float salarioBase, float bonus)
    : Funcionario(nome, id, salarioBase), bonusMensal(bonus) {}

//Implementando método sobrescrito
float Gerente::calcularSalario() {
    return salarioBase + bonusMensal;    //  Cálculo do salário final
}
void Gerente::setBonusMensal(float bonus){
    this->bonusMensal=bonus;
}

//Implementando método exibirInformacoes
void Gerente::exibirInformacoes() {  // Sobrescrever os dados p/ Gerente
    cout << "ID: " << getID() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus: " << bonusMensal << endl;
    cout << "Salário base: " << getSalario() << endl;
    cout << "Salário final: " << calcularSalario() << endl;
}
