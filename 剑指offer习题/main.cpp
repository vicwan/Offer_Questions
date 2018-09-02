//
//  main.cpp
//  剑指offer习题
//
//  Created by Vic Wan on 2018/9/2.
//  Copyright © 2018 Vic Wan. All rights reserved.
//

#include <iostream>
#include <regex>

using namespace std;

typedef int U32 ;
U32 String2Dec( const char *pstr )
{
    char ch;
    U32 value;
    value = 0;
    //从字符串的第一个字符遍历到'\0'
    while( *pstr != '\0' )
    {
        //获取字符
        ch = *pstr++;
        //判断字符是否在0-9这个范围
        if( ch >= '0' && ch <= '9' )
        {
            //ch-'0'相当于将字符转换为整数
            value = value * 10 + ch - '0';
        }
    }
    //返回
    return value;
}

bool is_email_valid(const string& email)
{
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    
    match_results<string::const_iterator> result;

    bool valid = regex_match(email, result, pattern);
    //此处result参数可有可无，result是一个字符串数组，用来存储正则表达式里面括号的内容。
    return valid;
}

bool legalString(const char *str)
{
    const regex pattern("^\\s*[+-]?\\d+");
    
    match_results<std::string::const_iterator> result;
    string s;
    bool valid = regex_match(s, result, pattern);
    return valid;
}

/*字符串转整数
 注意点：
 1. 入参判空
 2. 负数
 3. 正负整数溢出
 4. 含有非数字如何处理
 */
int myAtoi(string str)
{
    int ret = 0;
    return ret;
}

bool isOverflow()
{
    return false;
}


int main(int argc, const char * argv[]) {
    int a = String2Dec("235235235552532525");
    cout << INT_MAX << endl;
    int b = INT_MAX * 10 / 10;
    cout << b << endl;
    return 0;
}
