#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*using namespace std;
#include <stdio.h>
#include <vector>

class Game
{
public:
    enum Bar {
        FirstBar,
        SecondBar,
        ThirdBar,
        BarsCount
    };

    void init(Bar sourceBar, int discs)
    {
        for (int i = 0; i < BarsCount; ++i) {
            m_bars[i].clear();
            m_bars[sourceBar].reserve(discs);
        }

        for (; discs > 0; --discs) {
            m_bars[sourceBar].push_back(discs);
        }
    }

    bool moveOneDisc(Bar from, Bar to)
    {
        if (m_bars[from].empty()) {
            printf("Bar %d have no discs.\n", from + 1);
            return false;
        }

        if (!m_bars[to].empty() && m_bars[from].back() >= m_bars[to].back()) {
            printf("Target bar have smaller disc, than you're' trying to move.\n");
            return false;
        }

        printf("%d -> %d\n", from + 1, to + 1);
        m_bars[to].push_back(m_bars[from].back());
        m_bars[from].pop_back();
        return true;
    }

protected:
    std::vector<int> m_bars[BarsCount];

};

Game game;

void move(int discs, Game::Bar source, Game::Bar target, Game::Bar tmp)
{
    game.moveOneDisc(source, target);
}

int main()
{
    game.init(Game::FirstBar, 4);

    move(4, Game::FirstBar, Game::ThirdBar, Game::SecondBar);

    system("PAUSE");
    
    return 0;
}*/


void hanoi(int, int, int, int);
//int n = 0;

//int quad(int);
//int maximum (int, int, int);
//int gl_x = 10;

int main(int argc, char *argv[])

{
    /*int i1, i2, sum;
    printf("chislo 1: ");
    scanf("%d", &i1);
    printf("chislo 2: ");
    scanf("%d", &i2);
    if (i1 != i2)
       printf("%d not = %d\n", i1, i2);
    sum = i1 + i2;
    printf("%d\n", sum);*/
    
    /*int a, a1, a2, a3, a4, a5;
    scanf("%d", &a);
    a1 = a/10000;
    a2 =(a - a1 * 10000) / 1000;
    a3 = (a - a1 * 10000 - a2 * 1000) / 100;
    a4 = (a - a1 * 10000 - a2 * 1000 - a3 * 100) / 10;
    a5 = a - a1 * 10000 - a2 * 1000 - a3 * 100 - a4 * 10;
    printf ("%d %d %d %d %d \n", a1, a2, a3, a4, a5);*/
    
    /*printf("number\tsquare\tcube\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", 0, 0*0, 0*0*0, 1, 1*1, 1*1*1, 2, 2*2, 2*2*2, 3, 3*3, 3*3*3, 4, 4*4, 4*4*4, 5, 5*5, 5*5*5, 6, 6*6, 6*6*6, 7, 7*7, 7*7*7, 8, 8*8, 8*8*8, 9, 9*9, 9*9*9, 10, 10*10, 10*10*10);*/
    
    /*int i = 0, a = 0, b = 0;
    while (i != 5) {
          i+=1;
          a+=100;
    }
    printf("%d", a);
    if (a >= 500)
       printf("\nProgramm work!\n");
    if (a < 500)
       printf("\nSomething bad :(\n");*/
       
    /*"%.1f"*/
    
    /*int counter, x=1;
    double y;
    for(counter=x ; counter<=10; ) 
                   printf("%d\n", counter++);     
    y=10.0;             
    printf("Control counter is %d\n", counter);
    counter=12345;
    double amount, principal=1000.0, rate=.05;
    printf("%3s%21s\n", "Year", "Amount on deposit");*/
    
    /*int a;
    int aC, bC, cC, dC, fC;
    aC=bC=cC=dC=fC=0;
    while ( ( a = getchar () ) != EOF) {
          switch(a) {
                    case 'a': case 'A':
                         ++aC;
                         break;
                    case 'b': case 'B':
                         ++bC;
                         break;
                    case 'c': case 'C':
                         ++cC;
                         break;
                    case 'd': case 'D':
                         ++dC;
                         break;
                    case 'f': case 'F':
                         ++fC;
                         break;
                    case '\n': case ' ':
                         break;
                    default:
                         printf("Incorrect letter\n");
                         break;
          }
    }
    printf("a : %d\n", aC); 
    printf("b : %d\n", bC);
    printf("c : %d\n", cC);
    printf("d : %d\n", dC);
    printf("f : %d\n", fC);*/
    
    /*int a=1;
    do {
        printf("%d\n", a++);
    } while (a<=15);*/
    
    /*switch (8 % 2) {
           case 1:
                printf("\n1\n");
                break;
           case 0:
                printf("\n0\n");
                break;
           case '\n': case ' ':
                break;
           default:
                   printf("Doesn't work\n");
    }*/

   /*int x;                                        
   for(x=1; x<=10; x++) {
         printf("%d\n", quad(x));
   }*/                                             /*Квадраты чисел от 1 до 10*/
   
   /*printf ("%d\n", maximum(1, 2, 3));*/ /*Пример работы функции по нахождению
                                                                  из 3-х чисел*/

   /*{int gl_x=15;
    printf("%d\n", gl_x);}
printf("%d\n", gl_x);*/

//   char x[] = "hello!";
//   printf("%c\n", x[1]);
    int disk, start = 1, empty = 2, target = 3;
    printf( "Enter number of disks: " );
    scanf( "%d", &disk );
    printf("\n");
    printf( "Enter start place: " );
    scanf( "%d", &start );
    printf("\n");
    printf( "Enter empty place: " );
    scanf( "%d", &empty );
    printf("\n");
        printf( "Enter target place: " );
    scanf( "%d", &target );
    printf("\n");
    hanoi(disk, start, empty, target);   

    system("PAUSE");
    return EXIT_SUCCESS;
} 


