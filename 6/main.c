//6-1
//#include <stdio.h>
//
//int main(void) {
//    int ary[5];
//
//    ary[0] = 10;
//    ary[1] = 20;
//    ary[2] = ary[0] + ary[1];
//    scanf("%d", &ary[3]);
//
//    printf("%d\n", ary[2]);
//    printf("%d\n", ary[3]);
//    printf("%d\n", ary[4]);
//
//    return 0;
//}

//6-2
//#include <stdio.h>
//
//int main(void) {
//    int ary1[5] = {1,2,3,4,5};
//    int ary2[5] = {1,2,3};
//    int ary3[] = {1,2,3};
//
//    double ary4[5] = {1.0, 2.1, 3.2, 4.3, 5.4};
//    char ary5[5] = {'a', 'p', 'p', 'l', 'e'};
//
//    ary1[0] = 10;
//    ary1[1] = 20;
//    ary1[2] = 30;
//    ary1[3] = 40;
//    ary1[4] = 50;
//
//    return 0;
//}

//6-3
//#include <stdio.h>
//#define SIZE 4
//
//int main() {
//    int jumsoo[SIZE];
//    int i, count, sum;
//    double avg;
//
//    printf("%d명의 점수를 순서대로 입력하세요.\n\n", SIZE);
//    for (i = 0; i < SIZE; i++) {
//        printf("%d번의 퀴즈 점수는?", i + 1);
//        scanf("%d", &jumsoo[i]);
//    }
//
//    sum = 0;
//    for (i = 0; i < SIZE; i++) {
//        sum = sum + jumsoo[i];
//        avg = (double)sum / SIZE;
//    }
//
//    count = 0;
//    for (i = 0; i < SIZE; i++) {
//        if (jumsoo[i] < avg) count++;
//    }
//
//    printf("번호 점수 평균과의 차이 \n");
//    for (i = 0; i < SIZE; i++) printf("%2d %2d %5.1lf\n", i + 1, jumsoo[i], jumsoo[i] - avg);
//
//    printf("평균 : %.1lf점 \n", avg);
//
//    printf("평균미만 : %d명 \n", count);
//}

//#include <stdio.h>
//#define N 5
//
//int main() {
//    int f[N] = {3, 0, -30, -20, -1};
//    int i, min;
//
//    min = f[0];
//    for (i = 1; i < N; i++) {
//        if (f[i] < min) min = f[i];
//    }
//
//    printf("입력된 값 목록:");
//    for (i = 0; i < N; i++) {
//        printf("%4d", f[i]);
//    }
//
//    printf("\n가장 작은 값은: %d\n", min);
//    return 0;
//}

//6-5
//#include <stdio.h>
//
//int main(void) {
//    int score[3][4] = {{92, 99, 100, 89}, {88, 91, 99, 100}, {67, 68, 91, 82}};
//
//    for (int c = 0; c < 3; c++) {
//        int sum = 0;
//        for (int s = 0; s < 4; s++) {
//            sum += score[c][s];
//        }
//
//        printf("%d 반 총점 = %d 점, 평균 =%.2f 점 \n", c + 1, sum, sum / 4.0);
//    }
//
//    return 0;
//}

//6-6
//#include <stdio.h>
//
//int main(void) {
//    char str[80] = "applejam";
//
//    printf("최초 문자열 : %s\n", str);
//    scanf("%s", str);
//    printf("입력 후 문자열 : %s\n", str);
//
//    return 0;
//}

//6-7
//#include <stdio.h>
//
//int main(void) {
//    char str[80];
//
//    printf("문자열 입력 : ");
//    gets(str);
//    puts("입력된 문자열 : ");
//    puts(str);
//
//    return 0;
//}

