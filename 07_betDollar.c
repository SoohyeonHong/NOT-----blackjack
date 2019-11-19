#include "01_getIntegerInput.c"

//betting
int betDollar(void) {
	int i;
	int j;
	int k;
	
	for(i=0;i<n_user;i++)
	{
		dollar[i] = 50;
	}
	
	for(j=1;j<n_user;j++) //나 빼고 나머지 플레이어들은 보유 금액 미만의 돈을 걸음 
	{
		bet[j]=rand()%dollar[j];
	} 


	while(1)
	{
		printf("-----------------------------")
		printf("your betting (total $%d) : ",dollar[0]); //[0]이 나 
		bet[0] = getIntegerInput();
		
		if( bet[0] > dollar[0])
			printf("%d달러 이하의 금액을 입력하세요", dollar[0]);	
		else
			break;
	}
	 
	for(k=1;k<n_user;k++)
	{
		printf("player%d bets $%d (한도 : $%d)", k, bet[k], dollar[k]);
	}
		
		printf("--------------------------------");
		
	
	return;
	}	
	
