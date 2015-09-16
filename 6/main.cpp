#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
int payment[9]={0};
const char *spisok[]={"$201-%299", "$300-$399", "$400-$499", "$500-$599", "$600-$699", "$700-$799", "$800-$899", "$900-$999", "$1000-..."};
//const char *spisok[]={"$201-%299"};

int main(int argc, char *argv[])
{
    int money = 1;
    float pay;
    money = 1;
    printf("Please, enter money of workers sale, when you want to end, enter: '0'.");
    while ( money != 0 )
    {
          printf("\nMoney: ");
          scanf("%d", &money);
          pay = ( 200 + (float) money * 0.09 );
          int i, n;
          for (i=1000, n = 8; i >= 200; i-=100, --n)
          {
              if ( pay >= i )
              {
                   ++payment[n];
                   break;
              }    
          }   
    }
    int i=0;
    for (i = 0; i < 9; ++i)
        printf("%9s : %8d\n", spisok[i], payment[i]);

    system("PAUSE");
    return EXIT_SUCCESS;
}
