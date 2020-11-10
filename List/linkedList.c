#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
  int intValue;
  struct LinkedList* head;
  // struct LinkedList* tail;
  struct LinkedList* nextNode;
  // struct LinkedList* prevNode;
}LinkedList;

LinkedList* createLinkedList() {
  LinkedList* list = (struct LinkedList*)malloc(sizeof(LinkedList));
  list->head = NULL;
  // list->tail = NULL;
  list->nextNode = NULL;
  // list->prevNode = NULL;
  return list;
}

//Encadear valor
void chainValue(LinkedList *list, int value) {
  list = (struct LinkedList*)malloc(sizeof(LinkedList));
  list->intValue = value;
  list->nextNode = NULL;
}

void printList(LinkedList* list) {
  LinkedList* printThisList  = list;
   printf("Head: %d\n", printThisList->intValue);
  while (printThisList->nextNode != NULL) {
    printf("%d ", printThisList->nextNode->intValue);
    printThisList = printThisList->nextNode;
  }
}

int main () {
  LinkedList* newList = createLinkedList();
  printList(newList);
  return 0;
}