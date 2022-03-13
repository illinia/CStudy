//7-1
//#include <stdio.h>
//
//struct game {
//    char name[7];
//    int R1, R2, R3;
//};
//
//int main() {
//    struct game player;
//    double avg;
//
//    printf("선수의 이름은?");
//    scanf("%s", player.name);
//    printf("1, 2,3 점수는");
//    scanf("%d %d %d", &player.R1, &player.R2, &player.R3);
//
//    avg = (double)(player.R1 + player.R2 + player.R3) / 3;
//
//    printf("%s선수의 게임 결과 평균 %.1lf점 \n", player.name, avg);
//
//    return 0;
//}

//7-2
//#include <stdio.h>
//struct person {
//    char name[9];
//    char gender[3];
//    int age;
//};
//
//int main() {
//    struct person u1 = {"김유정", "여", 20}, u2 = {"김명직", "남", 29}, u3 = {"김윤정", "여", 18};
//    struct person oldest;
//
//    if (u1.age > u2.age) {
//        if (u1.age > u3.age) oldest = u1;
//        else oldest = u3;
//    } else {
//        if (u2.age > u3.age) oldest = u2;
//        else oldest = u3;
//    }
//
//    printf("%s\t %s\t %2d\n", u1.name, u1.gender, u1.age);
//    printf("%s\t %s\t %2d\n", u2.name, u2.gender, u2.age);
//    printf("%s\t %s\t %2d\n", u3.name, u3.gender, u3.age);
//
//    printf("%s\t %s\t %d\n\n", oldest.name, oldest.gender, oldest.age);
//    return 0;
//
//}

//7-3
//#include <stdio.h>
//#include <string.h>
//#define N 10
//struct person {
//    char name[7];
//    char gender[3];
//    int age;
//};
//int main() {
//    struct person user[N] = {{"김유정", "여", 20}, {"김명직", "남", 24}, {"김윤정", "여", 18}, {"김병직", "남", 26}, {"김민정", "여", 29}, {"김미정", "여", 27}, {"김수정", "여", 27}, {"김다정", "여", 25}, {"김시아", "여", 14}, {"김동욱", "남", 32}};
//
//    int male = 0, female = 0, sum = 0, i;
//
//    for (i = 0; i < N; i++) {
//        if (strcmp(user[i].gender, "남") == 0) male++;
//        else female++;
//
//        sum += user[i].age;
//    }
//
//    for (i = 0; i< N; i++) {
//        printf("%s\t %s\t %d\n", user[i].name, user[i].gender, user[i].age);
//    }
//    printf("남자 : %d명\n", male);
//    printf("여자 : %d명\n", female);
//    printf("평균 : %d살\n", sum / N);
//
//    return 0;
//}

//7-4
//#include <stdio.h>
//#define N 5
//
//struct person {
//    char name[7], gender[3];
//    int age;
//};
//
//int main() {
//    int i;
//    struct person *ptr;
//    struct person user[N] = {{"김유정", "여"}, {"김영직", "남"}, {"김윤정", "여"}, {"김시아", "여"}, {"김동욱", "남"}};
//    ptr  = user;
//
//    for (i = 0; i < N; i++) {
//        printf("%s의 나이는?", (*ptr).name);
//        scanf("%d", &(*ptr).age);
//        ptr++;
//    }
//
//    ptr = user;
//
//    for (i = 0; i < N; i++) {
//        printf("%s\t %s\t %d\n", ptr -> name, ptr -> gender, ptr -> age);
//        ptr++;
//    }
//
//    return 0;
//}

//7-5
//#include <stdio.h>
//#define N 5
//struct person {
//    char name[7], gender[3];
//    int age;
//};
//
//void input_by_address(struct person *ptr);
//void output_by_value(struct person shopper);
//
//int main() {
//    struct person buyer;
//    input_by_address(&buyer);
//    printf("구매자정보 : ");
//    output_by_value(buyer);
//    return 0;
//}
//
//void input_by_address(struct person *ptr) {
//    printf("이름은?"); scanf("%s", ptr -> name);
//    printf("성별은?"); scanf("%s", ptr -> gender);
//    printf("나이는?"); scanf("%d", &ptr -> age);
//}
//
//void output_by_value(struct person shopper) {
//    printf("%s(%s) %d세\n", shopper.name, shopper.gender, shopper.age);
//}

//7-6
//#include <stdio.h>
//
//int main() {
//    union student {
//        int tot;
//        char grade;
//    };
//
//    union student u;
//
//    u.tot = 300;
//    u.grade = 'A';
//
//    printf("총점 -> %d\n", u.tot);
//    printf("등급 -> %c\n", u.grade);
//}

//7-7
//#include <stdio.h>
//union student {
//    int num;
//    double grade;
//};
//
//int main(void) {
//    union student s1 = {315};
//    printf("%d\n", s1.num);
//
//    s1.grade = 4.4;
//    printf("%.1lf\n", s1.grade);
//    printf("%d\n", s1.num);
//}

//7-8
//#include <stdio.h>
//enum days {MON, TUE, WED, THU, FRI, SAT, SUN};
//
//char *days_name[] = {
//    "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"
//};
//
//int main(void) {
//    enum days d;
//
//    for (d = MON; d <= SUN; d++) {
//        printf("%d번째 요일 %s\n", d + 1, days_name[d]);
//    }
//}

//7-9
//#include <stdio.h>
//enum season {SPRING, SUMMER, FALL, WINTER};
//
//int main(void) {
//    enum season ss;
//    char *pc;
//
//    ss = SPRING;
//    switch(ss) {
//        case SPRING:
//            pc = "inline"; break;
//        case SUMMER:
//            pc = "swimming"; break;
//        case FALL:
//            pc = "trip"; break;
//        case WINTER:
//            pc = "skiing"; break;
//
//    }
//    printf("%s\n", pc);
//    return 0;
//}
