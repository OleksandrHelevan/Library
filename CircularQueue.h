
#ifndef LIBRARY_CIRCULARQUEUE_H
#define LIBRARY_CIRCULARQUEUE_H

#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;

template<typename T>
class CircularQueue {
private:
    DoubleLinkedList<T> list;
    size_t capacity;
public:
    CircularQueue() = default;

    CircularQueue(size_t capacity) : list(), capacity(capacity) {}

    bool isEmpty() const {
        if(list.getSize() == 0)
            return true;
        else return false;
    }

    bool isFull() const {
        return list.getSize() == capacity;
    }

    void enqueue(const T &obj) {
        list.insertAtBeginning(obj);
    }

    T dequeue() {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty!!!");
        }
        T obj = list[0];
        list.removeFromEnd();
        return obj;
    }

    T peek() const {
        if (isEmpty()) {
            throw std::out_of_range("Queue is empty!!!");
        }
        return list[0];
    }


    friend std::ostream &operator<<(std::ostream &os, const CircularQueue<T> &circularQueue) {
        os << circularQueue.list;
        return os;
    }
};
#endif //LIBRARY_CIRCULARQUEUE_H
