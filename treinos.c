//PLANEJAMENTO: SABENDO QUE TENHO 3 TIPOS DE TREINO ( PERNA, BRAÇO E JIU-JITSU), QUANTOS TREINOS SEMANAIS EU FAÇO PARA QUANTIFICAR QUANTOS TREINOS EU FAÇO POR ANO ( QUERO A LÓGICA E A MAIN)

#include <stdio.h>
	 int treinos_semanais (int treino_perna , int treino_braco , int treino_jiu) {

    return treino_perna + treino_braco + treino_jiu ;

	}
	
    int main (void) {
        int treinos;
        int treino_perna ;
        int treino_braco ;
        int treino_jiu ; 
        int treinosanuais ; 

        printf ( "Digite a quantidade de treinos de perna\n") ; 
        scanf ( "%d" , &treino_perna) ; 

        printf ("Digite a quantidade de treinos de braço\n");
        scanf ( "%d", &treino_braco) ; 

        printf ("Digite a quantidade de treino de jiu-jitsu\n");
        scanf ( "%d" , &treino_jiu);

        //estou chamando a função


        treinos = treinos_semanais ( treino_perna , treino_braco , treino_jiu) ;
        treinosanuais = treinos * 52 ;
        printf ( "A quantidade de treinos por ano é: %d", treinosanuais);
        
    }
