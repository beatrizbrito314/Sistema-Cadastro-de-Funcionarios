#ifndef ESTAGIARIO_H    //  Início da guarda de inclusão
#define ESTAGIARIO_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class Estagiario : public Funcionario { //  Herança da classe abstrada Funcionario -> Estagiario
    private:
    //Atributos
    int horasTrabalhadas;   //  Horas que foram trabalhadas pela pessoa com o cargo de estagiário

    public:
    //Setter
    void setHorasTrabalhadas (int horas) {horasTrabalhadas = horas;}    //  horas atribui valor ao atributo privado horasTrabalhadas

    //Metódos
    void exibirInformacoes() override;  //  Sobrescreve as informações 

    float calcularSalarioFinal() override;  //  Sobrescreve o cálculo do salário final
};

#endif  //  Fim da guarda de inclusão (ESTAGIARIO_H)