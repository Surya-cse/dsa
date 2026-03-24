#include <iostream>
using namespace std;

struct Node {
    Node* child[26] = {};
    bool end = false;
};

class Trie {
    Node* root = new Node();

public:
    void insert(string s){
        Node* node = root;
        for(char c:s){
            int i = c-'a';
            if(!node->child[i])
                node->child[i]=new Node();
            node=node->child[i];
        }
        node->end=true;
    }
};

int main(){
    Trie t;
    t.insert("hello");
    cout<<"Inserted";
}
