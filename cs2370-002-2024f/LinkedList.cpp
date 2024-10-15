#include <iostream>
#include "LinkedListNode.h"
using namespace std;

class LinkedList {
public:
    LinkedList() : head(nullptr) {}
    LinkedList(const LinkedList &obj);
    ~LinkedList();
    LinkedListNode* GetHead() {return head;}
    LinkedListNode* GetTail();
    LinkedList& operator=(const LinkedList &obj);
    void Prepend(int data);
    void Print() const;
private:
    LinkedListNode *head;
};

LinkedList::LinkedList(const LinkedList &obj){
    if (obj.head == nullptr) {
        this->head = nullptr;
    } else {
        head = new LinkedListNode(obj.head->data);
        
        LinkedListNode *currThis = head;
        LinkedListNode *currObj = obj.head;
        
        while(currObj->next != nullptr) {
            currThis->next = new LinkedListNode(currObj->next->data);
            currObj = currObj->next;
            currThis = currThis->next;
        }
    }
}

LinkedList::~LinkedList() {
    LinkedListNode *curr = head;
    while(curr != nullptr) {
        head = curr->next;
        delete curr;
        curr = head;
    }
}

LinkedListNode* LinkedList::GetTail() {
    if (head == nullptr) {
        return head;
    } else {
        LinkedListNode *curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        return curr;
    }
}

LinkedList& LinkedList::operator=(const LinkedList &obj) {
    if (this != &obj) {
        // delete old list
        if (head != nullptr) {
            LinkedListNode *curr = head;
            LinkedListNode *next;
            while(curr != nullptr) {
                next = curr->next;
                delete curr;
                curr = next;
            }
        }
        
        // copy list from the obj
        if (obj.head == nullptr) {
            this->head = nullptr;
        } else {
            head = new LinkedListNode(obj.head->data);
            LinkedListNode *currThis = head;
            LinkedListNode *currObj = obj.head;
            
            while(currObj->next != nullptr) {
                currThis->next = new LinkedListNode(currObj->next->data);
                currObj = currObj->next;
                currThis = currThis->next;
            }
        }
        
    }
    return *this;
}

void LinkedList::Prepend(int data) {
    LinkedListNode *node = new LinkedListNode(data);
    //(*node).next = head;
    node->next = head;
    head = node;
}

void LinkedList::Print() const {
    LinkedListNode *curr = head;
    if (curr == nullptr) {
        cout << "empty list" << endl;
    } else {
        for (; curr != nullptr;  curr = curr->next) {
            cout << curr->data << " ";
        }
        cout << endl;
    }
}

/*int main() {
    LinkedList l1;
    l1.Prepend(1); l1.Prepend(2);
    l1.Prepend(3); l1.Prepend(4);
    
    LinkedList l2;
    l2.Prepend(100);
    
    LinkedListNode *l1Head = l1.GetHead();
    LinkedListNode *l1Tail = l1.GetTail();
    
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;
    
    l2 = l1;
    
    l1Head->SetData(4000);
    l1Tail->SetData(1000);
    
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;*/
    
    
    /* copy constructor
     
     
    LinkedList l1;
    l1.Prepend(1); l1.Prepend(2);
    l1.Prepend(3); l1.Prepend(4);
    LinkedList l2(l1);
    
    LinkedListNode *l1Head = l1.GetHead();
    LinkedListNode *l1Tail = l1.GetTail();
    
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;
    l1Head->SetData(4000);
    l1Tail->SetData(1000);
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;*/
    
    
    
    /* copy constructor in LinkedListNode
    LinkedListNode n1(1000);
    LinkedListNode n2(n1);
    
    cout << "n1: " << n1.GetData() << endl;
    cout << "n2: " << n2.GetData() << endl;
    
    n1.SetData(5);
    
    cout << "n1: " << n1.GetData() << endl;
    cout << "n2: " << n2.GetData() << endl;
    
    */
    
    
    /* create a linkedlist
     
    LinkedList list;
    
    list.Prepend(1);
    list.Prepend(2);
    list.Prepend(3);
    list.Prepend(4);
    
    list.Print(); // 4->3->2->1*/
    
    
/*    return 0;
}*/
