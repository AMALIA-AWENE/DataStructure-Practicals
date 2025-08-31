#include<iostream>
using namespace std;

int const SIZE=5;
int stk[SIZE];
int top=-1;

void push(int element){
    if (top>=SIZE-1){
        cout<<"stack full\n";
    }else{
        top++;
        stk[top]=element;
    
}
}

void display(){
    if(top==-1){
        cout<<"Stack is empty\n";
    }else{
        cout<<"the top element is: "<<stk[top]<<endl;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();
}