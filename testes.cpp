#include <iostream>
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
bool validarID(Funcionario* listaFuncionarios[10], int count, int nID){
    for (int i = 0; i < count; i++) {
        if (listaFuncionarios[i]->getID() == nID) {
            cout<<"O identificador informado já está cadastrado"<<endl;
            return true; 
        }
    }
    return false; 
}

void cadastrarFuncionarios(Funcionario *listaFuncionarios[10], int &count){
        cout<<"Realizar cadastro de funcionário: "<<endl;
        int codCargo, id;
        string nome;
        float salario;
        cout<<"Informe o cargo: 01-Gerente, 02-Desenvolvedor, 03-Estagiário"<<endl;
        cin>>codCargo;
        cout<<"Informe o nome"<<endl;
        cin>>nome;
        cout<<"Informe o salario"<<endl;
        cin>>salario;
        cout<<"Informe o identificador"<<endl;
        cin>>id;
        bool idExiste=validarID(listaFuncionarios, count, id);

        if(idExiste){
            return;
        }else{
        //gerente
        if(codCargo==01){
            Funcionario* novoFuncionario=new Funcionario();
            
            novoFuncionario->setNome(nome);
            novoFuncionario->setSalario(salario);
            novoFuncionario->setID(id);
            listaFuncionarios[count]= novoFuncionario;
            count++;
        }

        //dev
        else if(codCargo==02){
            Funcionario* novoFuncionario=new Funcionario();
            
            novoFuncionario->setNome(nome);
            novoFuncionario->setSalario(salario);
            novoFuncionario->setID(id);
            listaFuncionarios[count]= novoFuncionario;
            count++;

        //estagiario
        }
        else if(codCargo==03){
            Funcionario* novoFuncionario=new Funcionario();
            
            novoFuncionario->setNome(nome);
            novoFuncionario->setSalario(salario);
            novoFuncionario->setID(id);
            listaFuncionarios[count]= novoFuncionario;
            count++;
        }
        else{
            cout<<"Por favor, informe um código válido"<<endl;
        }
    }}
void validarCadastro(Funcionario *listaFuncionarios[10], int &count) {
    string validar;

    while (true) {
        if (count >= 10) {
            cout << "Limite máximo de funcionários atingido." << endl;
            break;
        }

        cout << "Deseja cadastrar outro funcionário? s/n" << endl;
        cin >> validar;

        if (validar == "s") {
            cadastrarFuncionarios(listaFuncionarios, count);
        } else {
            break;
        }
    }
}

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
