#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

class Funcionario {
    private:
        int id;

    protected:
        std::string nome;
        float salarioBase;
    public:
        //construtor
        Funcionario(std::string nome, int id, float salarioBase);
        Funcionario();
        std::string setNome(std::string nome);
        std::string getNome();

        float setSalario(float salario);
        float getSalario();

        int setID(int id);
        int getID();

        //implementar informaçõespadrões (bia)
        virtual void exibirInformacoes();
        //todas as classe DEVEM filhas implementar esse método (Sarah e Luiz)
        virtual float calcularSalario()=0;

        //destrutor
        virtual ~Funcionario();
};
#endif