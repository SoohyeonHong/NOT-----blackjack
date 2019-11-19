

//print initial card status
void printCardInitialStatus(void) {
		
	printf("-----------CARD OFFERING-----------");
	printf("\n--- server  : X "); 
	printCard(cardhold[n_user][0]);
	printCard(cardhold[n_user][1]);
	printf("\n--- you  : "); 
	printCard(cardhold[0][0]);	
	printCard(cardhold[0][1]);
	
	int i;

	for(i=1;i<n_user;i++)
	{
		printf("\n--- plyaer %d  : ", i); 
		printCard(cardhold[i][0]);
		printCard(cardhold[i][1]);
	}
	printf("-----------------------------------------");
	return;
}

