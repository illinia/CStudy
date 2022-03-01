//3-1
//# include <stdio.h>

//void main() {
//    printf("Hello!");
//    printf("My name is 'C'. ");
//    printf("Nice to meet you. ");
//    return;
//}

//3-2
//# include <stdio.h>
//
//void main() {
//    printf("안녕!");
//    printf("내 이름은 Kim Dongwook입니다..\n");
//    printf("반갑습니다. 안녕!\n\n");
//    printf("당신의 이름은?\b\b\b");
//    printf("내 이름은 \"철수야!\"\n\n\a");
//}

//3-3
//#include <stdio.h>
//
//void main() {
//    int age = 26;
//    double height = 175.7;
//    char grade = 'A';
//
//    printf("나이 %d세\n", age);
//    printf("키 %fcm의 표준체중: %lf\n", height, (height - 100) * 0.9);
//    printf("학점: %c\n", grade);
//    printf("국적: %s\n\n", "대한민국");
//    printf("1억: %e\n", 1.0e8);
//
//    printf("10진수 %d = 8진수 %o = 16진수 %X\n", age, age, age);
//}

//3-4
//#include <stdio.h>
//
//void main() {
//    int n1 = 9;
//    int n2 = 77;
//    int n3 = 100;
//
//    printf("1. %dcm\n", n1);
//    printf("2. %dcm\n", n2);
//    printf("3. %dcm\n", n3);
//}

//3-5
//#include <stdio.h>
//
//void main() {
//    int n1 = 9;
//    int n2 = 77;
//    int n3 = 100;
//
//    printf("1. %3dcm\n", n1);
//    printf("2. %3dcm\n", n2);
//    printf("3. %3dcm\n", n3);
//}

//3-6
#include <stdio.h>

//void main() {
//    int n = 123;
//    printf("n = %d\n", n);
//    printf("n = %5d\n", n);
//    printf("n = %+5d\n", n);
//    printf("n = %-5d\n", n);
//    printf("n = %-+5d\n", n);
//
//}

//3-7
//void main() {
//    int n1 = 90;
//    int n2 = 770;
//    int n3 = 1000;
//    printf("1. %+2dcm\n", n1);
//    printf("2. %-2dcm\n", n2);
//    printf("3. %-+2dcm\n", n3);
//}

//3-8
//void main() {
//    printf("|%d|\n\n", 1234);
//    printf("|%6d|\n\n", 1234);
//    printf("|%-6d|\n\n", 1234);
//    printf("|%06d|\n\n", 1234);
//    printf("|%6f|\n\n", 12.345);
//    printf("|%6.1f|\n\n", 12.345);
//    printf("|%06.2f|\n\n", 12.345);
//}

//3-9
//void main() {
//    double avg = 83.768;
//
//    printf("avg = %7.3lf\n", avg);
//    printf("avg = %6.2lf\n", avg);
//}

//3-10
//void main() {
//    double avg = 83.768;
//    printf("avg = %.2lf\n", avg);
//}

//3-11
//void main() {
//    double avg = 83.768;
//    printf("avg = %10lf\n", avg);
//}

//3-12
//void main() {
//    double n1 = 83.768;
//    printf("avg = %5.lf\n", n1);
//    printf("avg = %5.0lf\n", n1);
//}

//3-13
//void main() {
//    char grade = 'A';
//    printf("내 학점은 %c.\n", grade);
//    printf("내 학점은 %3c.\n", grade);
//    printf("내 학점은 %-3c.\n", grade);
//}

//3-14
//void main() {
//    printf("%s.\n", "Hi");
//    printf("My name is %14s.\n", "Test");
//    printf("%-20s %-10s\n", "Nice to meet you.", "Hello");
//}

//3-15
//void main() {
//    char jumsu = 'A';
//    putchar(jumsu);
//    putchar('0');
//    putchar('\n');
//}

//3-16
//void main() {
////    char ch1 = 'A' + 1;
////    char ch2 = 'A' + 2;
////    char ch3 = 'A' + 3;
////    putchar(ch1);
////    putchar('\n');
////    putchar(ch2);
////    putchar('\n');
////    putchar(ch3);
////    putchar('\n');
//    char ch1 = 'A';
//    char ch2 = 'B';
//    char ch3 = 'a';
//    char ch4 = '0';
//
//    printf("Ascci code 값 %3d <==> 문자 %2c\n", ch1, ch1);
//    printf("Ascci code 값 %3d <==> 문자 %2c\n", ch2, ch2);
//    printf("Ascci code 값 %3d <==> 문자 %2c\n", ch3, ch3);
//    printf("Ascci code 값 %3d <==> 문자 %2c\n", ch4, ch4);
//}

//3-17
//void main() {
//    puts("Hi!!");
//    puts("My name is Test");
//    puts("Bye Bye");
//}

