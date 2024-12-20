#ifndef VIAGEM_H
#define VIAGEM_H

#include "Cidade.h"
#include "Transporte.h"
#include "Passageiro.h"
#include <vector>

class Viagem {
private:
    Transporte* transporte;
    std::vector<Passageiro*> passageiros;
    Cidade* origem;
    Cidade* destino;
    Viagem* proxima;
    int horasEmTransito;
    bool emAndamento;
public:
    Viagem(Transporte* transporte, std::vector<Passageiro*> passageiros, Cidade* origem, Cidade* destino);
    void iniciarViagem();
    void avancarHoras(int horas);
    void relatarEstado();
    bool isEmAndamento();
    Cidade* getDestino();
};

#endif
