#include <stdio.h>
#include <string.h>
int main() {
 char command[10];
 printf("Enter Command (START / STOP): ");
 scanf("%s", command);
 if(strcmp(command, "START") == 0)
 printf("Robot Started\n");
 else if(strcmp(command, "STOP") == 0)
 printf("Robot Stopped\n");
 else
 printf("Invalid Command\n");
 return 0;
}
