
#include "01_getIntegerInput.c"

//playing game functions -----------------------------

//player settiing
int configUser(void) {
	
	while(1)
	{
		printf("�÷��̾� ���� �Է��ϼ���.(�ִ�5): ");
		n_user = getIntegerInput();
		
			if(n_user<N_MAX_USER && n_user>0)
				break;
			else 
				printf("1�� �̻�, 5�� ���Ϸ� �Է��ϼ���\n");	
	}
	return n_user;
}

