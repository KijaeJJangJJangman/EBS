#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20002

int arr[MAX_SIZE];
int front = MAX_SIZE/2, rear = MAX_SIZE/2+1;

void push_front(int x){
    arr[front] = x;
    front--;
}
void push_back(int x){
    arr[rear] = x;
    rear++;
}
void pop_front(){
    if(rear-front-1==0){
        printf("%d\n",-1);
    }else{
        printf("%d\n",arr[front+1]);
        front++;
    }
}
void pop_back(){
    if(rear-front-1==0){
        printf("%d\n",-1);
    }else{
        printf("%d\n",arr[rear-1]);
        rear--;
    }
}
void size(){
    printf("%d\n",rear-front-1);
}
void empty(){
    if(rear-front-1==0){
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }
}
void show_front(){
    if(rear-front-1==0){
        printf("%d\n",-1);
    }else{
        printf("%d\n",arr[front+1]);
    }
}
void show_back(){
    if(rear-front-1==0){
        printf("%d\n",-1);
    }else{
        printf("%d\n",arr[rear-1]);
    }
}
int main(){
    int n;
    char order[20];
    scanf("%d",&n);
    for(int i = 0 ; i < n;  i++){
        scanf("%s",&order);
        if(strcmp(order,"push_back") == 0){
            int num;
            scanf("%d",&num);
            push_back(num);
        }
        else if(strcmp(order,"push_front") == 0){
            int num;
            scanf("%d",&num);
            push_front(num);
        }
        else if(strcmp(order,"pop_front") == 0){
            pop_front();
        }
        else if(strcmp(order,"pop_back") == 0){
            pop_back();
        }
        else if(strcmp(order,"size") == 0){
            size();
        }
        else if(strcmp(order,"empty") == 0){
            empty();
        }
        else if(strcmp(order,"front") == 0){
            show_front();
        }
        else if(strcmp(order,"back") == 0){
            show_back();
        }
    }
    return 0;
}
