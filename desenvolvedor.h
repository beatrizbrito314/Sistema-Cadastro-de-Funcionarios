#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

//Desenvolvedor é classe filha de Funcionário
class Desenvolvedor: public Funcionario {
    private:
        int quantidadeDeProjetos;

    public:
    Desenvolvedor(string nome, int id, float salarioBase, int projetos);
    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif