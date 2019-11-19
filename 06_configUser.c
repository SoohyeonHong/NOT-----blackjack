
#include "01_getIntegerInput.c"

//playing game functions -----------------------------

//player settiing
int configUser(void) {
	
	while(1)
	{
		printf("플레이어 수를 입력하세요.(최대5): ");
		n_user = getIntegerInput();
		
			if(n_user<N_MAX_USER && n_user>0)
				break;
			else 
				printf("1명 이상, 5명 이하로 입력하세요\n");	
	}
	return n_user;
}

