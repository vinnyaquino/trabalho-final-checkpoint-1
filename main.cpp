#include "ControladorDeTransito.h"
#include <iostream>
#include <vector>
#include <string>

void exibirMenu() {
    std::cout << "\n=== Sistema Controlador de Viagens ===\n";
    std::cout << "1. Cadastrar Cidade\n";
    std::cout << "2. Cadastrar Trajeto\n";
    std::cout << "3. Cadastrar Transporte\n";
    std::cout << "4. Cadastrar Passageiro\n";
    std::cout << "5. Iniciar Viagem\n";
    std::cout << "6. Avancar Horas\n";
    std::cout << "7. Gerar Relatorios\n";
    std::cout << "8. Sair\n";
    std::cout << "Escolha uma opcao: ";
}

int main() {
    ControladorDeTransito controlador;
    int opcao;
    
    do {
        exibirMenu();
        std::cin >> opcao;
        
        switch (opcao) {
        case 1: {
            std::string nome;
            std::cout << "Nome da Cidade: ";
            std::cin >> nome;
            controlador.cadastrarCidade(nome);
            break;
        }
        case 2: {
            std::string origem, destino;
            char tipo;
            int distancia;
            std::cout << "Origem: ";
            std::cin >> origem;
            std::cout << "Destino: ";
            std::cin >> destino;
            std::cout << "Tipo (A/T): ";
            std::cin >> tipo;
            std::cout << "Distancia (km): ";
            std::cin >> distancia;
            controlador.cadastrarTrajeto(origem, destino, tipo, distancia);
            break;
        }
        case 3: {
            std::string nome, localAtual;
            char tipo;
            int capacidade, velocidade, distanciaEntreDescansos, tempoDeDescanso;
            std::cout << "Nome do Transporte: ";
            std::cin >> nome;
            std::cout << "Tipo (A/T): ";
            std::cin >> tipo;
            std::cout << "Capacidade: ";
            std::cin >> capacidade;
            std::cout << "Velocidade (km/h): ";
            std::cin >> velocidade;
            std::cout << "Distancia entre descansos (km): ";
            std::cin >> distanciaEntreDescansos;
            std::cout << "Tempo de descanso (horas): ";
            std::cin >> tempoDeDescanso;
            std::cout << "Local atual: ";
            std::cin >> localAtual;
            controlador.cadastrarTransporte(nome, tipo, capacidade, velocidade, distanciaEntreDescansos, tempoDeDescanso, localAtual);
            break;
        }
        case 4: {
            std::string nome, localAtual;
            std::cout << "Nome do Passageiro: ";
            std::cin >> nome;
            std::cout << "Local Atual: ";
            std::cin >> localAtual;
            controlador.cadastrarPassageiro(nome, localAtual);
            break;
        }
        case 5: {
            std::string nomeTransporte, origem, destino;
            int numPassageiros;
            std::vector<std::string> nomesPassageiros;
            std::cout << "Nome do Transporte: ";
            std::cin >> nomeTransporte;
            std::cout << "Origem: ";
            std::cin >> origem;
            std::cout << "Destino: ";
            std::cin >> destino;
            std::cout << "Numero de Passageiros: ";
            std::cin >> numPassageiros;
            for (int i = 0; i < numPassageiros; i++) {
                std::string nomePassageiro;
                std::cout << "Nome do Passageiro " << i + 1 << ": ";
                std::cin >> nomePassageiro;
                nomesPassageiros.push_back(nomePassageiro);
            }
            controlador.iniciarViagem(nomeTransporte, nomesPassageiros, origem, destino);
            break;
        }
        case 6: {
            int horas;
            std::cout << "Avancar quantas horas? ";
            std::cin >> horas;
            controlador.avancarHoras(horas);
            break;
        }
        case 7:
            controlador.gerarRelatorios();
            break;
        case 8:
            std::cout << "Saindo...\n";
            break;
        default:
            std::cout << "Opcao invalida. Tente novamente.\n";
            break;
        }
    } while (opcao != 8);
    
    return 0;
}
