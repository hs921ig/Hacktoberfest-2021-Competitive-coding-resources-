#include <stdio.h>

int main() {
	int base=1500,n,prc;
	printf("Enterthe number of computers sold:\n" );
	scanf("%d",&n);
	printf("Enter the sale price of a computer:\n" );
	scanf("%d",&prc);
	int bonus=n*200;
	int commission=0.02*(prc*n);
	int gross = base+bonus+commission;
	printf("%d %d %d\n",bonus,commission,gross );
	return 0;
}