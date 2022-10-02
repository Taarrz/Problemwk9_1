#include<stdio.h>
#include<string.h>
int dice[7];
int movedice(char oper);
int main() {
    for (int i = 0; i < 7; i++) {
        dice[i] = i ;
    }
    char operin[100];
    int check = 0;
    scanf_s("%s", operin, sizeof(operin));
    for (int i = 0; i < strlen(operin); i++)
    {
        check = check + movedice(operin[i]);
        if (i == strlen(operin) - 1 && check == 0) {
            printf("%d", dice[1]);
            
        }
        else if (i == strlen(operin) - 1) {
            printf("wrong!");
        }
    }
    return 0;
}
void movediceswap(int *dice,int fw,int bw) {
    *(dice + fw) = *(dice + bw);
}

int movedice(char oper) {
    int* p1;
    switch (oper) {
    case 'F':
        movediceswap(dice, 0, 5);
        movediceswap(dice, 5, 6);
        movediceswap(dice, 6, 2);
        movediceswap(dice, 2, 1);
        movediceswap(dice, 1, 0);
        return 0;
        break;

    case 'B':
        movediceswap(dice, 0, 5);
        movediceswap(dice, 5, 1);
        movediceswap(dice, 1, 2);
        movediceswap(dice, 2, 6);
        movediceswap(dice, 6, 0);
        return 0;
        break;
    case 'R':
        movediceswap(dice, 0, 1);
        movediceswap(dice, 1, 3);
        movediceswap(dice, 3, 6);
        movediceswap(dice, 6, 4);
        movediceswap(dice, 4, 0);
        return 0;
        break;
    case 'L':
        movediceswap(dice, 0, 1);
        movediceswap(dice, 1, 4);
        movediceswap(dice, 4, 6);
        movediceswap(dice, 6, 3);
        movediceswap(dice, 3, 0);
        return 0;
        break;
    case 'C':
        movediceswap(dice, 0, 5);
        movediceswap(dice, 5, 3);
        movediceswap(dice, 3, 2);
        movediceswap(dice, 2, 4);
        movediceswap(dice, 4, 0);
        return 0;
        break;
    case 'D':
        movediceswap(dice, 0, 5);
        movediceswap(dice, 5, 4);
        movediceswap(dice, 4, 2);
        movediceswap(dice, 2, 3);
        movediceswap(dice, 3, 0);
        return 0;
        break;
    default:
        return 1;
    }
}