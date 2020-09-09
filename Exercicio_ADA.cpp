#include <stdio.h>
#include <stdlib.h>


int main(){
	double n;
	
	scanf("%lf",&n);
	
	int i;
	
	double sum=0;
	
	for(i=1;i<=n;i++){
		if(i%2==1){
		sum= sum + 1/double(2*i-1);}
		else{
		sum= sum - 1/double(2*i-1);
			}
		
		}
	 printf("%.16lf",4*sum);
	 return 0;
	
	}
