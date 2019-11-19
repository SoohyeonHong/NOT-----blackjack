

//get one card from the tray
int pullCard(void) {
	
	int card;
	
	card = CardTray[cardIndex];
	cardIndex++;
	
	return card; //카드 하나씩 꺼내면 그 다음 카드가 출력된다. 
}

