#include "ControladorDeTransito.h"

int main() {
    ControladorDeTransito controlador;

    controlador.cadastrarCidade("CidadeA");
    controlador.cadastrarCidade("CidadeB");

    controlador.cadastrarTrajeto("CidadeA", "CidadeB", 'T', 100);

    controlador.cadastrarTransporte("Ônibus1", 'T', 50, 80, 200, 2, "CidadeA");

    controlador.cadastrarPassageiro("João", "CidadeA");

    return 0;
}
