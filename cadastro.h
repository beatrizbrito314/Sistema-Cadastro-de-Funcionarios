#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>
#include "funcionario.h"
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"
using namespace std;

// Funções de validação e cadastro
bool validarID(Funcionario* listaFuncionarios[10], int count, int nID);

Gerente* cadastrarGerente(string nome, int id, float salarioBase, float bonus);

Desenvolvedor* cadastrarDesenvolvedor(string nome, int id, float salarioBase, int qtdprojetos);

Estagiario* cadastrarEstagiario(string nome, int id, float salarioBase, float horas);

void cadastrarFuncionarios(Funcionario* listaFuncionarios[10], int& count, int tentativas = 0);

void validarCadastro(Funcionario* listaFuncionarios[10], int& count);

#endif
