#include <iostream>
#include <string>
#include "funcionario.h"
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"
#include "cadastro.h"
int main() {
    Funcionario* listaFuncionarios[10];
    int count = 0;
cout<<"Cadastre, no mínimo, 6 funcionários"<<endl;

    for (int i = 0; i < 6; i++) {
        cadastrarFuncionarios(listaFuncionarios, count);
    }

    validarCadastro(listaFuncionarios, count);

 cout << "================================" << endl;
 cout << "Funcionários Cadastrados:" << endl;
    for (int i = 0; i < count; i++) {
        listaFuncionarios[i]->exibirInformacoes();
        cout << "-------------------------" << endl;
    }
    //liberar memoria
    for (int i = 0; i < count; ++i) {
    delete listaFuncionarios[i];
}
    return 0;
}
