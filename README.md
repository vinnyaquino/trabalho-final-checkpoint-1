
# Projeto de Controle de Trânsito

Este projeto implementa um sistema básico para gerenciar cidades, trajetos, transportes e passageiros. Ele está dividido em módulos organizados em arquivos separados para facilitar a manutenção e extensibilidade do sistema.

## Requisitos

- Compilador C++ com suporte a C++17 (ex.: `g++`).
- Ambiente Linux, macOS ou Windows com terminal.

## Estrutura do Projeto

```
/projeto
├── Cidade.h
├── Cidade.cpp
├── Trajeto.h
├── Trajeto.cpp
├── Transporte.h
├── Transporte.cpp
├── Passageiro.h
├── Passageiro.cpp
├── ControladorDeTransito.h
├── ControladorDeTransito.cpp
└── main.cpp
```

## Como Compilar

Para compilar o projeto, utilize o seguinte comando no terminal:

```bash
g++ -std=c++17 -o projeto_lip Cidade.cpp Trajeto.cpp Transporte.cpp Passageiro.cpp ControladorDeTransito.cpp main.cpp
```

Este comando cria o executável `projeto_lip`.

## Como Executar

Após a compilação bem-sucedida, execute o programa com o comando:

```bash
./projeto_lip
```

## Checkpoint 1

O checkpoint 1 consiste nos cadastros completos das seguintes entidades:

- **Cidade**
- **Trajeto**
- **Transporte**
- **Passageiro**

**Nota**: Não são necessárias, inicialmente, as ações completas do sistema. Apenas os cadastros das entidades devem estar implementados e funcionando.

---

### Exemplo de Execução no Checkpoint 1:

Ao executar o programa, você verá as mensagens no terminal indicando o sucesso dos cadastros. Por exemplo:

```
Cidade cadastrada: CidadeA
Cidade cadastrada: CidadeB
Trajeto cadastrado de CidadeA para CidadeB.
Transporte cadastrado: Ônibus1 em CidadeA
Passageiro cadastrado: João em CidadeA
```

## Vídeo Tutorial

Assista ao vídeo tutorial para entender melhor como rodar o projeto e ver o sistema em execução:

[![Vídeo Tutorial](https://img.youtube.com/vi/ZEo67lbaZEI/0.jpg)](https://youtu.be/ZEo67lbaZEI)

O vídeo demonstra os seguintes passos:
1. Estrutura do projeto.
2. Comando para compilar o projeto.
3. Execução do programa no terminal.
4. Mensagens exibidas durante o cadastro de cidades, trajetos, transportes e passageiros.

---

## Futuras Etapas

- Implementar ações do sistema, como movimentação de transportes e passageiros.
- Adicionar testes mais robustos.

---

### Contato

Caso tenha dúvidas ou sugestões, entre em contato!
