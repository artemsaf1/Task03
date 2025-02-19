#include <stdio.h>

int code(void);
int decode(void);

int main(int argc, char* argv[]) {
    int flag = 0;
    if (argc < 2)
        flag = -1;
    if (argv[1][0] != '0' && argv[1][0] != '1') {
        flag = -1;
    } else {
    if (argv[1][0] == '0')
        flag = code();
    }

    if (argv[1][0] == '1') {
        flag = decode();
    }
    return flag;
}

int code(void) {
    int flag = 0;
    char c1;
    char g = '\0';

    while (g != '\n') {
        scanf("%c%c", &c1, &g);
        if (g != ' ' && g != '\n') {
            printf("n/a");
            flag = -1;
            break;
        } else {
            printf("%X%c", (int)c1, g);
        }
    }
    return flag;
}
int decode(void) {
    int flag = 0;
    int c1;
    char c2 = '\0';

    while (c2 != '\n') {
        scanf("%2X%c", &c1, &c2);
        if (c2 != ' ' && c2 != '\n') {
            printf("n/a\n");
            return -1;
        }
        printf("%c%c", c1, c2);
    }
    return flag;
}
