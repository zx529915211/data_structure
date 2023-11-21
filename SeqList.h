//
// 顺序表
// Created by EDZ on 2023/11/20.
//

#ifndef DATA_STRUCTURE_SEQLIST_H
#define DATA_STRUCTURE_SEQLIST_H

#include <iostream>

using namespace std;

//有两种方式实现

//1.顺序表，一维数组静态分配内存，容量不可更改
//typedef struct {
//    int *m_data,
//    int m_length,
//} SeqList;

#define InitSize 10 //动态数组初始尺寸
#define IncSize 5   //每次扩容增加的容量

//2.顺序表，一维数组动态分配内存的方式，可以动态扩容
template<typename T>
class SeqList {
public:
    SeqList(int length = InitSize);

    ~SeqList();

    bool ListInsert(int i, const T &e); //在第i个位置插入指定元素e
    bool PushBack(const T &e); //在第末尾追加元素
    bool ListDelete(int i); //删除第i个位置的元素
    bool ListDeleteAll(const T &e); //删除指定的所有元素
    bool ListDeleteByStep(int i, int step); //删除第i个位置开始step个元素
    bool GetElem(int i, T &e); //获得第i个位置的元素值
    int LocateElem(const T &e); //按元素值查找其在顺序表中第一次出现的位置
    void DisplayList(); //输出顺序表中的所有元素
    int ListLength(); //获取顺序表的长度
    void ReverseList(); //翻转顺序表
private:
    void IncreaseSize(); //当顺序表存满数据后可以调用此函数为顺序表扩容
    int *m_data;
    int m_length; //顺序表当前实际长度
    int m_maxsize; //顺序表动态数组最大容量
};

//模版类的声明和实现分文件，修改后缀名是为了防止符号重复定义，这样就不会编译模版的实现代码
#include "SeqList.cpp.impl"

#endif //DATA_STRUCTURE_SEQLIST_H
