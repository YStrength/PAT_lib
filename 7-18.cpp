#include <stdio.h>
int main()
{
	double s ,p_s,P;
	int t ,p_t;
	scanf("%lf %d",&s,&t);
	if(s<0){
		s=-s;
	}
	if ( s<=3){
		p_s=10;
	}
	else if (s>3 && s<=10){
		p_s +=(s-3)*2+10;
	}
	else if (s>10){
		p_s +=(s-10)*3+24;
	}
	if (t<0){
		t=-t;
	} 
	p_t=t/5*2;
	P=p_s+p_t;
	printf("%0.lf",P);
 return 0;
 }
