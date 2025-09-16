#include <stdio.h>
// QUERO SABER QUANTOS LIVROS UMA PESSOA LER POR ANO E CALCULAR O TEMPO MEDIO DE LEITURA E COMPARAR COM O TEMPO MEDIO DOS FRANCESES - PORQUE ELES LEEM MUITO
int main (void) {
    int quantidade_de_livros ;
    float tempo_medio ;
    float tempo_medio_franceses ;
    tempo_medio_franceses = 21 * 4.5 ;
    // PARA LER UM LIVRO GASTA-SE 4H E 30MIN E OS FRANCESES LEEM , EM MÉDIA , 21 LIVROS POR ANO

    printf ("Quantos livros você leu este ano?\n");
    scanf ("%d" , &quantidade_de_livros);

    tempo_medio = quantidade_de_livros * 4.5 ;
     if ( tempo_medio >= tempo_medio_franceses ) {
        return 1;

     }
     else {
        return 0 ;
     }

}