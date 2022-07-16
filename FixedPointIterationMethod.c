#include<stdio.h>
#include<conio.h>
#include<math.h>
#define EPS 0.00001
float g(float x){
	return 5+0.5*sin(x);
}
int main(){
	float x0,x1;
	int n=1;
	printf("Enter the initial point x0: \n");
	scanf("%f",&x0);
	x1=g(x0);
	while(fabs((x1-x0)/x1)>EPS){
		n++;
		x0=x1;
		x1=g(x0);
		if(g(x1)==x1)
		break;
		
	}
	printf("The approximate rootn of the given function is %f with %d number of iterations.",x1,n);
	getch();
	return 0;
}
