cmake_minimum_required(VERSION 3.27)
project(Library)

set(CMAKE_CXX_STANDARD 17)

add_executable(Library main.cpp
        SingleNode.h
        SinglyLinkedList.h
        DoubleNode.h
        DoubleLinkedList.h
        CircularQueueList.h
        CircularQueueArray.h
        QueueList.h
        QueueArray.h)
