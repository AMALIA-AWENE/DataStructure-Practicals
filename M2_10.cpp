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
        cout<<element<<" pushed to stack.\n"<<endl;
    }
}

void pop(){
    if (pointer==-1){
        cout<<"Stack is empty\n";

    }else{
        cout<<"Element "<< stk[pointer --]<<" popped from stack.\n"<<endl;
    }
}

void display(){
    cout<<"\n Elements in stack are: \n";
    for(int i=0; i<=pointer;i++)
    cout<<stk[i]<<" ";
}

int main(){
    int element, choice;

    do{
        cout<<"\nStack Menu.\n";
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Display\n";
        cout<<"4. Exit\n";
        cout<<"Enter you choice between 1,2,3 and 4.\n";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> element;
            push(element);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);
    return 0;    
}