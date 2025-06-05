#include <iostream>
#include <string>

#include "funcionario.h"
#include "desenvolvedor.h"

using namespace std;

        //Construtor
        Desenvolvedor::Desenvolvedor(string nome, int id, float salarioBase, int projetos)
         : Funcionario(nome, id, salarioBase), quantidadeDeProjetos(projetos){}
        
         //Implementação de calcularSalarioFinal()
        float Desenvolvedor::calcularSalarioFinal(){
            return salarioBase +(500 * quantidadeDeProjetos);
    }

   
    //Sobreescrevendo exibirInformacoes()
    void Desenvolvedor::exibirInformacoes(){
        cout << "ID: " << getID() <<endl;
        cout << "Nome: " << nome << endl;
        cout << "Tipo: Desenvolvedor " << endl; 
        cout << "Projetos: " << quantidadeDeProjetos << endl;
        cout << "Salário base: " << salarioBase << endl;
        cout << "Salário final: " << calcularSalarioFinal() << endl;

    }

 