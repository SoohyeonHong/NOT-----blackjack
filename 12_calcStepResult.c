
// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult(int playerNum) {

	int j,num=0,temp=0;
	bool isA=false;
	
	for(j=0;;j++){
		if(cardhold[playerNum][j] == NULL )
		{
			if(isA==true)
			{
				temp=cardSum[playerNum];
				while(temp < 21 && num > 0){
					temp += 10;
					if(temp > 21)
					{
						temp -=10;
						break;
					}
					num --;
				}
				cardSum[playerNum]=temp;
			}
			break;
		}
		if(cardhold[playerNum][j] == 1)
		{
			isA=true;
			num++;
		}
		cardSum[playerNum]+=cardhold[playerNum][j];
	}
	
	if (cardSum[playerNum]==21)
	{
		dollar[playerNum]=dollar[playerNum]+bet[0] ;
		printf("??blackjack? sum : %d --> -$%d ($%d)", cardSum[0],bet[0],dollar[0]);
		turnend=1;
	}
	else if(cardSum[playerNum]<21)
	{
		
					}				
	else if(cardSum[playerNum]>21)
	{
		
	}
	
	return cardSum[playerNum];
}
