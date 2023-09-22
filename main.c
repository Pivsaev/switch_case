#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int op;
    printf("What operation: \n");
    printf("1)Сложить\n");
    printf("2)Умножить\n");
    printf("3)Разность\n");
    printf("4)Частное\n");
    scanf("%d", &op);
    switch (op){
        case 1:
            op = a+b;
            printf("%d\n", op);break;
        case 2:
            op = a*b;
            printf("%d\n", op);break;    
        case 3:
            op = a-b;
            printf("%d\n", op);break;
        case 4:
            op = a/b;
            printf("%d\n", op);break;
        default:
            printf("Еще не сделал))\n");
    }
}