#include "macro.h"


int main(int argc, char *argv[]) {
	int roundIndex = 0;
	int max_user;
	int i;
	
	//카드트레이 배열에 순서대로 0부터 51까지 번호가 들어가게  됨
	for(i=0;i<N_CARDSET*N_CARD;i++)
	{
		CardTray[i]=i;	
	}


	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();


	//Game initialization --------
	//1. players' dollar
	
	//2. card tray
	mixCardTray();



	//Game start --------
	do {
		
		printf("\n------------------ Round %d (cardIndex : %d)--------------------------\n", roundIndex+1, cardIndex);
		betDollar();
		
		offerCards(); //1. give cards to all the players
		
		printCardInitialStatus();
		
		printf("-----------------GAME START------------------------\n");
		int i;
		
		//each player's turn
		for (i=0;i<=n_user;i++) //each player
		{
			while (1) //do until the player dies or player says stop
			{
				if(i=0)
					printf("my turn! -----------------\n");
				else if(i>0&&i<n_user)
					printf("player %d turn! ----------\n");
				else
					printf("server turn! -------------\n");
				
				
				printUserCardStatus(i, roundIndex+1);
				calcstepResult(i);
				getAction();
				
				
				if 
				
				//print current card status printUserCardStatus();
				//check the card status ::: calcStepResult()
				//GO? STOP? ::: getAction()
				//check if the turn ends or not
				
				if (bet[i]==0)
				gameEnd = 0;
				break;
			}
		}
		
		//result
		checkResult();
		roundIndex++;
		
	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}
