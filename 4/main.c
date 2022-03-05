//4-1
//#include <stdio.h>
//
//int main() {
//    int temp;
//    printf("현재 온도는 : ");
//    scanf("%d", &temp);
//
//    if (temp < 0)
//        printf("오늘은 영하이며 ");
//
//    printf("현재 온도는 %d도입니다.\n", temp);
//
//    return 0;
//}

//4-2
//#include <stdio.h>
//int main() {
//    int num;
//
//    printf("정수를 입력하세요.");
//    scanf("%d", &num);
//
//    printf("입력한 수 %d는 ", num);
//
//    if (num % 2 == 0)
//        printf("짝수입니다.\n");
//    else
//        printf("홀수입니다.\n");
//
//    return 0;
//}

//4-3
//#include<stdio.h>
//
//int main() {
//    int kor, eng, math;
//    double avg;
//
//    printf("국어 영어 수학 점수를 입력하시오");
//    scanf("%d %d %d", &kor, &eng, &math);
//
//    avg = (double)(kor + eng + math) / 3;
//
//    printf("국어 \t영어 \t수학 \t평균 \t결과\n");
//    printf("%3d \t%3d \t%3d \t%6.2lf ", kor, eng, math, avg);
//    if (avg >= 70)
//        printf("\t평가통과\n");
//    else
//        printf("\t재교육필요\n");
//
//    return 0;
//}

//4-4
//#include<stdio.h>
//
//int main() {
//    int score;
//    char grade;
//
//    printf("점수를 입력하시오 : ");
//    scanf("%d", &score);
//
//    if (score >= 90) grade = 'A';
//    else if (score >= 80) grade = 'B';
//    else if (score >= 70) grade = 'C';
//    else if (score >= 60) grade = 'D';
//    else grade = 'F';
//
//    printf("학점 : %c\n", grade);
//    return 0;
//}

//4-5
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int x, y, result;
//    char op;
//    printf("수식을 입력하시오.\n");
//    printf("연산자의 종류 : + - * / %% & | ^\n");
//
//    scanf("%d %c %d", &x, &op, &y);
//
//    if (op == '+') {
//        result = x + y;
//    } else if (op == '-')
//        result = x - y;
//    else if (op == '*')
//        result = x * y;
//    else if (op == '/')
//        result = x / y;
//    else if (op == '&')
//        result = x & y;
//    else if (op == '|')
//        result = x | y;
//    else if (op == '^')
//        result = x ^ y;
//    else {
//        printf("잘못된 연산자입니다\n");
//        exit(0);
//    }
//
//    printf("\n결과>>%d %c %d = %d\n", x, op, y, result);
//    return 0;
//
//}

//4-6
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int x, y, result;
//    char op;
//    printf("수식을 입력하시오\n");
//    scanf("%d %c %d", &x, &op, &y);
//
//    switch (op) {
//        case '+': result = x + y; break;
//        case '-': result = x - y; break;
//        case '*': result = x * y; break;
//        case '/': result = x / y; break;
//        case '%': result = x % y; break;
//        case '|': result = x | y; break;
//        case '^': result = x ^ y; break;
//        default: printf("잘못된 연산자입니다.\n");exit(0);
//    }
//
//    printf("\n결과 >> %d %c %d = %d\n", x, op, y, result);
//    return 0;
//}

//4-9
//#include <stdio.h>
//
//int main() {
//    int n, i, sum;
//    for (n = 1; n <= 5; n++) {
//        for (sum = 0, i = 1; i <= n; i++) {
//            sum += i;
//        }
//        printf("1~%d까지의 합은 %d이다.\n", n, sum);
//    }
//}
//4-10
//#include <stdio.h>
//
//int main() {
//    int i, n, mul;
//    printf("1부터 n까지의 곱을 구한다. 정수n은?");
//    scanf("%d", &n);
//
//    mul = 1;
//    i = 1;
//
//    while (i <= n) {
//        mul *= i;
//        i++;
//    }
//    printf("1부터 %d까지의 곱은 %d이다.\n", n, mul);
//
//    return 0;
//}
//4-11
//#include <stdio.h>
//
//int main() {
//    int i, n, sum, multi;
//    printf("정수 n : ");
//    scanf("%d", &n);
//
//    i = 1; sum = 0; multi = 1;
//    do {
//        sum += i;
//        multi *= i;
//        i++;
//    } while (i <= n);
//
//    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
//    printf("1부터 %d까지의 곱은 %d입니다.\n", n, multi);
//
//    return 0;
//
//}
//4-12
//#include <stdio.h>
//
//int main() {
//    int i, n, sum;
//
//    while (1) {
//        printf("정수 n을 입력(종료: -1)) : ");
//        scanf("%d", &n);
//
//        if (n == -1) break;
//
//        sum = 0;
//        for (i = 1; i <= n; i++) sum += i;
//
//        printf("정수 1에서 %d까지의 합은 %d입니다.\n\n", n, sum);
//    }
//    printf("프로그램을 끝냅니다\n");
//
//    return 0;
//}

//4-13
//#include <stdio.h>
//
//int main() {
//    int i, n, sum = 0;
//
//    printf("정수 n을 입력 : ");
//    scanf("%d", &n);
//    i = 0;
//
//    while (i <= n) {
//        i++;
//        if (i % 2 == 1) continue;
//        sum += i;
//    }
//
//    printf("1 ~ %d까지의 짝수들의 합: %d.\n", n, sum);
//
//    return 0;
//}

//4-14
//#include <stdio.h>
//
//int main() {
//    int i, n, cnt, sum;
//    sum = 0;
//    cnt = 1;
//
//    for (i = 1; cnt <= 5; i++) {
//        printf("\n양의 정수 n을 입력하세요");
//
//        scanf("%d", &n);
//
//        if (n <= 0) continue;
//        cnt++;
//
//        printf("지금까지의 합 %2d + %2d = ", sum, n);
//        sum += n;
//        printf("%2d \n", sum);
//    }
//
//    return 0;
//}

//4-15
//#include <stdio.h>
//
//int main() {
//    int i, sum = 0;
//
//    for (i = 1; i <= 100; i++) {
//        sum += i;
//        if (sum > 2000) goto oversum;
//    }
//
//oversum:
//    printf("1부터 %d까지의 합이 2000을 초과해서 %d이다.\n", i, sum);
//}


