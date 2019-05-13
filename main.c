#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time;
    char option,command[40];
    system("cls");
    system("echo ////////////////////////////////////////////////////////////////////////////");
    system("echo //                                                                        //");
    system("echo //                      HYBRID SHUTDOWN FOR WINDOWS                       //");
    system("echo //                     *****************************                      //");
    system("echo // Repository: https://github.com/rp181135198/Hybrid-Shutdown-for-Windows //");
    system("echo // Developed by: Ramesh Prasad                                            //");
    system("echo // email: rp181135198@gmail.com                                           //");
    system("echo // YouTube: https://www.youtube.com/c/CodeWar                             //");
    system("echo //                                                                        //");
    system("echo ////////////////////////////////////////////////////////////////////////////");
    printf("\n\n                              .::ATTENTION::.\n\n");
    system("echo This will shutdown your Computer and prepare it for fast startup.");
    printf("\nDo you want to Proceed? (Y/N) : ");
    option=getchar();
    if(option=='Y' || option=='y')
    {
        system("echo Enter time in seconds : ");
        scanf("%d",&time);
        sprintf(command,"shutdown /s /hybrid /t 0%d",time);
        system(command);
        system("exit");
    }
    else if(option=='N' || option=='n')
    {
        system("exit");
    }
    else
    {
        system("echo Wrong Choice!!!");
        system("echo Try Again...");
        system("echo Press any key to exit...");
        option=getchar();
        if(getchar())
            system("exit");
    }
    return 0;
}
