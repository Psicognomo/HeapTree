#include "iostream"
#include "../pkg/minHeapTree.h"
#include "../pkg/maxHeapTree.h"

#include "TRandom3.h"

int main() {

  TRandom3 rdm(0);

  maxHeapTree< int > tree;
  for ( int i(0);i<20;i++ )
    tree.add( rdm.Integer(20) );
  tree.print();

  for ( int i(0);i<10;i++ ) {
    std::cout<<"Removing : "<<tree.pop()<<std::endl;
    tree.print();
  }

}
