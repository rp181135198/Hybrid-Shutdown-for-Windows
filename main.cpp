#include<stdlib.h>
#include<stdio.h>
int main()
{
    char input;
    system("echo Hybrid-Shutdown-for-Windows");
    system("echo ATTENTION");
    system("echo This will shutdown your Computer and prepare it for fast startup.");
    system("echo Do you want to Proceed? (Y/N) : ");
    input=getchar();
    if(input=='Y'||input=='y')
        system("shutdown /s /hybrid /t 00");
    return 0;
}
