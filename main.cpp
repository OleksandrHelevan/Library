#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

void Shtrix(){
    cout<<"------------------------\n";
}

void SingleList (){
    SinglyLinkedList <int> A;
    Shtrix();
    if(A.isEmpty())
        cout<<"List is empty"<<endl;
    Shtrix();
    A.InsertAtBeginning(3);
    A.InsertAtBeginning(2);
    A.InsertAtBeginning(1);


    if(!A.isEmpty())
        cout<<"List isn`t empty"<<endl;
    cout<<A;
    Shtrix();
    A.InsertAtEnd(6);
    A.InsertAtEnd(5);
    A.InsertAtEnd(4);

    cout<<A;
    Shtrix();

    A.removeFromEnd();
    A.removeFromBeginning();
    cout<<A;
    Shtrix();

    A.removeAtIndex(1);
    A.InsertAtIndex(1,5);
    cout<<A;
    Shtrix();


    if (A.search(2))
        cout<<"List has 2"<<endl;
    else cout<<"List don`t have 2"<<endl;
    cout<<"Size of list: "<<A.getSize()<<endl;
    cout<<A[3]-A[2];

}
int main() {
//SingleList();
}
