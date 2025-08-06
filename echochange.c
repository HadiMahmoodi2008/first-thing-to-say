#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int contains_space(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
    if (isspace(str[i])) {
        
    }
}
}

int contains_digit(const char *str)
{
    while (*str) {
        if (isdigit(*str)) {
            return 1;
        }
        str++;
    }
    return 0;
}

int main(int argc, char *argv[]){//123 + 456

    for(int i = 1; i < argc; i++)
    {
        //char *space = strpbrk(argv[i], ' ');
        char *found = strpbrk(argv[i], "+-*/");
        if (found && contains_digit(argv[i]) && !strchr(argv[i], ' ')) 
        {
            size_t len_left = found - argv[i];
            char left_part[100];
            strncpy(left_part, argv[i], len_left);
            left_part[len_left] = '\0';

            char op = *found;

            char right_part[100];
            strncpy(right_part, found + 1, sizeof(right_part) - 1);
            right_part[sizeof(right_part) - 1] = '\0';

            int left_num = atoi(left_part);
            int right_num = atoi(right_part);
            int result = 0;
            int valid = 1;

            switch(op) {
                case '+': result = left_num + right_num; break;
                case '-': result = left_num - right_num; break;
                case '*': result = left_num * right_num; break;
                case '/': 
                    if (right_num != 0) result = left_num / right_num;
                    else { printf("Division by zero is aint right buddy.+\n"); valid = 0; }
                    break;
                default: valid = 0; break;
            }
            if (valid) {
                printf("%d\n", result);
            }
        }
        else 
        {
        printf("%c", argv[i]);
        }
    }

    return 0;
}