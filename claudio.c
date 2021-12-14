#include "claudio.h"

char customMessage(char str[]){
  /* char str[] = "";
  scanf("%s",&str); */
  printf("###########################################\n");
  printf("%s\n",str);
  printf("###########################################\n");
}

void consumoMessage(){
  printf("####################################\n");
  printf("DIGITE O CONSUMO DO CAMINHAO EM KM/L\n");
  printf("####################################\n");
}

void cotacaoMessage(){
  printf("#########################\n");
  printf("DIGITE A COTACAO DO POSTO\n");
  printf("#########################\n");
}

float getDistancia(){
  float distancia;
  scanf("%f",&distancia);
  return distancia;
}

float getConsumo(){
  float consumo;
  scanf("%f",&consumo);
  return consumo;
  
}

float returnValue(float value){
  printf("O VALOR QUE SERA GASTO, EH DE: %.2f",value);
}

float getCotacaoPosto(){
  float cotacao;
  scanf("%f",&cotacao);
  return cotacao;
}

float calcularValor(float quilometrosInformados, float consumoCaminhao, float cotacaoPosto){
  float valor;
  valor = (cotacaoPosto/consumoCaminhao)*quilometrosInformados;
  return valor;
}