//6-8
//#include <stdio.h>
//#define L 2
//#define M 3
//#define N 4
//
//int main() {
//    int n[L][M][N] = {{{0, 1, 2, 3}, {10, 11, 12, 13}, {20, 21, 22, 23}},
//        {{100, 101, 102, 103}, {110, 111, 112, 113}, {120, 121, 122, 123}}
//    };
//
//    int i, j, k;
//
//    for (i = 0; i < L; i++) {
//        printf("\n %d이면 \n\n", i + 1);
//        for (j = 0; j < M; j++) {
//            for (k = 0; k < N; k++) {
//                printf("%3d ", n[i][j][k]);
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//6-9
//#include <stdio.h>
//
//int find_larger(int first, int second);
//
//int main() {
//    int max, score[5] = {10, 8, 9, 7, 8};
//
//    max = find_larger(score[3], score[4]);
//
//    printf(" score[3] = %d과 score[4] = %d 중 큰 값은 %d \n", score[3], score[4], max);
//
//    return 0;
//}
//
//int find_larger(int first, int second) {
//    if (first > second) return first;
//    else return second;
//}

//6-10
//#include <stdio.h>
//
//int main() {
//    int a = 100;
//    int b = 200;
//    printf("변수 a의 주소는 %d이고 16진수로는 %p다.\n", &a, &a);
//    printf("변수 a의 주소는 %d이고 16진수로는 %p다.\n", &b, &b);
//}

//6-11
//#include <stdio.h>
//
//int main() {
//    int a[2] = {100, 300};
//    printf("변수 a[0] %d, %d, %p\n", a[0], &a[0], &a[0]);
//    printf("변수 a[1] %d, %d, %p\n", a[1], &a[1], &a[1]);
//    printf("a = %d, %d (%p)", a, &a[0], &a[0]);
//}

//6-12
//#include <stdio.h>
//
//int main() {
//    int var = 100;
//    int *ptr;
//
//    ptr = &var;
//
//    printf("변수 var의 값: %d \n", var);
//    printf("var의 간접 참조: %d \n\n", *ptr);
//
//    printf("var의 주소: %u(%p) \n", &var, &var);
//    printf("변수 ptr에 저장된 주소: %u(%p) \n", ptr, ptr);
//    printf("변수 ptr의 주소: %u*(%p) \n", &ptr, &ptr);
//}

//6-13
//#include <stdio.h>
//
//int main() {
//    int a = 100, b = 200, temp;
//    int *p1, *p2, *p_temp;
//    p1 = &a;
//    p2 = &b;
//    printf("a = %d, b = %d\n", a, b);
//    printf("a 주소 %p, b 주소 = %p\n", *p1, *p2);
//    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
//    printf("\n>>p1, p2 값 바꾸기\n");
//    temp = *p1;
//    *p1 = *p2;
//    *p2 = temp;
//    printf("a = %d b = %d\n", a, b);
//    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
//    printf("\n 포인터 p1과 p2에 저장된 주소 바꾸기\n");
//    a = 100, b = 200;
//    p_temp = p1;
//    p1 = p2;
//    p2 = p_temp;
//    printf("a = %d b = %d\n", a, b);
//    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
//    return 0;
//}

//6-14
//#include <stdio.h>
//
//int main() {
//    char vc = 'A', *pc;
//    int vi = 123, *pi;
//    double vd = 12.345, *pd;
//
//    pc = &vc;
//    pi = &vi;
//    pd = &vd;
//
//    printf("\n pc-1 = %u, pc = %u, pc + 1 = %u", pc - 1, pc, pc + 1);
//    printf("\n pi-1 = %u, pi = %u, pi+1 = %u", pi - 1, pi, pi + 1);
//    printf("\n pd-1 = %u, pd = %u, pd+1 = %u", pd - 1, pd, pd + 1);
//}

//6-15
//#include <stdio.h>
//
//int main() {
//    int a = 100, b = 200;
//    int *p1, *p2;
//
//    p1 = &a;
//    printf("p1 = &a 후: a = %d, *p1 = %d\n", a, *p1);
//
//    *p1 = *p1 + 1;
//    printf("a = %d, *p1 = %d\n", a, *p1);
//
//    p2 = p1;
//    printf("p2 = p1, a = %d, *p1 = %d, *p2 = %d\n", a, *p1, *p2);
//
//    (*p2)++;
//    printf("p2 = p1, a = %d, *p1 = %d, *p2 = %d\n", a, *p1, *p2);
//
//    printf("&a = %u, &b = %u, b = %d\n", &a, &b, b);
//    printf("p1 = %u, p1-1 = %u, *(p1-3) = %d\n", p1, p1 - 1, *(p1 - 3));
//
//}

