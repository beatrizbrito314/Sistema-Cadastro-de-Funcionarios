#include <iostream>
#include <string>
#include "funcionario.h"
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"
using namespace std;
bool validarID(Funcionario *listaFuncionarios[10], int count, int nID)
{
    for (int i = 0; i < count; i++)
    {
        if (listaFuncionarios[i]->getID() == nID)
        {
            cout << "O identificador informado já está cadastrado" << endl;
            return true;
            count--;
        }
    }
    return false;
}


// cadastrar gerente
Gerente *cadastrarGerente(string nome, int id, float salarioBase, float bonus)
{
    Gerente *novoGerente = new Gerente(); // precisa de construtor padrão
    novoGerente->setNome(nome);           // herdado de Funcionario
    novoGerente->setID(id);               // herdado de Funcionario
    novoGerente->setSalario(salarioBase); // herdado de Funcionario
    novoGerente->setBonusMensal(bonus);   // proprio de gerente
    return novoGerente;
}
// cadastrar dev
Desenvolvedor *cadastrarDesenvolvedor(string nome, int id, float salarioBase, int qtdprojetos)
{
    Desenvolvedor *novoDev = new Desenvolvedor(); // precisa de construtor padrão
    novoDev->setNome(nome);                       // herdado de Funcionario
    novoDev->setID(id);                           // herdado de Funcionario
    novoDev->setSalario(salarioBase);             // herdado de Funcionario
    novoDev->setQtdProjetos(qtdprojetos);         // proprio de dev
    return novoDev;
}

Estagiario *cadastrarEstagiario(string nome, int id, float salarioBase, float horas)
{
    Estagiario *novoEstagiario = new Estagiario(); // precisa de construtor padrão
    novoEstagiario->setNome(nome);                 // herdado de Funcionario
    novoEstagiario->setID(id);                     // herdado de Funcionario
    novoEstagiario->setSalario(salarioBase);       // herdado de Funcionario
    novoEstagiario->setHorasTrabalhadas(horas);    // proprio de estagiario
    return novoEstagiario;
};


void cadastrarFuncionarios(Funcionario *listaFuncionarios[10], int &count, int tentativas=0)
{
    if(tentativas>=10){
        cout<<"Cadastro cancelado: Número máximo de tentativas atingidas! Por favor, tente novamente mais tarde"<<endl;
        return;
    }
    if(count>10){
        cout<<"Não é possível realizar o cadastro. Número máximo de funcionários atingido"<<endl;
        return;
    }
    cout << "Realizar cadastro de funcionário: " << endl;
    int codCargo, id;
    string nome;
    float salario;
    cout << "Informe o cargo: 1-Gerente, 2-Desenvolvedor, 3-Estagiário" << endl;
    cin >> codCargo;
    if(codCargo!=1 && codCargo!=2 && codCargo!=3){
            cout << "Por favor, informe um código válido" << endl;
            cadastrarFuncionarios(listaFuncionarios,count, tentativas+1);
            return;
    }else{
    cout << "Informe o nome" << endl;
    cin >> nome;
    cout << "Informe o salario" << endl;
    cin >> salario;
    cout << "Informe o identificador" << endl;
    cin >> id;
    bool idExiste = validarID(listaFuncionarios, count, id);
    
    if (idExiste)
    {
        cadastrarFuncionarios(listaFuncionarios,count, tentativas+1);
        return;
    }
    else
    {
        // gerente
        if (codCargo == 1)
        {
            float bonus;
            cout << "Informe o Bônus" << endl;
            cin >> bonus;
            Gerente *novoGerente = cadastrarGerente(nome, id, salario, bonus);
            listaFuncionarios[count] = novoGerente;
            count++;
        }
        // dev
        else if (codCargo == 2)
        {
            float qtdProjetos;
            cout << "Informe a quantidade de projetos" << endl;
            cin >> qtdProjetos;
            Desenvolvedor *novoDev = cadastrarDesenvolvedor(nome, id, salario, qtdProjetos);
            listaFuncionarios[count] = novoDev;
            count++;

            // estagiario
        }
        else if (codCargo == 3)
        {
            float horas;
            cout << "Informe a quantidade de horas" << endl;
            cin >> horas;
            Estagiario *novoEstagiario = cadastrarEstagiario(nome, id, salario, horas);
            listaFuncionarios[count] = novoEstagiario;
            count++;
        }
        }
    }
}


void validarCadastro(Funcionario *listaFuncionarios[10], int &count)
{
    string validar;

    while (true)
    {
        if (count >= 10)
        {
            cout << "Limite máximo de funcionários atingido." << endl;
            break;
        }

        cout << "Deseja cadastrar outro funcionário? s/n" << endl;
        cin >> validar;

        if (validar == "s")
        {
            cadastrarFuncionarios(listaFuncionarios, count);
        }
        else
        {
            break;
        }
    }
}