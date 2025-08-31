#include <iostream>
using namespace std;

int const SIZE=5;
int que[SIZE];
int front=-1;
int rear=-1;

void Enque(int element){
    if ((front==0 && rear==SIZE-1) || (front==(rear+1)%SIZE)){
        cout<<"\n Queue if full";
        return;
    }
    
    if(front==-1)
    front=0;
    rear=(rear+1)%SIZE;
    que[rear]=element;
}

void Deque(){
    if(front==-1){
        cout<<"\nQueue Empty";
        return;
    }

    if (front==rear){
        //one element left
        front=-1;
        rear=-1;
    }else{
        front=(front+1)%SIZE;
    }
}

void Display(){
    if(front==-1){
        cout<<"\n Queue is empty";
        return;
    }

    cout<<"\n Elements in Queue are: ";
    int i =front;
    while (true){
        cout<<que[i]<<" ";
        if(i==rear)
        break;
        i=(i+1)%SIZE;

    }
    cout<<"\n\n";
}

int main(){
    Enque(0);
    Enque(9);
    Enque(2);
    Display();
    Deque();
    Display();
    return 0;

}