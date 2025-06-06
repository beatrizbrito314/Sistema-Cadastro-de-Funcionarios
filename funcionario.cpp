#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;
//construtor
Funcionario::Funcionario(){}; 
Funcionario::Funcionario(string nome, int id, float salarioBase){
    this->nome=nome;
    this->id=id;
    this->salarioBase=salarioBase;
}
//destrutor
Funcionario::~Funcionario(){};
//metodos
string Funcionario::setNome(string nome){
    this->nome=nome;
    return nome;
};
string Funcionario::getNome(){
    return nome;
};

float Funcionario::setSalario(float salarioBase){
    this->salarioBase=salarioBase;
    return salarioBase;
};
float Funcionario::getSalario(){
    return salarioBase;
};

int Funcionario::setID(int id){
    //implemetar funcao para impedir 2 id iguais
    this->id=id;
    return id;
};
int Funcionario::getID(){
    return id;
};

void Funcionario::exibirInformacoes(){
    cout << "Nome: " << this->getNome()
    << ", ID: " << this->getID() <<endl;
    cout << "Salario Base: " << this->getSalario() <<endl;
};