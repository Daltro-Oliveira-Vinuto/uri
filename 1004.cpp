#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	long long int a, b, product;

	scanf("%lld %lld",&a,&b);

	product = a*b;

	printf("PROD = %lld\n",product);


	return 0;
}