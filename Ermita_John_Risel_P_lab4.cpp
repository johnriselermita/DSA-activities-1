#include <iostream>

using namespace std;

string karaoke_queue[100];

int front = 0;
int rear = -1;
int max_queue = 10;

bool isfull(){
    if(rear == max_queue -1){
        return true;
    }
    
    return false;
}

bool isempty(){
    if(rear == -1){
        return true;
    }
    
    return false;
}

string enqueue(string song){
    if(isfull()){
        return "the queue is full. try again later";
    }
    
    karaoke_queue[++rear] = song;
    return "a new song has been added in the queue";
}

string dequeue(){
    if(isempty()){
    return "there is no song in the queue. try again first";
    }
    
    string song = karaoke_queue[front];
    
    for(int i = 1; i <= rear; i++){
        karaoke_queue[i-1] = karaoke_queue[i];
    }
    
    rear--;
    return song + " is deleted from the queue";
}

int main(){

    cout << enqueue("umaasa") << endl; 
    cout << enqueue("romcom") << endl; 
    cout << dequeue() << endl; 
    cout << enqueue("miss miss") << endl; 
    cout << dequeue() << endl; 
        
        return 0; 
    }