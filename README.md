# 👥 Sistema de Cadastro de Funcionários em uma Empresa

Esse projeto consiste em uma atividade realizada para a disciplina IMD0030 - Linguagem de Programação I. Ele simula um sistema de cadastro de funcionários de uma empresa, onde diferentes tipos de funcionários são gerenciados e sendo desenvolvido com foco na aplicação e treinamento dos seguintes conceitos:

- Encapsulamento  
- Herança  
- Classes abstratas  
- Métodos virtuais e virtuais puros  
- Polimorfismo  

---

## 🎯 Objetivo

Desenvolver um sistema em C++ que permita o cadastro e a gestão de diferentes tipos de funcionários (desenvolvedor, gerente e estagiário), calcular o salário final com regras específicas para cada tipo e exibir suas respectivas informações.

---

## 📁 Estrutura do Projeto

### Classe Abstrata: `Funcionario`

Contém atributos comuns e métodos básicos para todos os funcionários:

- **Atributos protegidos**: `nome` (string), `salarioBase` (float)  
- **Atributo privado**: `id` (int)  
- **Métodos**:  
  - `setNome(string)`, `getNome()`  
  - `setSalarioBase(float)`, `getSalarioBase()`  
  - `setId(int)`, `getId()`  
  - `virtual void exibirInformacoes()`  
  - `virtual float calcularSalarioFinal() = 0;`

---

### Subclasses:

#### 👨‍💻 Desenvolvedor

- Atributo: `quantidadeDeProjetos` (int)  
- Salário Final: `salarioBase + (500 * quantidadeDeProjetos)`  
- Sobrescreve: `calcularSalarioFinal()` e `exibirInformacoes()`

#### 👩‍💼 Gerente

- Atributo: `bonusMensal` (float)  
- Salário Final: `salarioBase + bonusMensal`  
- Sobrescreve: `calcularSalarioFinal()` e `exibirInformacoes()`

#### 👨‍🎓 Estagiário

- Atributo: `horasTrabalhadas` (int)  
- Salário Final: `salarioBase * (horasTrabalhadas / 160.0)`  
- Sobrescreve: `calcularSalarioFinal()` e `exibirInformacoes()`

---

## 📚 Funcionalidades

- Cadastro de funcionários de diferentes tipos
- Cálculo do salário final baseado nas regras de cada cargo
- Exibição dos dados de todos os funcionários


