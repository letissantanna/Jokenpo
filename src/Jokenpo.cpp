//============================================================================
// Name        : Jokenpo.cpp
// Author      : Leticia Sant'Anna
// Version     : 1
//============================================================================

#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

using namespace std;

int main() {
	int jogador1, jogador2;

	printf("Faca a sua jogada: \n");
	printf(" 1 - Pedra\n 2 - Papel\n 3 - Tesoura\n\n");
	scanf ("%d", &jogador1);			//recebe o numero do usuario
	switch(jogador1){					//exibe o que o jogador escolheu
		case 1:
			printf ("Voce: Pedra\n");
			break;
		case 2:
			printf ("Voce: Papel\n");
			break;
		case 3:
			printf ("Voce: Tesoura\n");
			break;
	}

	srand(time(NULL));
    jogador2 = (rand() % 3) + 1;		//jogada aleatória da máquina
	switch(jogador2){					//exibe jogada da máquina
		case 1:
			printf ("Adversario: Pedra\n");
			break;
		case 2:
			printf ("Adversario: Papel\n");
			break;
		case 3:
			printf ("Adversario: Tesoura\n");
			break;
	}

	//exibe o resultado
	if (jogador1 == jogador2)
		printf("\n    Vocês empataram\n");
	else {
		if((jogador1==1 && jogador2==2) || (jogador1==2 && jogador2==3) || (jogador1==3 && jogador2==1) )
			printf("\n      Você perdeu :'(\n");
		else printf("\n   Você venceu! PARABÉNS! :D\n");
	}
}
