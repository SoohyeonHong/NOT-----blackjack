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
	
	for(j=1;j<n_user;j++) //�� ���� ������ �÷��̾���� ���� �ݾ� �̸��� ���� ���� 
	{
		bet[j]=rand()%dollar[j];
	} 


	while(1)
	{
		printf("-----------------------------")
		printf("your betting (total $%d) : ",dollar[0]); //[0]�� �� 
		bet[0] = getIntegerInput();
		
		if( bet[0] > dollar[0])
			printf("%d�޷� ������ �ݾ��� �Է��ϼ���", dollar[0]);	
		else
			break;
	}
	 
	for(k=1;k<n_user;k++)
	{
		printf("player%d bets $%d (�ѵ� : $%d)", k, bet[k], dollar[k]);
	}
		
		printf("--------------------------------");
		
	
	return;
	}	
	
