#include <stdio.h>

int main () {
	char document [100];
	int n,jumlah, sum=0, no=0, print=0;
	
	scanf ("%d", &n);
	for (int i=1 ; i<= n ; i++) {
		scanf ("%s %d", document, &jumlah);
		sum=sum+jumlah;
		if (sum<=32) {
			printf("%s\n", document);
			print++;
			}
		else if(sum>32) {
			sum=sum-jumlah;
			no++;
			}
		}
printf("%d %d\n",print,no);
return 0;
	}
