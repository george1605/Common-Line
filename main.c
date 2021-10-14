#include <stdio.h>
#include "string.h"
#include <stdlib.h>

char cont[216];

int main()
{
    printf("> ");
    while(scanf("%s",cont)){
      if(!strcmp(cont,"exit()")){
        break;

      }else if(!strcmp(cont,"help()")){
        printf(" Commands :");
        printf("\n * help()");
        printf("\n * exit()");
        printf("\n * vers()");
        printf("\n * native commands\n");
      }else if(!strcmp(cont,"vers()")){
        printf("Common Line v0.1\n");

      }else if(!strcmp(cont,"taskmgr()")){
        #ifdef _WIN32
          system("start taskmgr");
        #endif
        #ifdef __linux__
          ///idk
        #endif
      }else if(!strcmp(cont,"sleep()")){
        system("shutdown -s -t 10");
      }else if(!strcmp(cont,"firefox()")){
        #ifdef _WIN32
          system("start firefox");
        #endif
        #ifdef __linux__
          system("firefox www.google.com &");
        #endif // __linux__
      }else{
       system(cont);
      }

      printf("> ");
    }
    putc('\n',stdout);
    return 0;
}
