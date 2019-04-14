#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	char name[257];
	double fixed, sales, final_salary;

	scanf("%s",name);
	scanf("%lf %lf",&fixed,&sales);

	final_salary = fixed + 0.15*sales;

	printf("TOTAL = R$ %.2lf\n",final_salary);

	return 0;
}