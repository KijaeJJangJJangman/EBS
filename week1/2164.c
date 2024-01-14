#include <stdio.h>
int arr[20000000];
int front = 0;
int rear = 0;

void push(int x){
    arr[rear] = x;
    rear++;
}
void pop(){
    front++;
    arr[rear] = arr[front];
    rear++;
    front++;
}

void back(){
    printf("%d\n",arr[rear-1]);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        push(i);
    }
    while(rear-front != 1){
        pop();
    }
    back();
    return 0;
}