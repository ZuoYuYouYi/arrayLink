//
// Created by zuoyu on 5/29/19.
//

#include <stdlib.h>
#include <stdio.h>
#include "linkedList.h"

List linked_Creat() {
    List list;
    Node *head = NULL;
    Node *tail = NULL;
    list.head = head;
    list.tail = tail;
    return list;
}

void linked_Add(List *pList, int number) {
    Node *head = pList->head;
    Node *tail = pList->tail;
    Node *node = (Node *) malloc(sizeof(Node));
    node->value = number;
    node->next = NULL;
    if (!head) {
        pList->head = node;
        return;
    }
    if (!tail) {
        pList->head->next = node;
        pList->tail = node;
        return;
    }
    pList->tail->next = node;
    pList->tail = node;
}

void linked_See(List *pList) {
    unsigned long count = 0;
    for (Node *p = pList->head; p; p = p->next) {
        count++;
        printf("the %luth's value is %d\n", count, p->value);
    }
}

void linked_Clear(List *pList) {
    Node *q = NULL;
    for (Node *p = pList->head; p; p = q) {
        q = p->next;
        free(p);
    }
    pList->head = NULL;
    pList->tail = NULL;
}

int linked_Remove(List *pList, Node *node) {
    int count = 0;
    Node *head = pList->head;
    Node *tail = pList->tail;
    if (head == node) {
        Node *p = head->next;
        free(head);
        count++;
        pList->head = p;
        return count;
    }
    if (tail == node) {
        for (Node *p = pList->head; p; p = p->next) {
            if (p->next == tail) {
                Node *last = p;
                free(tail);
                count++;
                pList->tail = last;
                return count;
            }
        }
    }
    for (Node *p = pList->head; p; p = p->next) {
        if (p->next == node) {
            Node *last = p;
            Node *next = node->next;
            free(node);
            count++;
            last->next = next;
            return count;
        }
    }
    return count;
}

