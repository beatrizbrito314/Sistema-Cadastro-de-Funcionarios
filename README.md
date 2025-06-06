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

---

## 💻 Uso

1. Clonar o repositório
No Git Bash: git clone https://github.com/beatrizbrito314/LP1-Sistema-Bancario-Simples

2. Entre no diretório do projeto
cd ~/Sistema-Cadastro-de-Funcionarios 

3. Compile o projeto utilizando o makeFile
make

4. Execute o programa
./Executavel

---

## 👩‍💻👨‍💻 Autores

<table>
  <tr>
    <td align="center">
      <a href="https://github.com/heyitssarah">
        <img src="https://github.com/heyitssarah.png" width="100px;" alt="Sarah Lima"/>
        <br />
        <sub><b>Sarah Lima</b></sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/luzdrik">
        <img src="https://github.com/luzdrik.png" width="100px;" alt="Luiz Felipe"/>
        <br />
        <sub><b>Luiz Felipe</b></sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/beatrizbrito314">
        <img src="https://github.com/beatrizbrito314.png" width="100px;" alt="Emilly Beatriz"/>
        <br />
        <sub><b>Emilly Beatriz</b></sub>
      </a>
    </td>
  </tr>
</table>

