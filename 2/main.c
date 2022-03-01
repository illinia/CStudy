//#include <stdio.h>
//
//int main() {
//    2-2
//    unsigned char age = 97;
//    int max = 2147483647;
//    int max_plus_1 = max + 1;
//    unsigned int super = max + 1;
//
//    printf("age = %d\nmax = %d\n", age, max);
//    printf("max + 1 = %d\n", max_plus_1);
//    printf("super = max + 1 = %u\n", super);
//
//    return 0;

//    2-3
//    float radius = 10.0;
//    float area;
//    area = 3.14 * radius * radius;
//
//    printf("반지름이 %f인 원의 넓이는 %f 입니다.\n", radius, area);
//
//    return 0;

//    2-4
//    double width, height;
//    double area;
//
//    width = 3.0;
//    height = 5.0;
//    area = width * height / 2.0;
//
//    printf("밑변 %lfcm, 높이 %lfcm인 삼각형의 넓이 = ", width, height);
//    printf("%lfcm^2\n", area);
//
//    return 0;
//    2-5
//    printf("10진수 정수형 상수 %d + %d = %d 입니다. \n", 10, 20, 10 + 20);
//    printf("16진수 정수형 상수 %x + %x = %x 입니다. \n", 0x10, 0x20, 0x10 + 0x20);
//    printf(" 8진수 정수형 상수 %o + %o = %o 입니다. \n", 010, 020, 010 + 020);
//
//    return 0;
    
//    2-6
//    printf("실수형 상수 %lf + %lf = %lf 입니다. \n", 3.1, 4.1, 3.1 + 4.1);
//    return 0;
    
//    2-7
//    printf("%c\n", 'a');
//    printf("%c\n", 97);
//    printf("%c\n", '\141');
//    printf("%c\n", '\x61');
//    printf("삐음: %c\n", '\a');
//    printf("단일 인용부호 : %c\n", '\'');
//    printf("abcdef\b\b\b\b\n");
//    printf("%s\n", "ghijk");
//
//    return 0;
//}

//# include <stdio.h>
//# define    IINT   int
//# define    FFLOAT  float
//# define    PRT     printf
//# define    READ    scanf
//
//void main() {
//    IINT a;
//    FFLOAT b, c;
//    PRT("정수 a와 실수 b를 각각 입력하시요. ");
//    READ("%d    %f", &a, &b);
//    c = a + b;
//    PRT("%d + %f = %f \n", a, b, c);
//}
//
//# include <stdio.h>
//# define    FFLOAT   float
//# define    PRT      printf
//# define    READ     scanf
//# define    PI       3.141592
//# define    CIRCUM(r) (2 * PI * (r))
//# define    AREA(r) (PI * (r) * (r))
//
//int main() {
//    FFLOAT r;
//    PRT(" 원의 반지름 r(cm)을 입력하시오: ");
//    READ("%f", &r);
//    PRT("원의 둘레는 = %0.2f(cm) 이고, ", CIRCUM(r));
//    PRT("원의 넓이는 = %.2f(cm^2) 이다.\n", AREA(r));
//    
//    return 0;
//}
//
//
//#include <stdio.h>
//#include "header.h"
//
//int main() {
//    printf("내이름은 %s이고, 나이는 %d세입니다.\n", Name, Age);
//    return 0;
//}
//
//# include <stdio.h>
//# define PI 3.141592
//# define R 5
//
//int main() {
//    double area;
//
//    # ifdef PI
//        printf("PI = 3.141592\n");
//    # endif
//    # undef R
//    # define R 3
//
//    area = PI * R * R;
//    printf("Radius %d\nArea = %.2lf\n", R, area);
//    return 0;
//}

//# include <stdio.h>
//# define STR(A, B) #A"는 " #B"의 수도이다."
//
//int main() {
//    puts(STR(서울, 대한민국));
//    puts(STR(위싱턴, 미국));
//    return 0;
//}

//# include <stdio.h>
//# define STR(Y, M, D) Y ## M ## D
//
//int main() {
//    printf("생년월일: %d\n", STR(11, 06, 10));
//    printf("생년월일: %d\n", STR(10, 11, 25));
//    return 0;
//}
