//
// Created by zuoyu on 5/29/19.
//

#ifndef ARRAYDEMO_LINKEDLIST_H
#define ARRAYDEMO_LINKEDLIST_H

typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list{
    Node *head;
    Node *tail;
} List;

/**
 * 创建一个链表
 * @return
 */
List linked_Creat();

/**
 * 对链表进行添加元素
 * @param pList - 链表
 * @param number - 元素
 */
void linked_Add(List *pList, int number);

/**
 * 对链表进行遍历
 * @param pList - 链表
 */
void linked_See(List *pList);

/**
 * 删除一个链表
 * @param pList
 */
void linked_Clear(List *pList);

/**
 * 对链表内指定元素进行删除
 * @param pList
 * @param node
 * @return 删除的个数
 */
int linked_Remove(List *pList, Node *node);

#endif //ARRAYDEMO_LINKEDLIST_H
