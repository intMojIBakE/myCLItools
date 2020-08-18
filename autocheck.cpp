/*
Last modified: 2020-07-31 12:01:54

Designed to check some bills and get the sum.
It's a simple program to help my father's business.
*/

#include <cstdio>
#include <cstdlib>
using namespace std;

double sum;

void prih(){
    printf("Input 0 to check sum\nInput -1 to clear the screen\nDo not input -1 twice\n\n\n");
}

int main(int argc, char const *argv[]){
    while (true){
        double a, b, c;
        scanf("%lf", &a);
        if(a==-1)
            system("clear"), prih(), scanf("%lf", &a);
        if (a == 0){
            printf("Total：%.2lf\n\n", sum);
            sum = 0;
        }
        else{
            scanf("%lf%lf", &b, &c);
            if (a * b != c)
                printf("×: %.2lf × %.2lf ≠ %.2lf\n", a, b, c);
            else
                sum += c;
        }
    }
    return 0;
}