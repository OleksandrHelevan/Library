#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main() {
    SinglyLinkedList <int> A;
    if(A.isEmpty())
        cout<<"Hello";
    A.InsertAtBeginning(2);
    if(A.isEmpty())
        cout<<"Bye"<<endl;
    cout<<A;
}
