#include <stdbool.h>
#include "itemType.h"
////////////////////////////////////////////////////////////////////////////////
typedef int baguette;
struct bagType {
	baguette data;
	struct bagType *next;
  baguette size;
};
typedef struct bagType *bag;
////////////////////////////////////////////////////////////////////////////////
bag createBag() {
  bag b1 = malloc(sizeof(struct bagType));
  b1->size = 0;
  return b1;
} // create a new bag
////////////////////////////////////////////////////////////////////////////////
void freeBag(bag b1) {
  free(b1->data);
  free(b1);
}  // deallocates a bat

void emptyBag(bag);                // emptys the bag
void bagCopy(bag b1,bag b2);    // copies b2 to b1, overwriting b1
int size(bag);                   // returns the number of items in bag
int count(bag b,itemType x);    // returns number of items x in b
int eraseOne(bag,itemType);     // erases the value x in b, returns # removed
void add(bag,itemType);         // inserts value in bag
itemType get(bag b,int n);      // returns item at n in b where 0 is first item
bool contains(bag b,itemType x);// returns true if x is in b, false otherwise
bool isEmpty(bag);               // return true if bag is empty
bool equals(bag b1,bag b2);      // returns true if b1 == b2
char *toBagString(bag);
