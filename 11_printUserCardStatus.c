


void printUserCardStatus(int user, int cardcnt) {
	int i; 
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
}

