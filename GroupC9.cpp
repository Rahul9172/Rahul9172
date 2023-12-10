#include<iostream>
using namespace std;

struct Node {
    char name[10];
    long prn;
    Node* next;
};

class List {
private:
    Node* head;
    int count;

public:
    List() : head(nullptr), count(0) {}

    void addMember();
    void removeMember();
    void displayCount();
    void displayList();
};

void List::addMember() {
    Node* member = new Node;
    cout << "Enter Member name: ";
    cin >> member->name;
    cout << "Enter PRN of Member: ";
    cin >> member->prn;

    member->next = head;
    head = member;
    count++;
}

void List::removeMember() {
    if (!head) {
        cout << "List is empty!" << endl;
        return;
    }

    long prnToRemove;
    cout << "Enter the PRN of the member to be removed: ";
    cin >> prnToRemove;

    if (head->prn == prnToRemove) {
        Node* temp = head;
        head = head->next;
        delete temp;
        count--;
        return;
    }

    Node* current = head;
    while (current->next && current->next->prn != prnToRemove) {
        current = current->next;
    }

    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
        count--;
    } else {
        cout << "Member not found!" << endl;
    }
}

void List::displayCount() {
    cout << "Member count: " << count << endl;
}

void List::displayList() {
    Node* current = head;
    while (current) {
        cout << "Name: " << current->name << ", PRN: " << current->prn << endl;
        current = current->next;
    }
}

int main() {
    List a;

    int choice;
    do {
        cout << "\nEnter Choice:\n1. Add Member\n2. Delete Member\n3. Display No of Members\n4. Display Members\n5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: a.addMember(); break;
            case 2: a.removeMember(); break;
            case 3: a.displayCount(); break;
            case 4: a.displayList(); break;
            case 5: break;
            default: cout << "Wrong choice\n";
        }

    } while (choice != 5);

return(0);
}