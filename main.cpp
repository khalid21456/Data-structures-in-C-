#include <iostream>
using namespace std;

class Node {

public :
    int a;
    Node *next;
    Node (int a) {
        this->a = a;
    }

    void afficherA() {
        cout<<a;
    }

    void setNext(Node *node) {
        next = node;
    }

};

int main()
{
    Node *node = new Node(5);

    node->afficherA();

    return 0;
}
