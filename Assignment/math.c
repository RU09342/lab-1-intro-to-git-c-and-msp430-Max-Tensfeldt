#include <math.h>
#include <stdio.h>
int math(int num1, int num2, char operator)
{
    int answer;

    switch(operator)
    {
    case '+':
        answer = num1+num2;
        break;
    case'-':
        answer = num1-num2;
        break;
    case'*':
        answer = num1*num2;
        break;
    case'/':
        answer = num1/num2;
        break;
    case'%':
        answer = num1%num2;
        break;
    default:
        printf("Wrong inputs!");
        return 0;

    }

    return answer;
}

