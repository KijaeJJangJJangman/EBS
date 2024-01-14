#include <stdio.h>
#include <string.h> 
int cnt = 0;
int arr[10000];

void push(int num){
    arr[cnt] = num;
    cnt++;
}
void pop(){
    if(cnt == 0 || arr[cnt-1] == -1){
        printf("-1\n");
    }else{
        printf("%d\n",arr[cnt-1]);
        arr[cnt-1] == -1;
        cnt--;
    }
}
void size(){
    printf("%d\n",cnt);
}
void empty(){
    if (cnt != 0) {
		printf("0\n");
	}
	else {
		printf("1\n");
	}
}
void top(){
    if(cnt == 0 || arr[cnt-1] == -1){
        printf("-1\n");
    }else{
        printf("%d\n",arr[cnt-1]);
    }
}
int main(){
    int n;
    int num;
    char order[10];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        arr[i] = -1;
    }
    for(int i = 0 ; i < n ; i++){
        scanf("%s", &order);
		if (strcmp(order, "push") == 0) {
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(order, "pop") == 0) {
			pop();
		}
		else if (strcmp(order, "top") == 0) {
			top();
		}
		else if (strcmp(order, "size") == 0) {
			size();
		}
		else if (strcmp(order, "empty") == 0) {
			empty();
		}
    }
    return 0;
}