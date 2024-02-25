#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lines_rows는 2차원 배열 lines의 행 길이, lines_cols는 2차원 배열 lines의 열 길이입니다.
int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    int answer = 0;
    int check[201] = {0,};
    
    for(int i=0; i<3; i++)
        for(int j=lines[i][0]+100; j<lines[i][1]+100; j++)
            check[j]++;
    
    for(int i=0; i<201; i++)
        if(check[i] > 1)
            answer++;
    
    for(int i=0; i<201; i++)
        printf("%d", check[i]);
            
    return answer;
}