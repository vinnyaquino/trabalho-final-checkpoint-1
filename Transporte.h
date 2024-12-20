#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include "Cidade.h"
#include <string>

class Transporte {
private:
    std::string nome;
    char tipo;
    int capacidade;
    int velocidade;
    int distancia_entre_descansos;
    int tempo_de_descanso;
    Cidade* localAtual;

public:
    Transporte(std::string nome, char tipo, int capacidade, int velocidade,
               int distancia_entre_descansos, int tempo_de_descanso, Cidade* localAtual);

    std::string getNome();
    char getTipo();
    int getCapacidade();
    int getVelocidade();
    Cidade* getLocalAtual();
    void setLocalAtual(Cidade* local);
};

#endif
