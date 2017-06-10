#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, startNum, currNum, prevNum = 0;

    while(count < 1){
        printf("How long a sequence would you like to calculate? \n");
        scanf(" %d", &count);
    }

    printf("At what number should the sequence start? \n");
    scanf(" %d", &startNum);

    printf("Starting Fibonacci Sequence: \n");

    currNum = startNum;

    for(int i = 0; i < count; i++){
        if(currNum == 0){
            printf("0");
            currNum ++;
            i ++;
        }
        int result = currNum + prevNum;
        printf(" %d", result);
        prevNum = currNum;
        currNum = result;
    }
    return 0;
}
