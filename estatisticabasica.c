#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// criando as variáveis principais
int main(){

    int quantidade,  i= 0,  j= 0;
    float ValorMaximo=sizeof i;
    float ValorMinimo=sizeof i;
    float Media=0;
    float Mediana=0;
    float DesvioPadrao;
// variáveis auxiliares necessárias par os cálculos
    float n[500];
    float SomaDosTermos = 0;
    float ValorDoMeio = 0;
    float Variancia = 0;

// Pegando a quantidade de números que o usuário deseja
    printf("Entre com a quantidade de valores que deseja:");
    scanf("%d", &quantidade);
    
// pegando os valores que o usuário deseja colocar  
        for(i=0;i<quantidade;i++) {

            printf("valor de posiçao %d: ", i);
            scanf("%f", &n[i]);

        
        }
		
// fazendo as fórmulas dos dados das variaveis principais 

//Valor Mínimo
    ValorMinimo = n[0];
    for(i=0;i<quantidade;i++) {
        if (n[i]<ValorMinimo) {
        ValorMinimo=n[i];
	}

//Valor Máximo
    ValorMaximo = n[0];
    for(i=0;i<quantidade;i++) {
        if (n[i]>ValorMaximo) {
        ValorMaximo=n[i]; 
		}
    }
  

//Média
    for(i=0;i<quantidade;i++) {   

        SomaDosTermos = SomaDosTermos + n[i];
        Media = SomaDosTermos/quantidade;
    }
    
//Desvio Padrão
    for(i=0;i<quantidade;i++) {
        Variancia = Variancia + pow(n[i] - Media,2) /quantidade;
        DesvioPadrao = sqrt(Variancia);
    } 
    
//Mediana
    for(i=0;i<quantidade;i++) {
        for(j = i + 1; j < quantidade; j++) {
            if(n[i] > n[j]) {
                ValorDoMeio = n[j];
                n[i]=n[j];
                n[j]=ValorDoMeio;
            }
        }
    }
        if(quantidade%2 == 0) {
            Mediana = (n[quantidade/2-1]+(n[quantidade/2]));
            Mediana = Mediana/2;
        }
        else{
            Mediana = n[quantidade/2];
        }

//Printado os valores dos dados
    printf("Valor Minimo: %2.2f \n", ValorMinimo);

    printf("Valor Maximo: %2.2f \n", ValorMaximo);

    printf("Media: %2.2f \n", Media);

    printf("Mediana: %2.2f \n", Mediana);

    printf("Desvio Padrao: %lf \n", DesvioPadrao);

    return 0;
    }
    }
