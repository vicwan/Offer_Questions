//
//  main.cpp
//  面9-用两个栈实现队列
//
//  Created by 万伟琦 on 2018/9/3.
//  Copyright © 2018年 Vic Wan. All rights reserved.
//

#include <iostream>
#include <stack>

template <typename T>
class CQueue {
    
public:
    CQueue(void);
    ~CQueue(void);
    
    void appendTail(const T& node);
    T deleteHead();
    
private:
    std::stack<T> stack1;
    std::stack<T> stack2;
};

///////////////////////////
template <typename T> CQueue<T>::CQueue(void)
{
}

template <typename T> CQueue<T>::~CQueue(void)
{
}

template<typename T> void CQueue<T>::appendTail(const T& element)
{
    stack1.push(element);
}

template<typename T> T CQueue<T>::deleteHead()
{
    if(stack2.size()<= 0)
    {
        while(stack1.size()>0)
        {
            T& data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }
    
    if(stack2.size() == 0)
        throw;
    
    T head = stack2.top();
    stack2.pop();
    
    return head;
}




// 测试代码

void Test(char actual, char expected)
{
    if(actual == expected)
        printf("Test passed.\n");
    else
        printf("Test failed.\n");
}

int main(int argc, char* argv[])
{
    CQueue<char> queue;
    
    queue.appendTail('a');
    queue.appendTail('b');
    queue.appendTail('c');
    
    char head = queue.deleteHead();
    Test(head, 'a');
    
    head = queue.deleteHead();
    Test(head, 'b');
    
    queue.appendTail('d');
    head = queue.deleteHead();
    Test(head, 'c');
    
    queue.appendTail('e');
    head = queue.deleteHead();
    Test(head, 'd');
    
    head = queue.deleteHead();
    Test(head, 'e');
    
    return 0;
}
