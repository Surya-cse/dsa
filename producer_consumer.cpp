#include <iostream>
#include <thread>
using namespace std;

void producer(){
    cout<<"Producing\n";
}

void consumer(){
    cout<<"Consuming\n";
}

int main(){
    thread t1(producer);
    thread t2(consumer);
    t1.join();
    t2.join();
}