//6-16
//#include <stdio.h>

//#define SIZE 5
//
//int main() {
//    int jumsoo[SIZE];
//    int i, count, sum;
//    double ave;
//    printf("%d명의 점수 순서대로.\n\n", SIZE);
//    for (i = 0; i < SIZE; i++) {
//        printf("%d번의 퀴즈 점수는?", i + 1);
//        scanf("%d", (jumsoo + i));
//    }
//    sum = 0;
//    for (i = 0; i < SIZE; i++) {
//        sum = sum + *(jumsoo + i);
//    }
//
//    ave = (double)sum / SIZE;
//    count = 0;
//    for (i = 0; i < SIZE; i++) {
//        if (*(jumsoo + i) < ave) {
//            count++;
//        }
//    }
//
//    printf("평균:%.1lf점\n", ave);
//    printf("평균미만: %d명", count);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int array[5], *p;
//    p = array;
//    p[1] = 10;
//    printf("array %u\n", array);
//    printf("array[1] %u, array[1] ==p[1] == *(p + 1): %d[%d, %d]\n", &array[1], array[1], p[1], *(p  + 1));
//}

//6-17
//#include <stdio.h>
//#define SIZE 5
//
//int main() {
//    int i, array[SIZE] = {1,2,3,4,5};
//    int *ptr;
//    ptr = array;
//
//    for (i = 0; i < SIZE; i++) {
//        printf("array[%d] = %d\n", i , array[i]);
//    }
//    printf("\n");
//    printf("array 배열 시작주소(%u) = ptr 주소 (%u) \n\n", array, ptr);
//
//    for (i = 0; i < SIZE; i++) {
//        printf("*(array + %d) = *(%u) = %d\n", i, array + i, *(array + i));
//    }
//    printf("\n");
//
//    for (i = 0; i < SIZE; i++) {
//        printf("*(ptr + %d) = *(%d) = %d\n", i , ptr + i, *(ptr + i));
//    }
//    printf("\n");
//
//    for (i = 0; i < SIZE; i++) {
//        printf("ptr[%d] = %d\n", i, ptr[i]);
//    }
//}

//#include <stdio.h>
//void swap_value(int x, int y);
//void swap_address(int *x, int *y);
//
//int main() {
//    int x = 100, y = 200;
//    printf("main함수에서 : x = %d, y = %d \n\n", x, y);
//    swap_value(x, y);
//    printf("main함수에서 : x = %d, y = %d \n\n", x, y);
//    swap_address(&x, &y);
//    printf("main함수에서 : x = %d, y = %d \n\n", x, y);
//    return 0;
//}
//
//void swap_value(int x, int y) {
//    int temp;
//    temp = x;
//    x = y;
//    y = temp;
//    printf("swap 함수내 x = %d, y = %d\n", x, y);
//}
//
//void swap_address(int *x, int *y) {
//    int temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//    printf("swap 함수내 x = %d, y = %d\n", x, y);
//}

//6-19
//#include <stdio.h>
//
//int main() {
//    char *first = "Dongwook", *last = "Kim";
//    char *temp;
//    printf("Name: %s %s\n", first, last);
//    printf("Name의 주소: %u %u\n", &first, &last);
//    printf("temp주소 : %u \n", &temp);
//
//    temp = first;
//    first = last;
//    last = temp;
//    printf("Name: %s %s\n", first, last);
//
//    return 0;
//}

//6-20
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char first[10] = "Dongwook", last[10] = "Kim";
//    char temp[10];
//
//    printf("Name: %s %s\n", first, last);
//
//    strcpy(temp, first);
//    strcpy(first, last);
//    strcpy(last, temp);
//
//    printf("Name: %s %s\n", first, last);
//    return 0;
//}
