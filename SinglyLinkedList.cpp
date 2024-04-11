//#include "SinglyLinkedList.h"
//#include "SingleNode.h"
//#include <iostream>
//using namespace std;
//template <typename T>
//
////void SinglyLinkedList<T>::InsertAtBeginning(T obj) {
////    unique_ptr<SingleNode<T>> newNode = make_unique<SingleNode<T>>(obj);
////    newNode->next = std::move(head);
////    head = std::move(newNode);
////    size++;
////}
//
////template <typename T>
//void SinglyLinkedList<T>::InsertAtEnd(T obj) {
//    unique_ptr<SingleNode<T>> newNode = make_unique<SingleNode<T>>(obj);
//    SingleNode <T> *current = head.get();
//    if (!current) {
//        head = std::move(newNode);
//        size++;
//        return;
//    }
//    while (current->next) {
//        current = current->next.get();
//    }
//    current->next = std::move(newNode);
//    size++;
//}
//
//template <typename T>
//int SinglyLinkedList<T>::operator[](int index) const {
//    checkIndex(index);
//    SingleNode<T> *current = head.get();
//    for (int i = 0; i < index; i++) {
//        current = current->next.get();
//    }
//    return current->data;
//}
//
//template <typename T>
//void SinglyLinkedList<T>::InsertAtIndex(int index, T obj) {
//    checkIndex(index);
//
//    if (index == 0) {
//        insertAtBeginning(obj);
//        return;
//    } else if (index == size) {
//        insertAtEnd(obj);
//        return;
//    } else {
//        unique_ptr<SingleNode<T>> newNode = make_unique<SingleNode<T>>(obj);
//        SingleNode<T> *current = head.get();
//        for (int i = 0; i < index - 1; i++) {
//            current = current->next.get();
//        }
//        newNode->next = std::move(current->next);
//        current->next = std::move(newNode);
//        size++;
//    }
//}
//
//template <typename T>
//void SinglyLinkedList<T>::removeFromBeginning() {
//    if (!head) {
//        throw std::out_of_range("List is empty!");
//    }
//    head = std::move(head->next);
//    --size;
//}
//template <typename T>
//void SinglyLinkedList<T>::removeFromEnd() {
//    if (!head) {
//        throw std::out_of_range("List is empty!");
//    }
//    if (size == 1) {
//        head.reset();
//        --size;
//        return;
//    }
//    SingleNode <T> *current = head.get();
//    while (current->next->next) {
//        current = current->next.get();
//    }
//    current->next.reset();
//    --size;
//}
//
//template <typename T>
//void SinglyLinkedList<T>::removeAtIndex(int index) {
//    checkIndex(index);
//    if (index == 0) {
//        removeFromBeginning();
//        return;
//    } else if (index == size - 1) {
//        removeFromEnd();
//        return;
//    }
//
//    SingleNode<T> *current = head.get();
//    for (int i = 0; i < index - 1; i++) {
//        current = current->next.get();
//    }
//    current->next = std::move(current->next->next);
//    --size;
//}
//
//template <typename T>
//bool SinglyLinkedList<T>::search(T obj) const {
//    SingleNode<T> *current = head.get();
//    while (current) {
//        if (current->data == obj) {
//            return true;
//        }
//        current = current->next.get();
//    }
//    return false;
//}
//template <typename T>
//int SinglyLinkedList<T>::getSize() const {
//    return size;
//}
//
//template <typename T>
//ostream &operator<<(ostream &os, SinglyLinkedList<T> &obj){
//    SingleNode<T> *current = obj.head.get();
//    while (current != nullptr) {
//        os << current->data << " ";
//        current = current->next.get();
//    }
//    os << endl;
//}
//
//template <typename T>
//bool SinglyLinkedList<T>::isEmpty() {
//    if(!head)
//        return true;
//    else
//        return true;
//}