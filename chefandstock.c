#include <stdio.h>

int main(void) {
	float i,r,T;
	float S,A,B,C;
	scanf("%f",&T);
	for(i=1;i<=T;i++)
	{
	    scanf("%f%f%f%f",&S,&A,&B,&C);
	    r=S+(S*C)/100;
	    if(r>=A && r<=B)
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("no\n");
	    }
	}
	return 0;
}
