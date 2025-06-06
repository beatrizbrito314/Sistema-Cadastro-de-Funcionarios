#ifndef ESTAGIARIO_H    
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
    //Construtor
    Estagiario(string nome, int id, float salarioBase, int horas);
    Estagiario();
    //destrutor
    ~Estagiario();
    //Setter
    void setHorasTrabalhadas (int horas) {horasTrabalhadas = horas;}    //  horas atribui valor ao atributo privado horasTrabalhadas

    //Metódos
    void exibirInformacoes() override;  //  Sobrescreve as informações 

    float calcularSalario() override;
};

#endif  