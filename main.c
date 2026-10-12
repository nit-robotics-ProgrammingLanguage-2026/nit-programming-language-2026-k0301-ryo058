#include <stdio.h>

int main() 
{
    int i;
    scanf("値段を入れてください: %d",&i);
    printf("税込み価格は%fです", i*1.1); 
    return 0;
}
