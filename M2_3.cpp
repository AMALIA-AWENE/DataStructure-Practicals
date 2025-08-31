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
        cout<<"Pushed in element: "<<element<<endl;
    
}
}

void pop(){
    if(top==-1){
        cout<<"Stack is empty can not pop out element.\n";
    }else{
        cout << "Popped element: " << stk[top] << endl;
        top--;
    }
}

void display(){
    if(top==-1){
        cout<<"Stack is empty\n";
    }else if(top>=SIZE-1){
        cout<<"Stack is full.\n";  
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
}