//
//  main.cpp
//  COMSC-210 | Lab 18: Movie Reviews | Guo An Wang
//  IDE: Xcode
//  Created by Guo An Wang on 10/4/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct Movie{
    double rating;
    string comment;
    Movie *next;
    
};

const int SIZE = 3;
const int WIDTH = 5;

void output(Movie *);
void addFront(Movie *&, int, string);
void addBack(Movie *&, int, string);
void deleteAll(Movie *&);

int main(int argc, const char * argv[]) {
    Movie *head = nullptr;
    int user;
    cout << "Which linked list method should we use?" << endl;
    cout << setw(WIDTH) << "[1] New nodes are added at the head of the linked list" << endl;
    cout << setw(WIDTH) << "[2] New nodes are added at the tail of the linked list" << endl;
    cout << setw(WIDTH) << "Choice: ";
    cin >> user;
    cin.ignore();
    for (int i = 0; i < SIZE; i++) {
        double rating;
        string comment;
        char cont;
        cout << "Enter review rating (0.0 - 5.0): ";
        cin >> rating;
        if (rating > 5.0) {
            return 1;
        }
        cin.ignore();
        cout << "Enter review comment: ";
        getline(cin,comment);
        if (user==1) {
            //addFront(head,rating,comment);
        } else {
            //addBack(head,rating,comment);
        }
        cout << "Enter another review (Y/N): ";
        cin >> cont;
        cin.ignore();
        if (cont == 'N' || cont == 'n') {
            break;
        }
    }
    //output(head);
    //deleteAll(head);
    return 0;
}

void output(Movie *){
    
}
void addFront(Movie *&, int, string){
    
}
void addBack(Movie *&, int, string){
    
}
void deleteAll(Movie *&head){
    Movie *current = head;
    while (current) {
        head = current->next;
        delete current;
        current = head;
    }
    head = nullptr;
}
