#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int y;
    while(scanf("%d", &y) != EOF)
    {
        while(y++)
        {
            int tmp = y;
            int a = tmp % 10;
            tmp /= 10;
            int b = tmp % 10;
            tmp /= 10;
            int c = tmp % 10;
            tmp /= 10;
            int d = tmp % 10;
            if(a != b && a != c && a != d && b != c && b != d && c != d)
            {
                printf("%d\n", y);
                break;
            }
        }
    } 
    return 0;
}