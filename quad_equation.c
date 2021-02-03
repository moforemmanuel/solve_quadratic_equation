#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
 float a,b,c,x1,x2,x,i,det;
 printf("Input a,b,c of the quadratic equation : ");
 scanf("%f%f%f",&a,&b,&c);
 
 det = (b*b)-(4*a*c);
  if (det==0)//roots are equal
  {
  	x1 = (-b+sqrt(det))/(2*a);
  	x2 = (-b-sqrt(det))/(2*a);
  	printf("x1 = x2 = %.1f \n",x1,x2);
  	
  }
  else if (det>0)//roots are real
  {
  	x1 = (-b+sqrt(det))/(2*a);
  	x2 = (-b-sqrt(det))/(2*a);
  	printf("x1 = %.1f and x2 = %.1f \n",x1,x2);
  	
  }
  
  else if (det<0)//roots are complex
  {
  	
  	x = (-b)/(2*a);
  	i = (sqrt(abs(det)))/(2*a);
  	printf("x1 = %.1f + %.1fi and x2 = %.1f - %.1fi \n",x,i,x,i);
  	
  }
  
  else printf("Error...");
  return 0;
}
