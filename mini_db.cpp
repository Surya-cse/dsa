#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> db;
    db.push_back("Alice");

    for(auto x:db)
        cout<<x<<endl;
}
