//
//  main.cpp
//  面10-斐波那契数列
//
//  Created by Vic Wan on 2018/9/4.
//  Copyright © 2018 Vic Wan. All rights reserved.
//

#include <iostream>

long long Fibonacci (unsigned int n)
{
    int result[2] = {0, 1};
    if (n < 2)
        return result[n];
    
    int idx = 2;
    long long prev = 1;
    long long prePrev = 0;
    long long ret = 0;
    
    while (idx <= n)
    {
        ret = prev + prePrev;
        
        prePrev = prev;
        prev = ret;
        
        idx ++;
    }
    
    return ret;
}

int main(int argc, const char * argv[]) {
    
    long long num = Fibonacci(0);
    
    printf("%lld\n", num);
    
    return 0;
}
