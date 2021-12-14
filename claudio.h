#include <stdio.h>
#ifndef CLAUDIO_H_INCLUDED
#define CLAUDIO_H_INCLUDED

char customMessage(char str[]);
void consumoMessage();
void cotacaoMessage();
float getDistancia();
float getConsumo();
float getCotacaoPosto();
float calcularValor(float quilometrosInformados, float consumoCaminhao, float cotacaoPosto);
float returnValue(float value);


#endif

