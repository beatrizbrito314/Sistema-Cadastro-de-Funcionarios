#ifndef GERENTE_H    //  Início da guarda de inclusão
#define GERENTE_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class Gerente : public Funcionario { //  Herança da classe abstrada Funcionario -> Gerente
    private:
    //Atributos
    float bonusMensal;

    public:
    //Setter
    void setBonusMensal (float bonus) {bonusMensal = bonus;}    //  bonus atribui valor ao atributo privado bonusMensal

    //Construtor
    Gerente(string nome, int id, float salarioBase, float bonusMensal);
    
    //Metódos
    void exibirInformacoes() override;  //  Sobrescreve as informações 

    float CalcularSalario() override;
};

#endif  //  Fim da guarda de inclusão (GERENTE_H)