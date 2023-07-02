#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10

int stack[MAX];
int top=-1;
char symbol;
int flag=1;
char temp;

void push(char c){
    if(top==MAX-1){
        printf("The stack is full");
    }
    else{
        top++;
        stack[top]=c;
    }
}

char pop(){
    if(top==-1){
        printf("The stack is empty");
    }
    else{
        return(stack[top--]);
    }
}

int main(){
    char exp[10];
    printf("Enter the expression : ");
    gets(exp);
    for(int i=0;i<MAX-1;i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(exp[i]);
           }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(top==-1){
                flag=0;
            }
            else{
                temp=pop();
                if(temp=='(' && (exp[i]=='}' || exp[i]==']')){
                    flag=0;
                   }
                if(temp=='{' && (exp[i]==')' || exp[i]==']')){
                    flag=0;
                   }
                if(temp=='[' && (exp[i]==')' || exp[i]=='}')){
                    flag=0;
                   }
            }
        }
    }
    if(top>=0){
        flag=0;
    }
    if(flag==1){
        printf("\nValid Expression");
    }
    else{
        printf("\nInvalid Expression");
    }
    return 0;
}