//3-18
//void main() {
//    int age;
//    printf("당신의 나이는?");
//    //    scanf("%d", &age);
//
//    //    scanf("%d\n", &age);
//
//    //    scanf("%d ", &age);
//
//    //    scanf("%d ", &age);
//    //    printf("입력한 나이는 %d살이군요.\n", age);
//    //    scanf("%d", &age);
//
//    //    scanf("%2d", &age);
//    //
//    //    printf("입력한 나이는 %d살이군요.\n", age);
//    //    scanf("%d", &age);
//    //    printf("입력한 나이는 %d살이군요.\n", age);
//
//    scanf("%lf", &age);
//    printf("입력한 나이는 %d살이군요.\n", age);
//}

//int main() {
//    int age;
//    char sex;
//    double height;
//
//    printf("\n=============\n");
//    printf("학생의 성별은?");
//    scanf("%c", &sex);
//    printf("학생의 나이는?");
//    scanf("%d", &age);
//    printf("학생의 신장은?");
//    scanf("%lf", &height);
//    printf("\n=============\n");
//
//    printf("\n=============\n");
//    printf("성별: %c\n", sex);
//    printf("나이: %d세\n", age);
//    printf("신장: %.1lfcm\n", height);
//    return 0;
//}

//3-20
//int main() {
//    char name[10];
//    printf("학생의 이름은?");
//    scanf("%s", name);
//    printf("입력된 학생 이름은 %s입니다.\n", name);
//}

//3-21
//int main() {
//    int kor, math, eng;
//    printf("3과목 성적을 입력하세요:");
//    scanf("%d%d %d", &kor, &math, &eng);
//    printf("\n3과목의 총점은? ");
//    printf("입력된 과목의 총점은 %d이다.\n", kor + math + eng);
//}

//3-22
//int main() {
//    int kor, math, eng;
//    printf("3과목 성적을 입력하세요.");
////    scanf("%d, %d, %d", &kor, &math, &eng);
////    printf("\n3과목의 총점은?");
////    printf("입력된 과목의 총점은 %d이다.\n", kor + math + eng);
//
////    scanf("%d%d", &kor, &math, &eng);
////    printf("\n3과목의 총점은?");
////    printf("입력된 과목의 총점은 %d이다.");
//
////    scanf("%d%d%d%d", &kor, &math, &eng);
////    printf("\n3과목의 총점은?");
////    printf("입력된 과목의 총점은 %d이다. \n", kor + math + eng);
//
//}

//3-23
//int main() {
//    char grade;
//    printf("과목에 대한 성적을 입력하세요");
//    grade = getchar();
//    printf("입력된 과목의 성적은 %c이다\n", grade);
//}

//3-24
//int main() {
//    char small, large;
//
//    printf("알파벳 소문자 한 개를 입력하시오");
//    small = getchar();
//    large = 'A' + (small - 'a');
//    printf("입력한 소문자 %c의 대문자는 %c이다.\n", small, large);
//}

//3-25
//int main() {
//    char text[30];
//
//    printf("임의의 문장을 입력하시오:");
//    gets(text);
//    printf("입력된 문장은 %s이다.\n", text);
//}

//3-26
//int main() {
//    int A, B;
//    A = 100;
//    printf("A의 값: %d\n", A);
//    printf("A + 50의 결과: %d\n", A + 50);
//    printf("B = A + 10의 결과: %d\n", B = A + 10);
//    printf("B = 10 + (A = 20 + 30)의 결과: %d\n", B = 10 + (A = 20 + 30));
//    printf("B = A = 50의 결과: %d\n", B = A = 50);
//}

//3-27
//int main() {
////    int A = 10, B = 20;
////    printf("%d + %d = %d\n", A, B, A + B);
////    printf("%d * %d = %d\n", A, B, A * B);
////    printf("%d / %d = %d\n", A, B, A / B);
////    printf("%d %% %d = %d\n", A, B, A % B);
////    printf("%d / %.1lf = %.1lf\n", A, 3.0, A / 3.0);
//
////    int a = 2, b = 2;
////    printf("%d = %d * 3 + 2\n", a * 3 + 2, a);
////    printf("%d *= 3 + 2\n", a *= 3 + 2);
//}

//3-28
//int main() {
//    int a = 1, b = 2;
//
//    printf("a = %d, b = %d\n", a, b);
//    printf("a += b의 결과는 %d\n\n", a += b);
//    printf("a = %d, b = %d\n",a, b);
//    printf("a -= b의 결과는 %d\n\n", a -= b);
//    printf("a = %d, b = %d\n",a, b);
//    printf("a *= b의 결과는 %d\n\n", a *= b);
//    printf("a = %d, b = %d\n",a, b);
//    printf("a /= b의 결과는 %d\n\n", a /= b);
//    printf("a = %d, b = %d\n",a, b);
//    printf("a &= b의 결과는 %d\n", a %= b);
//}

