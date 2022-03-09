#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void red()
{
    printf("\033[1;31m");
}
void yellow()
{
    printf("\033[1;33m");
}
void reset()
{
    printf("\033[0m");
}
void green()
{
    printf("\033[0;32m");
}
void blue()
{
    printf("\033[0;34m");
}
typedef struct chall
{
    char inp[0x40];
    int flag;
} chall;

void banner()
{
    red();
    puts("=============== 🚩 Welcome to Technex CTF 2022 🚩===============");
    reset();
    puts("");
    blue();
    puts("💭💭In this challenge you have to somehow change the variable flag which has been hardcoded as 0 💭💭");
    reset();
    puts("");
    green();
    printf("[?] Input: ");
    reset();
    return;
}

int main(int argc, char const *argv[])
{
    banner();
    chall chall_struct;
    chall_struct.flag = 0;
    fgets(&chall_struct, 0x100, stdin);
    if (chall_struct.flag != 0)
    {
        FILE *fp = fopen("./flag.txt", "r");
        char flag[0x100];
        fgets(flag, 0x40, fp);
        green();
        printf("[*] Flag: %s\n", flag);
        reset();
        exit(0);
    }
    else
    {
        green();
        puts("[!] Flag has'nt changed try again");
        reset();
        exit(1);
    }

    return 0;
}
