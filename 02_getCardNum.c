
//some utility functions

//card processing functions ---------------

//calculate the actual card number in the blackjack game


int getCardNum(int cardnum) {
	
	
	int i;

	int number ; //ī���ȣ�� 1������ 13�����ִ°� 
	int cycle; //1���� 13���� 4�� ���� �� 

		cycle = cardnum / 13;
		number = cardnum % 13;
		for(i=0;i<cycle;i++) //1~13�� ī�忡 ���� �ο� �ϴ� �� 4�� ���� 
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

