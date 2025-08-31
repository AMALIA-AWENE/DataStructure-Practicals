#include<iostream>
using namespace std;

const int SIZE=5;
int Que[SIZE];

int Front=-1;
int Rear=-1;

void display(){
    cout<<"The element at the front of the queue is: "<<Que[Front]<<endl;
    cout<<"The element at the Rear of the queue is: "<<Que[Rear]<<endl;
}

void Enq(int element){
    if (Rear==SIZE-1){
         cout<<"Queue full";
    }else{
        Rear++;
        Que[Rear]=element;
    }
}

void Dque(){
    if(Front>Rear){
        cout<<"\n Queue Empty";
    }else{
        Front++;
    }
  
    //Reset queue if all element removed
    if (Front>Rear){
        Front=0;
        Rear=-1;
    }
}

int main(){
    Enq(52);
    Enq(63);
    Enq(555);
    Enq(62);
    Enq(53);
    Dque();
    display();
    return 0;
}

