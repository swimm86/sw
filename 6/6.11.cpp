#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a[10]={10, 1, 2, 3, 4, 5, 7, 6, 8, 9};
    int i, pass, hold, size, check, sizer;
    size = 9;
    sizer = 9;
    
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf ("\n");
    
    for (pass = 0; pass < size; pass++){
        check = 0;
        for (i = 0; i < sizer; i++){
            if (a[i] > a[i + 1]){
                     hold = a[i];
                     a[i] = a[i + 1];
                     a[i + 1] = hold;
                     check = 1;
            }
        }
        sizer--;
        if (check == 0)
           break;
        for (i = 0; i < 10; i++)
            printf("%d ", a[i]);
        printf("\n");
    }                    

    system("PAUSE");
    return EXIT_SUCCESS;
}
