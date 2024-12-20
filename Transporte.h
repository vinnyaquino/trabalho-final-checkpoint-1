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
    int distanciaEntreDescansos;
    int tempoDeDescanso;
    int tempoDeDescansoAtual;
    Cidade* localAtual;
public:
    Transporte(std::string nome, char tipo, int capacidade, int velocidade,
               int distanciaEntreDescansos, int tempoDeDescanso, Cidade* localAtual);
    std::string getNome();
    char getTipo();
    int getCapacidade();
    int getVelocidade();
    int getDistanciaEntreDescansos();
    int getTempoDeDescanso();
    int getTempoDeDescansoAtual();
    Cidade* getLocalAtual();
    void setLocalAtual(Cidade* local);
};

#endif
