#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

//Desenvolvedor é classe filha de Funcionário
class Desenvolvedor : public Funcionario {
    private:
        int quantidadeDeProjetos;

    public:
        //Construtor
        Desenvolvedor(string nome, int id, float salarioBase, int projetos) : Funcionario(nome, id, salarioBase), quantidadeDeProjetos(projetos){}
        
        float calcularSalarioFinal(){
        return salarioBase +(500 * quantidadeDeProjetos);
    }

   

    void exibirInformaçoes(){
        cout << "ID: " << getID() <<endl;
        cout << "Nome: " << nome << endl;
        cout << "Tipo: Desenvovedor " << endl; 
        cout << "Projetos: " << quantidadeDeProjetos << endl;
        cout << "Salário base: " << salarioBase << endl;
        cout << "Salário final: " << calcularSalarioFinal() << endl;


    }

    
    
};