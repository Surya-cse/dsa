#include <iostream>
#include <map>
using namespace std;

map<string,string> db;

string shorten(string url){
    string key = to_string(db.size());
    db[key]=url;
    return key;
}

int main(){
    cout<<shorten("google.com");
}
