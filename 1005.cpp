#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	double a, b, media;

	scanf("%lf %lf",&a,&b);

	media = (a*3.5+b*7.5)/(11);

	printf("MEDIA = %.5lf\n",media);

	return  0;
}