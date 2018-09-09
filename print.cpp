#include<stdio.h>

void func(int n){
    printf("hello");
    if(n==7)
        return;
     func(n+1);
     printf("%d",n);
     printf("hp");
}

int main()
{
    int n=5;

    func(n);
}
