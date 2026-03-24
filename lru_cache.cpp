#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class LRU {
    int cap;
    list<int> dq;
    unordered_map<int, list<int>::iterator> mp;

public:
    LRU(int c) { cap = c; }

    void put(int x) {
        if(mp.find(x)!=mp.end()){
            dq.erase(mp[x]);
        }
        else if(dq.size()==cap){
            mp.erase(dq.back());
            dq.pop_back();
        }
        dq.push_front(x);
        mp[x]=dq.begin();
    }

    void show(){
        for(auto i:dq) cout<<i<<" ";
    }
};

int main(){
    LRU l(2);
    l.put(1);
    l.put(2);
    l.put(3);
    l.show();
}
