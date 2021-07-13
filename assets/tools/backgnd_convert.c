#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char name[50], command[100];
    printf("Use png files\nFile name: ");
    scanf("%s",&name);
    snprintf(command, sizeof(command),"grit %s -gB4 -mRtpf",name);
    system(command);

return 0;
}
