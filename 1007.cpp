#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	long long int a, b, c, d, difference;

	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

	difference = a*b - c*d;

	printf("DIFERENCA = %lld\n",difference);


	return 0;
}