#include "BinarySearchTree.h"

/*
 * function template for testing
 * @count: the number of nodes
 */
template <typename T>  
void test(int count) {
  T data; // T will be int or char
  BinarySearchTree<T> tree; // create an object of the BinarySearchTree class
  
  // insert data into the BST
  for (int i=0; i<count; ++i) {
    cin >> data;
    tree.insert(data); // call the insert() member function taking data for each iteration
  }

  // traverse the BST (inorder traversal)
  tree.traverse(); // call the traverse() member function
}

/*
 * main function
 */
int main() {
  string dataType; // to store the entered data type of nodes
  int count; // to store the number of nodes

  cin >> dataType >> count;

  // call the test() function template
  if (dataType == "int") {
    test<int>(count); // T is set to int
  } else if (dataType == "char") {
    test<char>(count); // T is set to char
  }

  return 0;
}
