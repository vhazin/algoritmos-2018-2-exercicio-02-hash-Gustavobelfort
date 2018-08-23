#include <stdio.h>

int fast_mod(const int input, const int ceil) {

    return input >= ceil ? input % ceil : input;
    
}

int main() {

  unsigned long int testNumber;
  unsigned long int m;
  unsigned long int a,b,x,n,c,d;

  scanf("%d", &testNumber);

  for(unsigned long int i = 0; i < testNumber; i++)
  {
    int cases = 0;

    scanf("%d %d %d %d %d %d %d", &a, &b, &x, &n, &c, &d, &m);

    for(long unsigned int j = 0; j <= n; j++)
    {
      if( (fast_mod((a*(x+j)+b),m) >= c) && ( fast_mod((a*(x+j)+b),m) <= d) )
      {
        cases++;
      }
    }

    printf("%d\n", cases);

  }

  return 0;
  
}
