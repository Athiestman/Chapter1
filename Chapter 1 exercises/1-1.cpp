#include <cstdio>
//declares function that returns the absolute value of a given number.

int absolute_value(int num)
{
    int result = 0;
    if (num >= 0)
        result = num;
    else
        result = num * -1;
    return result;
}
int main(){
    int my_num = -10;
    printf("The Absolute value of  %d is. %d.\n", my_num, absolute_value(my_num));
}