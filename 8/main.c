//8-1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fp;
//    char filename[80];
//
//    printf("파일명 입력");
//    gets(filename);
//
//    fp = fopen(filename, "r");
//    if (fp == NULL) {
//        printf("\n열기 에러: %s\n", filename);
//        exit(1);
//    }
//
//    fclose(fp);
//
//    return 0;
//}

//8-2
//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 5
//
//int main() {
//    FILE *fp;
//    char *f_name = "age.txt";
//    int age, i;
//
//    fp = fopen(f_name, "w");
//
//    if (fp == NULL) {
//        printf("%s 에러 \n", f_name);
//        exit(1);
//    }
//
//    printf("%d명의 나이 입력 파일 저장\n", SIZE);
//
//    for (i = 0; i < SIZE; i++) {
//        printf("%2d번 나이", i + 1);
//        scanf("%d", &age);
//
//        fprintf(fp, "%d\n", age);
//    }
//
//    fclose(fp);
//    printf("%d명 나이 %s파일에 저장\n", SIZE, f_name);
//
//    return 0;
//}

//8-3

//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 5
//
//int main() {
//    FILE *fp;
//    char *f_name = "age.txt";
//    int age, i;
//
//    fp = fopen(f_name, "r");
//
//    if (fp == NULL) {
//        printf("%s에러\n", f_name);
//        exit(1);
//    }
//
//    for (i = 0; i < SIZE; i++) {
//        fscanf(fp, "%d", &age);
//
//        printf("%2d번 회원 나이 %d세\n", i + 1, age);
//    }
//
//    fclose(fp);
//    return 0;
//}

//8-4
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fp;
//    char *f_name = "age.txt";
//    int age, i, n;
//
//    fp = fopen(f_name, "a");
//
//    if (fp == NULL) {
//        printf("%s파일 에러\n", f_name);
//        exit(1);
//    }
//
//    printf("나이 입력시 %s파일에 추가\n", f_name);
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        printf("나이는");
//        scanf("%d", &age);
//        fprintf(fp, "%d\n", age);
//    }
//    fclose(fp);
//    printf("%d명 나이 %s파일에 추가\n", n, f_name);
//
//    return 0;
//}

//8-6
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fp;
//    int age;
//
//    fp = fopen("age.txt", "r");
//    if (fp == NULL) {
//        printf("파일 열기 에러\n"); exit(1);
//    }
//    fscanf(fp, "%d", &age);
//    while (!feof(fp)) {
//        printf("%2d\n", age);
//        fscanf(fp, "%d", &age);
//    }
//
//    fclose(fp);
//
//    return 0;
//}

//8-7
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fp2;
//    char f_name2[30], ch;
//
//    printf("만들 파일명"); gets(f_name2);
//
//    fp2 = fopen(f_name2, "w");
//
//    if (fp2 == NULL) {
//        printf("%s 에러\n", f_name2); exit(1);
//    }
//
//    scanf("%c", &ch);
//    while (ch != '&') {
//        fputc(ch, fp2);
//        scanf("%c", &ch);
//    }
//    fclose(fp2);
//
//    return 0;
//}

//8-8
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fp;
//    char f_name[30], ch;
//
//    printf("읽을 파일명"); gets(f_name);
//
//    fp = fopen(f_name, "r");
//    if (fp == NULL) {
//        printf("%s란 파일없음\n", f_name); exit(1);
//    }
//
//    while ((ch = fgetc(fp)) != EOF) {
//        printf("%c", ch);
//    }
//
//    fclose(fp);
//
//    return 0;
//}

//8-9
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fp1, *fp2;
//    char f_name1[30], f_name2[30], ch;
//
//    printf("파일을 복사합니다.\n");
//
//    printf("원본 파일명"); gets(f_name1);
//    fp1 = fopen(f_name1, "r");
//    if (fp1 == NULL) {
//        printf("%s 에러\n", f_name1); exit(1);
//    }
//
//    printf("복사본 파일명"); gets(f_name2);
//    fp2 = fopen(f_name2, "w");
//    if (fp2 == NULL) {
//        printf("%s파일 없음\n", f_name2); exit(1);
//    }
//
//    while ((ch = fgetc(fp1)) != EOF) {
//        fputc(ch, fp2);
//    }
//
//    fclose(fp1); fclose(fp2);
//    printf("%s 복사한 복사본 %s가 저장됨\n", f_name1, f_name2);
//
//    return 0;
//}

//8-10
//#include <stdio.h>
//#include <stdlib.h>
//
//struct person {
//    char name[7], gender[3];
//    int age;
//};
//typedef struct person PERSON;
//
//int main() {
//    int i;
//    PERSON user;
//    FILE *fp = fopen("user.bin", "wb");
//
//    if (fp == NULL) {
//        printf("에러 \n"); exit(1);
//    }
//
//    printf("이름 : "); gets(user.name);
//    printf("성별 : "); gets(user.gender);
//    printf("나이 : "); scanf("%d", &user.age);
//
//    fwrite(&user, sizeof(PERSON), 1, fp);
//    fclose(fp);
//    return 0;
//}

//8-11
//#include <stdio.h>
//#include <stdlib.h>
//
//struct person {
//    char name[7], gender[3];
//    int age;
//};
//typedef struct person PERSON;
//
//int main() {
//    PERSON user;
//    FILE *fp;
//
//    fp = fopen("user.bin", "rb");
//    if (fp == NULL) {
//        printf("에러\n"); exit(1);
//    }
//
//    while (fread(&user, sizeof(PERSON), 1, fp) == 1) {
//        printf("%10s %10s %10d\n", user.name, user.gender, user.age);
//    };
//    fclose(fp);
//
//    return 0;
//}

//8-12
#include <stdio.h>

int main(void) {
    FILE *fp;
    char buffer[100];
    
    fp = fopen("sample.txt", "wt");
    fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
    fclose(fp);
    
    fp = fopen("sample.txt", "rt");
    
    fseek(fp, 3, SEEK_SET);
    printf("%c\n", fgetc(fp));
    
    fseek(fp, -1, SEEK_END);
    printf("%c\n", fgetc(fp));
    
    fclose(fp);
    return 0;
}
