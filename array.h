//
// Created by zuoyu on 5/28/19.
//

#ifndef ARRAYDEMO_ARRAY_H
#define ARRAYDEMO_ARRAY_H

/**
 * 结构变量
 */
typedef struct {
    int *elements;
    int size;
} Array;

/**
 * 创建一个数组
 * @param init_Size - 数组大小
 * @return 数组
 */
Array array_Creat(int init_Size);

/**
 * 释放数组空间
 * @param array - 数组
 */
void array_Free(Array *array);

/**
 * 查询数组大小
 * @param array - 数组
 * @return 数组的大小
 */
int array_Size(const Array *array);

/**
 * 对指定的角标设置值
 * @param array - 数组
 * @param index - 角标
 * @param value - 值
 */
void array_Set(Array *array, int index, int value);

/**
 * 查询指定的数组元素
 * @param array - 数组
 * @param index - 角标
 * @return 元素的指针
 */
int array_Get(const Array *array, int index);

/**
 * 追加数组空间
 * @param array - 数组
 * @param more_Size - 要追加的空间大小
 */
void array_Inflate(Array *array, int more_Size);

#endif //ARRAYDEMO_ARRAY_H
