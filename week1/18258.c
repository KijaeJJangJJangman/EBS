#include <stdio.h>
#include <string.h>
int arr[2000000];
int front = 0;
int rear = 0;

void push(int x){
    arr[rear] = x;
    rear++;
}
void pop(){
    if(front == rear){
        printf("%d\n",-1);
    }else{
        printf("%d\n",arr[front]);
        front++;
    }
}
void size(){
    printf("%d\n",rear-front);
}
void empty(){
    if(front == rear){
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }
}
void printfront(){
    if(front == rear){
        printf("%d\n",-1);
    }else{
        printf("%d\n",arr[front]);
    }
}
void back(){
    if(front == rear){
        printf("%d\n",-1);
    }else{
        printf("%d\n",arr[rear-1]);
    }
}
int main(){
    int n;
    char order[10];
    scanf("%d",&n);
    for(int i = 0 ; i < n;  i++){
        scanf("%s",&order);
        if(strcmp(order,"push") == 0){
            int num;
            scanf("%d",&num);
            push(num);
        }
        else if(strcmp(order,"pop") == 0){
            pop();
        }
        else if(strcmp(order,"size") == 0){
            size();
        }
        else if(strcmp(order,"empty") == 0){
            empty();
        }
        else if(strcmp(order,"front") == 0){
            printfront();
        }
        else if(strcmp(order,"back") == 0){
            back();
        }
    }
    return 0;
}