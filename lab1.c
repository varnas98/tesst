#include <stdio.h>


int main(void){
	int money = EditMoney();
	int day = EditDay();
	int proc;
	int itog;
	if(day<31){
		itog = money - Procent(money, 10);
	}else{
		int srok1, srok2, srok3;
		if(money<100000){
			srok1=2; srok2=6; srok3=12; 
		}else{ 
			srok1=3; srok2=8; srok3=15; 
		}
		itog=money+Vkad(money,day,srok1,srok2,srok3);
	}
	printf("Сумму вклада на момент окончания срока: %dр\n", itog);
	return 0;
}
