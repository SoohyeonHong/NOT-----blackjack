
//some utility functions

//card processing functions ---------------

//calculate the actual card number in the blackjack game


int getCardNum(int cardnum) {
	
	
	int i;

	int number ; //카드번호는 1번부터 13까지있는거 
	int cycle; //1부터 13까지 4번 도는 거 

		cycle = cardnum / 13;
		number = cardnum % 13;
		for(i=0;i<cycle;i++) //1~13번 카드에 숫자 부여 하는 걸 4번 돌림 
		{
				if(number<10)
				{
					CardTray[cardnum]=number+1;
				}
				else if(number>=10 && number<13)
				{
					CardTray[cardnum]=10;
				}
			}	
}			

