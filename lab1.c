#include <stdio.h>

int EditMoney(){
	int money; //Размер вклада
	do{
		printf("Введите размер вклада (в рублях): \n ");
		scanf("%d", &money);
		if(money<10000){
			printf("Сумма вклада должно быть не меннее 10 т.р.!\n");
		}else break;
	}while(1);
	return money;
}

int EditDay(){
	int day; //Размер вклада
	do{
		printf("Введите срок вклада (в днях): \n ");
		scanf("%d", &day);
		if((day>365)||(day<1)){
			printf("Срок вклада должен быть от 1 до 365 дней!\n");
		}else break;
	}while(1);
	return day;
}

int Procent(int money, int proc){
	return (money/100)*proc;	
}

int Vkad(int money, int day, int srok1, int srok2, int srok3){
	int srok;
	if(day<121){ srok=srok1; }else{
	if(day<241){ srok=srok2; }else{
	if(day<366) srok=srok3;}}
	return Procent(money, srok);
}

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
