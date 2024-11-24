# Introduction

In this homework assignment, you will be implementing a Binary Search Tree (BST). BST is known for efficient searching, insertion, and deletion operations. You can find in-depth knowledge about BST at https://www.geeksforgeeks.org/binary-search-tree-data-structure/. In addition to learning a new data structure, this homework assignment will templatize the C++ classes involved with BST.


# Binary Search Tree

BST is a node-based data structure, as shown in the image below. Left nodes are lesser values than their parent node and right nodes are greater.

![BST](https://github.com/user-attachments/assets/e2da099c-5eba-44ef-8904-663b40b2599f)

[image source: geeksforgeeks]

For reference, you will be implementing an iterative insertion operation. A recursive implementation tends to be easier to code but introduces heavy stack usage. You can use the pseudocode below to adapt it to the C++ class required in this homework assignment.

```
void insert(Node* root, int key) {
  Node* node = new Node(key);
  if (!root) { // empty tree
    root = node;
    return;
  }
  Node* prev = NULL;
  Node* temp = root;
  // go to the correct position for inserting the new node
  while (temp) {
    if(temp->val > key) {
      prev = temp;
      temp = temp->left;
    } else if(temp->val < key) {
      prev = temp;
      temp = temp->right;
    }
  }
  // insert the new node as a left child or a right child of the prev (parent) node
  if(prev->val > key) {
    prev->left = node;
  } else {
    prev->right = node;
  }
}
```

There are several ways to traverse a BST. In this homework assignment, the depth-first search - inorder traversal method is used. The relevant function called `traverse()` is already implemented, but you can get detailed information about this method here: https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/. The `traverse()` function uses the `stack` data structure provided by C++ Standard Template Library (STL). Check how it is used.


# Tasks

* Convert `Node.h` and `BinarySearchTree.h` to use a template parameter T instead of `int`.
  * Note that nodes are represented by objects of the `Node` class and shared pointers. In the original implementation, the `data` member of the `Node` class is of type `int`, which means that `shared_ptr<Node>` is a shared pointer pointing to a `Node` object that stores an `int`. If the `Node` class is modified to a class template, you will need to append `<T>` to `Node` when using shared pointers.
* Implement the `insert()` member function of the `BinarySearchTree` class template in `BinarySearchTree.h`. Recall that member function declarations and member function definitions of a class template must be contained in the same file, which is why they are located together in `BinarySearchTree.h`.
  

# Compile and Run

1. Type the following commands on Terminal.

```
g++ -o main *.cpp *.h
```
```
./main
```

2. Inputs

* Line 1: data type (int or char)
* Line 2: data count (or the number of nodes)
* Line 3: data to be inserted into the BST

Examples:

```
#inputs
int
3
3 2 1

#outputs
Traversal result: 1 2 3 
```

```
#inputs
char
3
Z X Y

#outputs
raversal result: X Y Z
```

```
#inputs
int
8
45 15 79 90 10 55 12 20

#outputs
Traversal result: 10 12 15 20 45 55 79 90
```

```
#inputs
char
8
C O M P U T E R

#outputs
Traversal result: C E M O P R T U
```


# Submit

Please upload your `BinarySearchTree.h` and `Node.h` files (two files) to `myCourses > Assignments > HW10`. Do not submit *.docx, *.pdf, *.txt, or *.zip files. 