//int quad(int var) {                    /*Функция для нахождения квадрата числа*/
/*    return var*var;
}*/

//int maximum(int var1, int var2, int var3) {/*Функция по нахождению наибольшего*/
//    int max = var1;                                             /*Из 3-х чисел*/
//    if (var2 > max)
//       max = var2;
//    if (var3 > max)
//       max = var3;
//    return max;   
//}

/*void hanoi(int disk, int start, int empty, int target)
{
    int copy;
    if ( disk != 0)
    {
          printf ("New iteration\n");
          disk-=1;
          printf ("%d --> %d\n", start, empty);
          copy = empty;
          empty = target;
          target = copy;
          if ( disk != 0)
          {
               disk-=1;
               printf ("%d --> %d\n", start, empty);
          }
          printf ("%d --> %d\n", target, empty);
          copy = empty;
          empty = target;
          target = copy;
          printf ("disk number: %d\n", disk);
          hanoi(disk, start, empty, target);

    }
        
}*/

void hanoi(int disk, int start, int empty, int target)
{
     int copy;
     static int n;
     if (disk == 1 && n == 0)
        printf("%d --> %d\n", start, target);   
     else if (disk > 0)
     {
           disk -= 1;
           /*Смена 1*/
           copy = start;
           start = target;
           target = copy;
           copy = start;
           start = empty;
           empty = copy;
           //printf ("%d - %d - %d\n", start, empty, target);
           printf("%d --> %d\n", target, empty);
           /*Смена 2*/
           n+=1;
           copy = start;
           start = target;
           target = copy;
           copy = start;
           start = empty;
           empty = copy;
           //printf ("%d - %d - %d\n", start, empty, target);
           if (n%2 != 0)
              printf("%d --> %d\n", empty, target);
           else
              printf("%d --> %d\n", target, empty);
           //printf("End of iteration. Disk = %d\n", disk);
           
           hanoi (disk, start, empty, target);
     }
     else
     {
         copy = start;
         start = target;
         target = copy;
         copy = start;
         start = empty;
         empty = copy;
         printf("%d --> %d\n", target, empty);
     }
}    
//qweopiqpowiepoqwieopqwiepoqwie        
