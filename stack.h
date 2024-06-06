//#pragma once
//#include<iostream>  // Required for input-output operations
//#include<string>    // Required for using the string class
//#include<math.h>    // Required for mathematical functions
//#include<conio.h>   // Required for console input/output (specific to some compilers)
//using namespace std;
//
//// Structure to hold a string and an integer array pointer
//struct variable {
//    string str = "";
//    int* arr = nullptr;
//};
//
//// Node class representing each element in a stack
//class Node {
//public:
//    char data;     // Data stored in the node
//    Node* next;    // Pointer to the next node
//
//    // Constructor to initialize the node with data and set next to nullptr
//    Node(char n) {
//        data = n;
//        next = nullptr;
//    }
//};
//
//// Stack class implemented using linked list of Node objects
//class Stack {
//public:
//    Node* top;     // Pointer to the top element in the stack
//
//    // Constructor to initialize the stack with top as NULL
//    Stack() {
//        top = NULL;
//    }
//
//    // Destructor to clear all elements in the stack
//    ~Stack() {
//        makenull();
//    }
//
//    // Push a new element onto the stack
//    void push(char n) {
//        Node* newnode = new Node(n);
//        newnode->next = top;
//        top = newnode;
//    }
//
//    // Pop the top element from the stack
//    char pop() {
//        if (isempty()) {
//            cout << endl << "STACK UNDERFLOW 1" << endl;
//            return '0';
//        }
//        else {
//            Node* current = top;
//            char v = top->data;
//            top = top->next;
//            delete current;
//            return v;
//        }
//    }
//
//    // Check if the stack is empty
//    bool isempty() {
//        return (top == NULL);
//    }
//
//    // Clear all elements from the stack
//    void makenull() {
//        while (!isempty()) {
//            pop();
//        }
//    }
//
//    // Get the top element of the stack without removing it
//    char getTop() {
//        if (!isempty()) {
//            return top->data;
//        }
//        return '\0';
//    }
//};
//
//// Structure representing a node in a string stack
//struct StringNode {
//    string str = "";           // Data stored in the node
//    StringNode* next = nullptr; // Pointer to the next node
//};
//
//// StringStack class implemented using linked list of StringNode objects
//class StringStack {
//private:
//    StringNode* top; // Pointer to the top element in the stack
//public:
//    // Constructor to initialize the string stack with top as nullptr
//    StringStack() {
//        top = nullptr;
//    }
//
//    // Check if the string stack is empty
//    bool isEmpty() {
//        if (top == nullptr) {
//            return true;
//        }
//        return false;
//    }
//
//    // Push a new string onto the stack
//    void Push(string str) {
//        StringNode* newNode = new StringNode;
//        newNode->str = str;
//        newNode->next = top;
//        top = newNode;
//    }
//
//    // Pop the top string from the stack
//    string Pop() {
//        string str = top->str;
//        StringNode* temp = top;
//        top = top->next;
//        delete temp;
//        return str;
//    }
//};
