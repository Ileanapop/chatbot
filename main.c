#include <stdio.h>

int main() {
    printf("Let's chat\n");
    char userInput[20];
    gets(userInput);
    printf("%s to you too. I am Hall, what is your first name?\n",userInput);
    char name[20];
    scanf("%s",name);
    printf("Oh hi, %s. How old are you?\n",name);
    int age;
    scanf("%d",&age);
    printf("Wow, %d is quite something\n",age);
    gets(userInput);
    gets(userInput);
    printf("Sorry, not sure what this \"%s\" means. Bye",userInput);
    return 0;
}