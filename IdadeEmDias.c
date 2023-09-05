#include <stdio.h>
int main(){

    int idadeEmDias, ano, mes, dia;

    scanf("%d", &idadeEmDias);

    ano = (idadeEmDias/365);
    mes = (idadeEmDias -  ano*365)/30;
    dia = (idadeEmDias - ano*365 - mes*30);

    printf("%d ano(s)\n", ano);
    
    printf("%d mes(es)\n", mes);

    printf("%d dia(s)\n", dia);
    

return 0;
}
