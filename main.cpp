#include <iostream>
using namespace std;

class Node {

public :
    int a;
    Node *next;
    Node (int a) {
        this->a = a;
        next = NULL;
    }

    void afficherA() {
        cout<<a;
    }

    void setNext(Node *node) {
        next = node;
    }

};

Node* createNode(int val) {
    Node *node = new Node(val);
    return node;
}

Node* findLast(Node *head) {
    Node *current = head;
    while(current->next != NULL) {
        current = current->next;
    }
    return current;
}

void afficherTous(Node *head) {
    Node *current = head;
    while(current != NULL) {
        cout<<current->a<<"    ";
        current = current->next;
    }
}

void ajouter(Node **head, int val) {
    Node *node = createNode(val);
    if(*head == NULL) {
        *head = node;
    }else {
        findLast(*head)->next = node;
    }
}

void ajouterDebut(Node **head, int val) {
    Node *node = createNode(-1);
    if(*head == NULL) {
        *head = node;
    }else {
        node->next = *head;
        *head = node;
    }
}


int main()
{
    Node *node = new Node(0);

    ajouter(&node,1);
    ajouter(&node,15);
    ajouterDebut(&node,-1);
    afficherTous(node);

    return 0;
}