//3-29
//int main() {
//    int x = 1, y = 2;
//    printf("(%d > %d)의 결과는 %d입니다.\n", x, y, x > y);
//    printf("(%d < %d) %d.\n", x, y, x < y);
//    printf("%d >= %d %d\n", x, y, x >= y);
//    printf("%d <= %d %d\n", x, y, x <= y);
//    printf("%d == %d %d\n", x, y, x == y);
//    printf("%d != %d %d\n", x, y, x != y);
//    return 0;
//}

//3-30
//int main() {
//    printf("참, 참의 결과 %d\n", (100 == 100) && (100 != 10));
//    printf("참 && 거짓 %d\n", (100 == 100) && (100 != 100));
//    printf("참 || 거짓 %d\n", ( 100 == 100) || (100 == 10));
//    printf("거짓 || 거짓 %d\n", (100 != 100) || (100 == 10));
//    printf("!참 %d\n", !(100 == 100));
//    printf("!거짓 %d\n", !(100 != 100));
//}

//3-31
//int main() {
//    int a = 100, b = 10, c;
//    c = (a += 20) || (b += 10);
//    printf("a = %d, b = %d\n", a, b);
//    printf("c = %d\n", c);
//}

//3-32
//int main() {
//    int a = 10, b = 7;
//    (a % 2 == 0) ? printf("%d는 짝수입니다.\n", a) : printf("%d는 홀수입니다.\n", a);
//    (b % 2 == 0) ? printf("%d는 짝수입니다.\n", b) : printf("%d는 홀수입니다.\n", b);
//}

//3-33
//int main() {
//    int a = 10, b = 20, c = 30;
//    a++;printf("a = %d\n", a);
//
//    a = ++a * 5;printf("a = %d\n", a);
//    b = b++ * 5;printf("b = %d\n", b);
//    c = 5 - --c; printf("c = %d\n", c);
//}

//3-34
//int main() {
//    int a = 7, b = 10;
//    printf("%d & %d = %d\n", a, b, a & b);
//    printf("%d | %d = %d\n", a, b, a | b);
//    printf("%d ^ %d = %d\n", a, b, a ^ b);
//    printf("~%d = %d\n", a, ~a);
//    printf("~%d = %d\n", b, ~b);
//}

//3-38
//int main() {
//    int a = 10, n = 1;
//    printf("%d >> %d = %d\n", a, n, a >> n);
//    printf("%d >> %d = %d\n", a, n + 1, a >> (n + 1));
//    printf("%d >> %d = %d\n", a, n + 2, a >> (n + 2));
//    printf("%d << %d = %d\n", a, n, a << n);
//    printf("%d << %d = %d\n", a, n + 1, a << (n + 1));
//    printf("%d << %d = %d\n", a, n + 2, a << (n + 2));
//}

//3-39
//int main() {
//    int i = 10;
//    double j = 1.23;
//    printf("i의 메모리 크기 -> %d byte\n", sizeof(i));
//    printf("j의 메모리 크기 -> %d byte\n", sizeof(j));
//    printf("i + j = %.2lf와 형변환된 메모리 크기는 -> %d byte\n", i + j, sizeof(i + j));
//}

//3-40
//int main() {
//    short i = 10, k;
//    double j = 1.23;
//    k = i + j;
//    printf("i의 메모리 크기 -> %d byte\n", sizeof(i));
//    printf("j의 메모리 크기 -> %d byte\n", sizeof(j));
//    printf("i + j = %d와 형변환된 메모리 크기는 -> %d byte\n", k, sizeof(k));
//}

//3-41
//int main() {
//    int a = 20, b = 8, sum;
//    double avg;
//
//    printf("정수간 a / b = %d\n", a / b);
//    printf("실수간 a / b = %lf\n", (double)a / (double)b);
//
//    sum = (double)a / (double)b;
//    printf("잘못된 나눗셈 = %d\n", sum);
//    avg = (double)(a / b);
//    printf("정확한 나눗셈 = %lf\n", avg);
//
//    avg = (double)a / b;
//    printf("정확한 나눗셈 = %lf\n", avg);
//}

//3-42
//int main() {
//    int a, b;
//    b = (a = 10 + 20, a - 5);
//    printf("콤마 연산자의 결과는 %d\n", b);
//}

//3-43
//int main() {
//    int a, b;
//    printf("다음 2개의 정수를 입력하시오");
//    scanf("%d%d", &a, &b);
//    printf("a -> %x\n", &a);
//    printf("b -> %x\n", &b);
//}

//3-44
//int main() {
//    char x = 'a';
//    int y;
//    double z = 1.234;
//    printf("char x = %d\n", sizeof(x));
//    printf("int y = %d\n", sizeof(y));
//    printf("double z = %d\n", sizeof(z));
//    printf("float %d\n", sizeof(float));
//    printf("const = %d\n", sizeof(100));
//    printf("function = %d\n", sizeof(1 + 0.2));
//}

//3-45
//int main() {
//    int a = 1, b = 2, c = 2, d= 2;
//
//    printf("c += b >> (2 + ++b) -> %d\n", c += b >> (2 + ++b));
//}
