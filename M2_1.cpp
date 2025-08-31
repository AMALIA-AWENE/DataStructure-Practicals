#include <iostream>
using namespace std;

const int sz=10;
int stk[sz];
int pointer=-1;

void push(int element){
    if (pointer==sz-1){
        cout<<"stack full\n";
    }else{
        pointer++;
        stk[pointer]=element;
    }
}

void pop(){
    if (pointer==-1){
        cout<<"Stack is empty\n";

    }else{
        pointer --;
    }
}

void display(){
    cout<<"\n Elments in stack are: ";
    for(int i=0; i<=pointer;i++)
    cout<<stk[i]<<" ";
}

int main(){
    push(5);
    push(11);
    push(41);
    push(1);
    push(13);
    display();
    pop();
    display();
    
    
    return 0;    
}