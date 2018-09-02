//
//  main.cpp
//  面3-数组中重复数字
//
//  Created by Vic Wan on 2018/9/2.
//  Copyright © 2018 Vic Wan. All rights reserved.
//

#include <iostream>
using namespace std;

/* 语义规定：若存在重复的元素，则返回该值；若无重复元素，返回 -1
 注意点：
 1. 入参判空
 2. 若数值范围超过数组下标，则返回 -1
 */
int duplicate(int nums[], int length)
{
    if (length <= 0 || nullptr == nums) return -1;
    
    for (int i = 0; i < length; i++) {
        if ((nums[i] > length -1) || nums[i] < 0) {
            return -1;
        }
    }
    
    for (int i = 0; i < length; i++) {
        while (nums[i] != i) {
            if (nums[i] == nums[nums[i]]) {
                return nums[i];
            }
            //swap
            int tmp = nums[i];
            nums[i] = nums[tmp];
            nums[tmp] = tmp;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    
    int a[10] = {1,2,3,0,7,5,4,2,5,8};
    int b[10] = {1,2,3,0,7,5,4,21,5,8};
    int c[10] = {1,2,3,1,7,5,4,2,9,8};
    
    cout << "a: " << duplicate(a, 10) << endl;
    cout << "b: " << duplicate(b, 10) << endl;
    cout << "c: " << duplicate(c, 10) << endl;
    cout << "null: " << duplicate(nullptr, 10) << endl;
    cout << "no-length: " << duplicate(c, 0) << endl;
    
    return 0;
}
