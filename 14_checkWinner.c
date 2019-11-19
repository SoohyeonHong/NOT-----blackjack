

int checkWinner() {
	int i;
	for(i=0;i<n_user;i++)
	{
		if(cardSum[i]<21 && cardSum[0]<cardSum[i+1])
		{	
			printf("player win");
		}
	}
}
