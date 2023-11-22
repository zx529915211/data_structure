#include "SeqList.h"
#include "SingleLink.h"
#include <iostream>

int main() {
    //顺序表start
//    SeqList<int> list(10);
//    list.ListInsert(1, 10);
//    list.ListInsert(2, 20);
//    list.PushBack(30);
//    list.PushBack(40);
//    list.PushBack(50);
//    list.PushBack(60);
//    list.PushBack(70);
//    list.PushBack(80);
//    list.PushBack(90);
//    list.PushBack(100);
//    list.PushBack(110);
//    list.PushBack(120);
//    list.DisplayList();
//    list.ListDelete(3);
//    list.DisplayList();
//    list.ListDeleteByStep(3, 2);
//    list.DisplayList();
//    int d = 0;
//    bool is_find = list.GetElem(3, d);
//    if (is_find) {
//        std::cout << d << std::endl;
//    }
//    std::cout << list.LocateElem(20) << std::endl;
//    list.ReverseList();
//    list.DisplayList();
    //顺序表end

    //单链表start
    SingleLink<int> list;
    list.ListInsert(1, 20);
    list.ListInsert(1, 10);
    list.ListInsert(3, 30);
    list.PushBack(40);
    list.PushBack(50);
//    list.DisplayList();
//    list.ListDelete(3);
    list.DisplayList();
//    int n = 0;
//    list.GetElem(3, n);
//    cout << n << endl;
//    cout << list.LocateElem(20) << endl;
    list.ReverseList();
    list.DisplayList();
    //单链表end
    return 0;
}
