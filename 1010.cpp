#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	long long int code[2], number[2];
	double price[2], total;

	scanf("%lld %lld %lf",&code[0],&number[0],&price[0]);
	scanf("%lld %lld %lf",&code[1],&number[1],&price[1]);

	total = number[0]*price[0] + number[1]*price[1];

	printf("VALOR A PAGAR: R$ %.2lf\n",total);


	return 0;
}