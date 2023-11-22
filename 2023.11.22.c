#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 4자리 무작위 숫자 생성 함수
int generate_random_password() {
    return rand() % 10000; // 0부터 9999까지의 난수 생성
}

int main() {
    // 난수 발생을 위해 시드(seed) 설정
    srand((unsigned int)time(NULL));

    char user_input[5];
    int original_password;
    original_password = 0731;

    while (true) {
        // 사용자에게 입력 받기
     
        if (atoi(user_input) >= 0 && atoi(user_input) <= 9999) {
            // 기존 패스워드와 비교
            printf("4자리 숫자 패스워드 입력하세요: ", &original_password);
            scanf("%4s", &original_password);
            int user_password = atoi(user_input); // 문자열을 정수로 변환
            if (user_password == original_password) {
                printf("정확한 패스워드. \n");
            }
            else {
                    printf("다시 시도하세요. \n");
            }
        }
        else {
            printf("잘못된 입력입니다. 4자리 숫자를 입력해주세요.\n");
        }

       // printf("기존 패스워드: %04d\n\n", original_password);
        if (user_input == 'Y')
        {
            // 무작위로 생성된 4자리 숫자 출력
            int random_password = generate_random_password();

            printf("새로운 패스워드를 원하시나요? (Y/N): ");
            scanf(" %c", &user_input);
            printf("새로운 패스워드: %04d\n", random_password);

        }
        else if(user_input == 'N')
        {
            printf("종료");
        }
        
        return 0;
    }
}

