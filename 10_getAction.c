
	
int getAction(void) {  

	
	int go;//go 여부 입력을 받는 변수 
	printf("Action? ( 0- go , 1 - stay) : ");
	if(n_user == 0)
		scanf("%d",go);
	else
	{
		if(card_num <17)
		{
			go=0;	
		}else
		{
			go=1;
		}		
	}
	
	while(1){
		
	if (go ==0)
		{
			printf("GO!"); 
			return 0;		}
		
	else if(go ==1)
		{
		printf("STAY!");
		stop=1;
		return -1;
		}
	else
		printf("0과 1 둘 중 하나만 입력하세요"); 
	} 
	}
}
