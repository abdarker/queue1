#include<stdio.h>

int fibo(int num){

        if (num == 1)
    {
        return 1;
    }
    else if (num == 2)
    {
        return 2;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }

}

int main(){

    int n, result;
    scanf("%d",&n);
    if(n==1){
        printf("not possible");
    }
    else{
    result = fibo(n);
    printf("the %d number in fibonacci series is %d\n", n, result);  // 1, 3, 5, 8,13....
    }
}

