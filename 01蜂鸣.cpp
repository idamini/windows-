// 01蜂鸣.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//2021/12/5
//idamini的浑浑噩噩的一天


#include <windows.h>

void Alert(int i);


int main()
{
    Alert(2);
    return 0;
}

void Alert(int i)
{
    while (i > 0)
    {
        Beep(1000, 3000);
        //Beep(x,y)   x代表声音的调子，y代表发声的长短
        i--;
    }

}

/*
报错“无法打开源文件"stdafx.h"”

解决：删除#include"stdafx.h"
*/
