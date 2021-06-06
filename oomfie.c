/*

oomfie - oomfie
oomfie'd by Arsalan Kazmi

*/

/* Header declaration */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
void sleepy(int seconds) { Sleep(seconds / 1000); 
#else
#include <unistd.h>
void sleepy(int seconds) { sleep(seconds); }
#endif


int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        if (!strcmp(argv[1], "--version"))
        {
            printf("oomfie version 1.2847-oomfie-1\n");
        }
        printf("searching for target %s\n", argv[1]);
        sleepy(2);
        printf("target found: oomfie locked on\n");
        printf("establishing oomfie connection\n");
        sleepy(4);
        printf("connection established\n");
        printf("sending oomfie to target\n");
        sleepy(1);
        printf("oomfie success\n");
    }
    else
    {
        printf("oomfie\n");
    }
}