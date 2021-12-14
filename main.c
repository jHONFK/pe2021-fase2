#include <stdio.h>
#include <stdlib.h>
#include "claudio.h"
	
int main(int argc, char *argv[])
{
  customMessage("BEM VINDO AO SISTEMA, CAMINHONEIRO ");
  float res,res2,res3;
  customMessage("DIGITE A DISTANCIA DA VIAGEM ");
  res = getDistancia();
  customMessage("DIGITE O CONSUMO EM KM/L DO SEU CAMINHAO ");
  res2 = getConsumo();
  customMessage("DIGITE A COTACAO DO DIESEL NO ABASTECIMENTO ");
  res3 = getCotacaoPosto();
  res = calcularValor(res, res2, res3);
  returnValue(res);

	return 0;
}
