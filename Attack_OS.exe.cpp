/*  
este virus simples foi desenvolvido para
consumir memoria de um computador.

code by Zeus Xaloc Dev
*/


#include <stdio.h>
#include <stdlib.h>  

void consumirMemoria(){
 double *ptr;
  while(1){
(double*)malloc(1000);
  }
}

int main(){ 
    
 int menu;
 
  printf("Digite 1 para executar || Digite 2 para sair: ");
  scanf("%i", &menu);
  
  if(menu == 1){
   consumirMemoria();
  }else{
   printf("\nSaindo do sistema...\n\n");
  }

 system("pause");
return 0; 
}