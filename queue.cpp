#include<stdio.h>

int A[4], s=0, r=0, size=4,f=0;


void enqueue(int item){


    s=(r+1)%(size+1);
    if(s==f){
        return;
    }
    else{
        r=s;
        A[r]=item;

    }
printf("%d",A[r]);

}

void dequeue(){

    if(f==r){
        printf("empty");
    }
    else{
        f=(f+1)%(size+1);
        A[f]= NULL;
    }

}
int main(){


    enqueue(10);
    enqueue(20);
    enqueue(30);

    enqueue(40);
    dequeue();

}
