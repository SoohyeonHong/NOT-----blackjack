

//get one card from the tray
int pullCard(void) {
	
	int card;
	
	card = CardTray[cardIndex];
	cardIndex++;
	
	return card; //ī�� �ϳ��� ������ �� ���� ī�尡 ��µȴ�. 
}

