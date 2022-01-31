#include <stdio.h> 
void main() 
{ 
	int a, b, c, d, x; 
	printf("Masukan Tinggi (Max.8): "); 
	scanf("%d",&x); 
		for(a=1; a<=x; a++) {
		 	for(b=0;b<a;b++) { 
				for(c=x;c>=a;c--) {printf(" "); } 
			for(d=1;d<=a;d++) {printf("*"); } 
		printf(" ");}
	printf("\n");}
}
