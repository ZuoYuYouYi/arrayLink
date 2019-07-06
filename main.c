#include <stdio.h>
#include "array.h"
#include "linkedList.h"

int main(int argc, char const *argv[]) {
//    Array array = array_Creat(10);
//    array_Set(&array, 2, 26);
////    int value = array_Get(&array, 2);
////    printf("this is value = %d\n", value);
//    int size = array_Size(&array);
//    printf("this is size = %u\n", size);
////    array_Inflate(&array, 10);
////    int newValue = array_Get(&array, 2);
////    printf("this is newValue = %d\n", newValue);
//    array_Set(&array, 20, 12);
//    int newSize = array_Size(&array);
//    printf("this is newSize = %u\n", newSize);
//
//    printf("this is value = %d\n", array_Get(&array, 20));
    List list = linked_Creat();
//    Node *head = list.head;
//    printf("this is head value = %d\n", head->value);
//    printf("this is head next p = %p\n", head->next);
//    Node *tail = list.tail;
    linked_Add(&list, 0);
    linked_Add(&list, 10);
    linked_Add(&list, 20);
    linked_Add(&list, 30);
    linked_Add(&list, 40);
//    linked_See(&list);
//    linked_Remove(&list, list.head);
    linked_Clear(&list);
    linked_See(&list);
    return 0;
}