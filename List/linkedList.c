#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
  int intValue;
  struct LinkedList* nextNode;
}LinkedList;

LinkedList* createLinkedList() {
  LinkedList* list = (struct LinkedList*)malloc(sizeof(LinkedList));
  list->nextNode = NULL;
  list->intValue = NULL;
  return list;
}

//Encadear valor
void chainValue(LinkedList *head, int value) {
  LinkedList* actualNode = head;
  if (actualNode->intValue == NULL) {
    printf("head insert: %d\n", value);
    actualNode->intValue = value;
    actualNode->nextNode = NULL;
    return;
  }
  while (actualNode->nextNode != NULL) {
    actualNode = actualNode->nextNode;
  }
  actualNode->nextNode = (struct LinkedList*)malloc(sizeof(LinkedList));
  printf("body insert: %d\n", value);
  actualNode->nextNode->intValue = value;
  actualNode->nextNode->nextNode = NULL;
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
  LinkedList* head = createLinkedList();
  int i;
  scanf("%d", &i);
  while (i != -1) {
    chainValue(head, i);
    scanf("%d", &i);
  }
  printList(head);
  return 0;
}