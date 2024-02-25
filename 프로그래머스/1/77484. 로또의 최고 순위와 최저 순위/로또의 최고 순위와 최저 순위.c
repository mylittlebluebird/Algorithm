#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*1000);
    int winn = 0, wwinn = 0;

    for(int i=0; i<win_nums_len; i++)
        for (int j = 0; j < lottos_len; j++)
            if (win_nums[i] == lottos[j])
                winn++;

    for (int i = 0; i < lottos_len; i++)
        if (lottos[i] == 0)
            wwinn++;

    wwinn += winn;
    //printf("%d %d\n", winn, wwinn);
    

    answer[1] = 7 - winn;
    answer[0] = 7 - wwinn;

    if (answer[1] == 7)
        answer[1] -= 1;
    if (answer[0] == 7)
        answer[0] -= 1;

    return answer;
}