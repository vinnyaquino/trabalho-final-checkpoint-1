#include "ControladorDeTransito.h"

void ControladorDeTransito::cadastrarCidade(std::string nome) {
    cidades.push_back(new Cidade(nome));
    std::cout << "Cidade cadastrada: " << nome << std::endl;
}

void ControladorDeTransito::cadastrarTrajeto(std::string nomeOrigem, std::string nomeDestino, char tipo, int distancia) {
    Cidade* origem = nullptr;
    Cidade* destino = nullptr;

    for (auto& cidade : cidades) {
        if (cidade->getNome() == nomeOrigem) origem = cidade;
        if (cidade->getNome() == nomeDestino) destino = cidade;
    }

    if (origem && destino) {
        trajetos.push_back(new Trajeto(origem, destino, tipo, distancia));
        std::cout << "Trajeto cadastrado de " << nomeOrigem << " para " << nomeDestino << "." << std::endl;
    } else {
        std::cout << "Erro: Cidades de origem ou destino não encontradas." << std::endl;
    }
}

void ControladorDeTransito::cadastrarTransporte(std::string nome, char tipo, int capacidade, int velocidade,
                                                int distancia_entre_descansos, int tempo_de_descanso, std::string localAtual) {
    Cidade* local = nullptr;
    for (auto& cidade : cidades) {
        if (cidade->getNome() == localAtual) {
            local = cidade;
            break;
        }
    }

    if (local) {
        transportes.push_back(new Transporte(nome, tipo, capacidade, velocidade,
                                             distancia_entre_descansos, tempo_de_descanso, local));
        std::cout << "Transporte cadastrado: " << nome << " em " << localAtual << std::endl;
    } else {
        std::cout << "Erro: Cidade de localização não encontrada." << std::endl;
    }
}

void ControladorDeTransito::cadastrarPassageiro(std::string nome, std::string localAtual) {
    Cidade* local = nullptr;
    for (auto& cidade : cidades) {
        if (cidade->getNome() == localAtual) {
            local = cidade;
            break;
        }
    }

    if (local) {
        passageiros.push_back(new Passageiro(nome, local));
        std::cout << "Passageiro cadastrado: " << nome << " em " << localAtual << std::endl;
    } else {
        std::cout << "Erro: Cidade de localização não encontrada." << std::endl;
    }
}
