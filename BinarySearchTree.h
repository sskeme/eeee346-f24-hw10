#ifndef BINARYSEARCHTREE_H__
#define BINARYSEARCHTREE_H__

#include "Node.h"
#include <iostream>
#include <stack>

using namespace std;

/*TODO: convert the BinarySearchTree class, including its member functions, for a template parameter*/

// ----------------
// class definition
// ----------------
class BinarySearchTree {
  /** 
   * root of the BST 
   */  
  shared_ptr<Node> root; // Node-typed shared pointer (shared pointer pointing to a Node object)

public:
  /*  
   * constructor: sets the root to nullptr
   */  
  BinarySearchTree();

  /*  
   * insert(): inserts data into the BST (using an iterative approach)
   * @data - data to insert
   */  
  void insert(int data);

  /*  
   * traverse(): traverses the BST inorder and print out node data (using an iterative approach)
   */  
  void traverse();
};


// ---------------------------
// member function definitions
// ---------------------------
BinarySearchTree::BinarySearchTree() : root(nullptr) {}

void BinarySearchTree::insert(int data) {
  auto node = make_shared<Node>(data); // create a new node with the entered data

  /*TODO: write your code*/
}

void BinarySearchTree::traverse() {
  cout << "Traversal result: ";

  stack<shared_ptr<Node>> stack; // the stack data structure in STL is used

  auto curr = root;

  while ((curr != nullptr) || !stack.empty()) {
    while (curr != nullptr) {
      stack.push(curr); // push(): inserts a new element at the top of the stack
      curr = curr->getLeft();
    }

    curr = stack.top(); // top(): returns a reference to the top element in the stack
    stack.pop(); // pop(): removes the element on top of the stack

    cout << curr->getData() << " ";

    curr = curr->getRight();
  }
}

#endif
