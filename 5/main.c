//5-1

//#include <stdio.h>
//#include <math.h>
//#define PI 3.141592
//
//int main() {
//    int degree;
//    double radian;
//
//    for (degree = 0; degree <= 180; degree += 30) {
//        radian = (PI * degree) / 180;
//        printf("sin(%d) = %.5lf\n", degree, sin(radian));
//    }
//
//    return 0;
//}

//5-2
//#include <stdio.h>
//
//int func_sum(int n) {
//    int i, sum = 0;
//    for (i = 1; i <= n; i++) {
//        sum += i;
//    }
//    return sum;
//}
//
//int main() {
//    int end;
//    printf("1~100까지의 합 : %d \n\n", func_sum(100));
//
//    printf("1에서 몇까지 합을 구할까요");
//    scanf("%d", &end);
//    printf("\n1~%d까지의 합: %d \n", end, func_sum(end));
//
//    return 0;
//}

//5-3
//#include <stdio.h>
//
//int func_large(int x, int y) {
//    int larger;
//    if (x > y) larger = x;
//    else larger = y;
//
//    return larger;
//}
//
//int main() {
//    int n1, n2, max;
//
//    printf("첫째 정수"); scanf("%d", &n1);
//    printf("둘째 정수"); scanf("%d", &n2);
//
//    max = func_large(n1, n2);
//
//    printf("%d, %d중 큰 값은 %d \n", n1, n2, max);
//    return

//#include <stdio.h>
//
//int func_large(int first, int second);
//
//int main() {
//    int n1, n2, max;
//
//    printf("첫째 정수"); scanf("%d", &n1);
//    printf("둘째 정수"); scanf("%d", &n2);
//
//    max = func_large(n1, n2);
//
//    printf("%d, %d중 큰 값은 %d \n", n1, n2, max);
//    return 0;
//}
//
//int func_large(int x, int y) {
//    int larger;
//    if (x > y) larger = x;
//    else larger = y;
//
//    return larger;
//}

//5-5
//#include <stdio.h>
//#include <math.h>
//#define PI 3.141592
//double get_sin(double degree);
//
//int main() {
//    int degree;
//    double radian;
//    for (degree = 0; degree <= 180; degree += 30)
//        printf("sin(%d) = %.5lf\n", degree, get_sin(degree));
//
//    return 0;
//}
//
//double get_sin(double degree) {
//    double radian;
//    radian = (PI * degree) / 180;
//    return sin(radian);
//}

//#include <stdio.h>
//int func_pass(int number);
//
//int main() {
//    int absence;
//    printf("결석 시간을 입력하시오");
//    scanf("%d", &absence);
//
//    if (func_pass(absence)) printf("통과 \n");
//    else printf("과락 \n");
//
//    return 0;
//}
//
//int func_pass(int number) {
//    int limit = 6;
//    if (number < limit) return 1;
//    else return 0;
//}

//5-7
//#include <stdio.h>
//
//int func_pay(int hours, int day_rate, int hour_rate);
//
//int main() {
//    int total_hours;
//    int daily_rate = 100000, hourly_rate = 10000;
//    int pay;
//
//    printf("근로 시간은?");
//    scanf("%d", &total_hours);
//
//    pay = func_pay(total_hours, daily_rate, hourly_rate);
//    printf("오늘의 임금은 %d원 \n", pay);
//
//    return 0;
//}
//
//int func_pay(int hours, int day_rate, int hour_rate) {
//    int day = hours / 8;
//    hours = hours % 8;
//
//    return (day * day_rate + hours * hour_rate);
//}

//5-8
//#include <stdio.h>
//
//int get_pos(void);
//
//int main(void) {
//    int res;
//    res = get_pos();
//    printf("반환값 : %d\n", res);
//    return 0;
//}
//
//int get_pos(void) {
//    int pos;
//    printf("양수 입력 : ");
//    scanf("%d", &pos);
//    return pos;
//}

//5-9
//#include <stdio.h>
//void print_char(char ch, int cnt);
//
//int main(void) {
//    print_char('@', 5);
//    return 0;
//}
//
//void print_char(char ch, int cnt) {
//    int i;
//    for (i = 0; i < cnt; i++) {
//        printf("%c", ch);
//    }
//}

//5-10
//#include <stdio.h>
//void print_line(void);
//
//int main(void) {
//    print_line();
//    printf("학번 이름 전공 학점\n");
//    print_line();
//    return 0;
//}
//
//void print_line(void) {
//    int i;
//    for (i = 0; i < 50; i++) {
//        printf("-");
//    }
//    printf("\n");
//}

//5-11
//#include <stdio.h>
//void descend(int n);
//
//int main() {
//    int n;
//    printf("n에서 1까지 내림차순으로 출력하는 프로그램 \n");
//    printf("n값을 입력하시오 : ");
//    scanf("%d", &n);
//    descend(n);
//    return 0;
//}
//
//void descend(int n) {
//    printf("%4d", n);
//
//    if(n > 1) {
//        descend(n - 1);
//        return ;
//    }
//}

