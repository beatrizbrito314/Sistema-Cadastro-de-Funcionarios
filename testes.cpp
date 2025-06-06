/*#include <iostream>
#include <string>
using namespace std;
class Funcionario {
    private:
        int id;

    public:
        std::string nome;
        float salarioBase;

    public:
    //construtor
    Funcionario(){
       
    }
    //destrutor
    ~Funcionario(){};
    //metodos
    string setNome(string nome){
        this->nome=nome;
        return nome;
    };
    string getNome(){
        return nome;
    };

    float setSalario(float salarioBase){
        this->salarioBase=salarioBase;
        return salarioBase;
    };
    float getSalario(){
        return salarioBase;
    };

    int setID(int id){
        //implemetar funcao para impedir 2 id iguais
        this->id=id;
        return id;
    };
    int getID(){
        return id;
    };

    void exibirInformacoes(){
        cout << "Nome: " << this->getNome()
        << ", ID: " << this->getID() <<endl;
        cout << "Salario Base: " << this->getSalario() <<endl;
    };
};

int main(){
    Funcionario *listaFuncionarios[10];
    int count=0;
    bool qtdValidar=false;

    //validar cadastro
    while(qtdValidar==false){
        cadastrarFuncionarios(listaFuncionarios, count);
        cout<<"Realizar cadastro de funcionário: "<<endl;
        
        if(count==6){
        qtdValidar=true;
        break;
    }
    }
    validarCadastro(listaFuncionarios,count);
}
*/