//
// Created by EDZ on 2023/11/21.
//

#ifndef DATA_STRUCTURE_SINGLELINK_H
#define DATA_STRUCTURE_SINGLELINK_H

//定义节点
template<typename T>
struct Node {
    T data;
    Node<T> *next;
};

template<class T>
class SingleLink {
public:
    SingleLink();

    ~SingleLink();

    bool ListInsert(int i, const T &e); //在第i个位置插入指定元素e
    bool PushBack(const T &e); //在末尾追加元素
    bool ListDelete(int i); //删除第i个位置的元素
    bool GetElem(int i, T &e); //获得第i个位置的元素值
    int LocateElem(const T &e); //按元素值查找其在单链表中第一次出现的位置
    void DisplayList(); //输出单链表中的所有元素
    int ListLength(); //获取单链表的长度
    bool Empty(); //判断单链表是否为空
    void ReverseList(); //翻转单链表
private:
    Node<T> *m_head;//头指针（指向链表第一个节点的指针，如果链表有头结点则指向头结点）
    int m_length;//当前链表长度
};

#include "SingleLink.cpp.impl"

#endif //DATA_STRUCTURE_SINGLELINK_H
