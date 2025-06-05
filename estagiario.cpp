#include <stdio.h>
#include "funcionario.h"
#include "estagiario.h"
using namespace std;

//Implementando construtor
Estagiario::Estagiario(string nome, int id, float salarioBase, int horas)
    : Funcionario(nome, id, salarioBase), horasTrabalhadas(horas) {}

//Implementando método sobrescrito
float Estagiario::CalcularSalario() {
    return salarioBase * (horasTrabalhadas / 160.0f);    //  Cálculo do salário final e indicando que 160.0f é um valor float (por causa do f)
}

//Implementando método exibirInformacoes
void Estagiario::exibirInformacoes() {  // Sobrescrever os dados p/ Estagiario
    cout << "ID: " << getID() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salário base: " << getSalario() << endl;
    cout << "Salário final: " << CalcularSalario() << endl;
}
