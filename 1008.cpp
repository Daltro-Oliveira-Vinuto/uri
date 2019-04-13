#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
	long long int code, number_hours;
	double salary, value_hour;

	scanf("%lld %lld %lf",&code,&number_hours,&value_hour);

	salary = value_hour*number_hours;

	printf("NUMBER = %lld\n",code);
	printf("SALARY = U$ %.2lf\n",salary);


	return 0;
}