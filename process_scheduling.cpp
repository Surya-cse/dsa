#include <iostream>
using namespace std;

int main(){
    int processes[] = {3,2,1};
    int time=0;

    for(int p:processes){
        cout<<"Process runs at "<<time<<endl;
        time+=p;
    }
}