//5-13
//#include <stdio.h>
//int scending_sum(int n);
//
//int main() {
//    int n;
//    printf("1부터 n까지의 합을 구하는 프로그램 \n");
//    printf("값을 입력하시오. : ");
//    scanf("%d", &n);
//    printf("1부터 %d까지의 합은 %d이다", n, scending_sum(n));
//    return 0;
//}
//
//int scending_sum(int n) {
//    int sum;
//    if (n > 1) sum = scending_sum(n - 1) + n;
//    else sum = 1;
//
//    return sum;
//}

//5-14
//#include <stdio.h>
//
//int main(void) {
//    int i;
//    for (i = 0; i < 5; i++) {
//        int temp = 1;
//        printf("temp=%d\n", temp);
//        temp++;
//    }
//
//    return 0;
//}

//5-15
//#include <stdio.h>
//void inc(int count);
//
//int main(void) {
//    int i = 10;
//    printf("함수 호출전 i=%d\n", i);
//    inc(i);
//    printf("함수 호출후 i=%d\n", i);
//
//    return 0;
//}
//
//void inc(int counter) {
//    counter++;
//}

//5-16
//#include <stdio.h>
//int a;
//int b;
//int add(void);
//
//int main(void) {
//    int answer;
//    answer = add();
//    printf("%d + %d = %d\n", a, b, answer);
//    return 0;
//}
//
//int add() {
//    return a + b;
//}
//
//#include <stdio.h>
//int a;
//void func(void);
//
//int main(void) {
//    for (a = 0; a < 10; a++) {
//        func();
//    }
//}
//
//void func() {
//    for (a = 0; a < 10; a++) {
//        printf("*");
//    }
//}

//5-17
//#include <stdio.h>
//
//int func_large(void);
//int n1, n2, max;
//
//int main() {
//    printf("첫째 정수");scanf("%d", &n1);
//    printf("둘째 정수");scanf("%d", &n2);
//
//    max = func_large();
//    printf("n1 = %d, n2 = %d 중 큰값은 %d \n", n1, n2, max);
//
//    return 0;
//}
//
//int func_large() {
//    if (n1 > n2) return n1;
//    else return n2;
//}

//5-19
//#include <stdio.h>
//int func_large(int x, int y);
//int n1, n2, max;
//
//int main() {
//    int width, height;
//
//    printf("첫째 정수?"); scanf("%d", &n1);
//    printf("둘째 정수?"); scanf("%d", &n2);
//
//    max = func_large(n1, n2);
//    printf("n1 = %d, n2 = %d 중 큰 값은 %d \n", n1, n2, max);
//
//    width = n1 * 4;
//    height  = n2;
//
//    max = func_large(width, height);
//    printf("width = %d, height = %d 중 큰값은 %d \n", width, height, max);
//    return 0;
//}
//
//int func_large(int x, int y) {
//    if (x > y) return x;
//    else return y;
//}

//5-20
//#include <stdio.h>
//int sum = 1;
//
//int main(void) {
//    int sum = 0;
//    printf("sum = %d\n", sum);
//    return 0;
//}

//5-21
//#include <stdio.h>
//void sum_to_10(void);
//int global_sum;
//
//int main() {
//    auto int i;
//    for (i = 1; i <= 10; i++) {
//        global_sum += i;
//    }
//
//    printf("1~10의 합 global_sum: %d\n", global_sum);
//    sum_to_10();
//    return 0;
//}
//
//void sum_to_10() {
//    auto int i, local_sum;
//    for (i = 1; i <= 10; i++) local_sum += i;
//    printf("1~10의 합 local_sum : %d\n", local_sum);
//}

//5-22
//#include <stdio.h>
//void call_num(void);
//
//int main(void) {
//    int i;
//    for (i = 0; i <5; i++) {
//        call_num();
//    }
//
//    return 0;
//}
//
//void call_num() {
//    static int count;
//    int number = 1;
//    printf("%d번째 호출되었다.\n", count += 1);
//    printf("Number값은 %d이다.\n\n", number++);
//}

//5-23
//#include <stdio.h>
//static int count;
//static int number = 2;
//void call_num(void);
//
//int main(void) {
//    int i;
//    for (i = 0; i <5; i++) {
//        call_num();
//    }
//
//    return 0;
//}
//
//void call_num() {
//    static int count;
//    int number = 1;
//    printf("%d번째 호출되었다.\n", count += 1);
//    printf("Number값은 %d이다.\n\n", number++);
//}
//

//5-24
//#include <stdio.h>
//
//int main(void) {
//    register int i;
//    int sum = 0;
//
//    for (i = 0; i < 10000; i++) {
//        sum += i;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
