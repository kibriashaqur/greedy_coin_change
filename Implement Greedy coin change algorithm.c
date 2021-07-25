#include<stdio.h>
#define COINS 9
#define MAX_NEED 900

int coins[COINS] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000};

void find_minimum_possible_number_of_coin(int cost){
	int coin_list[MAX_NEED] = {0};
	int iteration, remain = 0;

	for (iteration = COINS - 1; iteration >= 0; iteration--) {
		while (cost >= coins[iteration]) {
			cost -= coins[iteration];
			coin_list[remain++] = coins[iteration];
		}
	}
	for (iteration = 0; iteration < remain; iteration++) {
		printf("%d \n", coin_list[iteration]);
	}
	return;
}

int main(){
	int number;

	printf("Enter the amount: ");
	scanf("%d", &number);

	printf("Following is minimal number of change for %d: \n",number);

	find_minimum_possible_number_of_coin(number);
	return 0;
}
