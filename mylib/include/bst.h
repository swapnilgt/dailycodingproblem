#include "binarytree.h"
//==================================
// include guard
#ifndef __BST_H_INCLUDED__
#define __BST_H_INCLUDED__

//==================================
// forward declared dependencies

// =================================
// include dependencies

// =================================
// the actual class

class BST : public BinaryTree {
private:
  void _insert(Node *parent, int k);
public:
  BST();
  ~BST();
	void insert(int k);
};

#endif
