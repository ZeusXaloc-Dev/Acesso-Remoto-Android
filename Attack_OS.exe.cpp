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
ptr = (double*)malloc(100);
  }
}

int main(){ 
    
 int menu;
  
  printf("+----------------+
|    Desenvolvida 
         Por   
      Zeus Xaloc              |
+----------------+");
  printf("\n•Digite 1 para iniciar || •Digite 2 para sair ");
  printf("\n•Digite o Número: ");
  scanf("%i", &menu);
  
  if(menu == 1){
   consumirMemoria();
  }else{
   printf("\nSaindo do sistema...\n\n");
  }

 system("pause");
return 0; 
}
