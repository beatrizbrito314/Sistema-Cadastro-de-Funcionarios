#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;
//Funcionario::Funcionario(){}; nao sei se vou usar
//construtor
Funcionario::Funcionario(string nome, int id, float salarioBase){
    this->nome=nome;
    this->id=id;
    this->salarioBase=salarioBase;
}
//destrutor
Funcionario::~Funcionario(){};
//metodos
string Funcionario::setNome(string nome){
    cout <<"Informe o nome do funcionario: "<< endl;
    cin >>this->nome;
    return nome;
};
string Funcionario::getNome(){
    return nome;
};

float Funcionario::setSalario(float salarioBase){
    cout <<"Informe o salario do funcionario: "<< endl;
    cin >>this->salarioBase;
    return salarioBase;
};
float Funcionario::getSalario(){
    return salarioBase;
};

int Funcionario::setID(int id){
    //implemetar funcao para impedir 2 id iguais
    cout <<"Informe o id do funcionario: "<< endl;
    cin >>this->id;
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