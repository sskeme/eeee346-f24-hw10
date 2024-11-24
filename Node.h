#ifndef NODE_H__
#define NODE_H__

#include <memory>

using namespace std;

/*TODO: convert the Node class, including its member functions, for a template parameter*/

class Node {
  int data;
  shared_ptr<Node> left;
  shared_ptr<Node> right;

public:
  /** 
   * constructor
   * @param data: the data to be stored in the node
   */  
  Node(int data) : data(data) {}

  /** 
   * getData(): gets the data stored in the node
   * @return the data stored in the node
   */  
  int getData() { return data; }

  /** 
   * setData(): sets the data in the node
   * @param data: the data to be stored in the node
   */  
  void setData(int data) { this->data = data; }

  /** 
   * getLeft(): gets the left child node
   * @return the left child node
   */  
  shared_ptr<Node> getLeft() { return left; }

  /** 
   * getRight(): gets the right child node
   * @return the right child node
   */  
  shared_ptr<Node> getRight() { return right; }

  /** 
   * setLeft(): sets the left child node
   * @param node: the node to be set as the left child
   */  
  void setLeft(shared_ptr<Node> node) { left = node; }

  /**
   * setRight(): sets the right child node
   * @param node: the node to be set as the right child
   */
  void setRight(shared_ptr<Node> node) { right = node; }
};

#endif
