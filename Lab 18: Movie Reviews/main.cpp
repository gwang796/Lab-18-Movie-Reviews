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

void addFront(Movie *&, int, string);
void addBack(Movie *&, int, string);

int main(int argc, const char * argv[]) {
    Movie *head = nullptr;
    
    int user;
    cout << "Which linked list method should we use?" << endl;
    cout << setw(WIDTH) << "[1] New nodes are added at the head of the linked list" << endl;
    cout << setw(WIDTH) << "[2] New nodes are added at the tail of the linked list" << endl;
    cout << setw(WIDTH) << "Choice: ";
    cin >> user;
    cin.ignore();
    if (user==1) {
        //addFront()
    }
}
