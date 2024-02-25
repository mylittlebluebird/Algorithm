#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 1000);
    char mbti[8] = { 'R', 'T', 'C', 'F', 'J', 'M', 'A', 'N'};
    int mbti_num[8] = { 0, };

    for (int i = 0; i < choices_len; i++)
    {
        if(choices[i] == 1)
            for (int j = 0; j < 8; j++)
            {
                if (mbti[j] == survey[i][0])
                {
                    printf("%c ", survey[i][0]);
                    mbti_num[j] += 3;
                    break;
                }
            }
        else if (choices[i] == 2)
            for (int j = 0; j < 8; j++)
            {
                if (mbti[j] == survey[i][0])
                {
                    printf("%c ", survey[i][0]);
                    mbti_num[j] += 2;
                    break;
                }
            }
        else if (choices[i] == 3)
            for (int j = 0; j < 8; j++)
            {
                if (mbti[j] == survey[i][0])
                {
                    printf("%c ", survey[i][0]);
                    mbti_num[j] += 1;
                    break;
                }
            }
        else if (choices[i] == 5)
            for (int j = 0; j < 8; j++)
            {
                if (mbti[j] == survey[i][1])
                {
                    printf("%c ", survey[i][1]);
                    mbti_num[j] += 1;
                    break;
                }
            }
        else if (choices[i] == 6)
            for (int j = 0; j < 8; j++)
            {
                if (mbti[j] == survey[i][1])
                {
                    printf("%c ", survey[i][1]);
                    mbti_num[j] += 2;
                    break;
                }
            }
        else if (choices[i] == 7)
            for (int j = 0; j < 8; j++)
            {
                if (mbti[j] == survey[i][1])
                {
                    printf("%c ", survey[i][1]);
                    mbti_num[j] += 3;
                    break;
                }
            }
    }
    printf("\n");

    for (int i = 0; i < 8; i++)
        printf("%d ", mbti_num[i]);

    for (int i = 0; i < 4; i++)
    {
        if (mbti_num[i * 2] >= mbti_num[(i * 2) + 1])
            answer[i] = mbti[i * 2];
        else
            answer[i] = mbti[(i * 2) + 1];
    }
    answer[4] = '\0';

    return answer;
}