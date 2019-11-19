


//print the card information (e.g. DiaA)
void printCard(int cardnum) {
	int pattern;
	pattern = cardnum / 13 ;
	
		switch(pattern)
		{
			case 0 : 
				printf("¢¾");
				break;
			case 1 : 
				printf("¡ß");
				break;
			case 2 : 
				printf("¢¼");
				break;
			case 3 : 
				printf("¢À");
				break;
		}
		
	int number;
	number = cardnum % 13;
		switch(number)
		{
			case 0 :
				printf("A\t");
				break;
			case 10 :
				printf("J\t");
				break;
			case 11 :
				printf("Q\t");
				break;
			case 12 :
				printf("K\t");
				break;
			default :
				printf("%d\t",number+1);
				break;
		}
	}
	

