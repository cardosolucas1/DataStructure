#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
  int intValue;
  struct LinkedList *head;
  struct LinkedList *tail;
  struct LinkedList *nextNode;
  struct LinkedList *prevNode;
}LinkedList;

LinkedList createLinkedList() {
  LinkedList *list = (struct LinkedList *)malloc(sizeof(LinkedList));
  list->head = NULL;
  list->tail = NULL;
  list->nextNode = NULL;
  list->prevNode = NULL;
  return *list;
}


//Encadear valor
// void chainValue(LinkedList *list, int value) {
//   if (list->head->intValue == NULL) {
//     list->head->intValue = value;
//   }
//   if (list->nextNode->intValue == NULL) {
//     list->nextNode->intValue == value;
//   } else {
//     chainValue(list, value);
//   }
// }

void printList(LinkedList *list) {
  if (list->head == NULL) {
    printf("%s", "Empty List\n");
    return;
  } else {
    printf("%s", "Lista deve ser impressa\n");
  }
  printf("%d ", list->intValue);
  if (list->nextNode != NULL) {
    printList(list->nextNode);
  }
}

int main () {
  LinkedList newList = createLinkedList();
  printList(&newList);
  // printf("%s", "Hello World\n");
  return 0;
}