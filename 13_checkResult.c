


int checkResult() {
	int i;
	printf("-----------round %d result------------",cardIndex);
	printf("your result : %c (sum : %d) --> $%d\n", ���п���, cardSum[0], dollar[0]);
	for(i=1;i<n_user;i++)
	{
		printf("player%d's result : %c (sum : %d)  -> $%d\n", ���п���, cardSum[i],dollar[i]);	
	}
	return ;

}
