


//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) {
	
	srand((unsigned)time(NULL));
	int temp;
	int random;
	int i;
	
	for(i=0;i<100;i++)  //ī��迭�� 100�� ���� 
	{
		random = rand() % 52;
		temp = CardTray[i];
		CardTray[i] = CardTray[random];
		CardTray[random] = temp;
	}
	
	printf("ī�带 �������ϴ�");
	
	return;
	
}
