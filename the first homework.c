#include <stdio.h>
  

int main()
{
    int x = 10,y = 20;
    int p = product(x,y);
    printf("The product is :%d",p);
    
    return 0;
}
  int product(int a,int b)
  {
    int c;
    c = a*b;
    return c;
  }

