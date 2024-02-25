#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    float answer[100];
    int n[6] = {0,};
    int cnt =0;

    for(int i=0; i<3; i++)
        for(int j=i+1; j<4; j++)
        {
            float x, y;
            x = dots[i][0] - dots[j][0];
            y = dots[i][1] - dots[j][1];
            answer[cnt++] = x/y;
        }
    
    for(int i=0; i<6; i++)
        printf("%0.3f \n", answer[i]);
    
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
            if(answer[i] == answer[j])
                n[i] ++;
    
    for(int i=0; i<6; i++)
    {
        n[i] --;
        printf("%d ", n[i]);
    }
    
    for(int i=0; i<6; i++)
    {
        if(n[i] == 3)
        {
            return 0;
        }
        else if(n[i] != 2 && n[i] != 0)
        {
            return 1;
        }
        
    }
    
    return 0;
}