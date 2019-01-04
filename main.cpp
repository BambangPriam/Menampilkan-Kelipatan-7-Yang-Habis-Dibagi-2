#include<stdio.h>
#include<conio.h>

using namespace std;
int main()
{
    printf("KELIPATAN 7 YANG HABIS DIBAGI 2 (1-50)\n\n");
    int i=7;
    while (i<50){
        if(i%2==0 && i%7==0){
            printf ("%d\n", i );

        }i+=1;
    } return 0;
}
