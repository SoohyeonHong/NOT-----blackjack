


//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) {
	
	srand((unsigned)time(NULL));
	int temp;
	int random;
	int i;
	
	for(i=0;i<100;i++)  //카드배열을 100번 섞음 
	{
		random = rand() % 52;
		temp = CardTray[i];
		CardTray[i] = CardTray[random];
		CardTray[random] = temp;
	}
	
	printf("카드를 섞었습니다");
	
	return;
	
}
