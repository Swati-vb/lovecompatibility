#include <stdio.h>

int main() {
    char name1[20], name2[20];
    int score = 0;

    printf("Enter your name: ");
    scanf("%s", name1);
    printf("Enter your partner's name: ");
    scanf("%s", name2);

    for (int i = 0; name1[i] != '\0'; i++) {
        for (int j = 0; name2[j] != '\0'; j++) {
            score += (int)name1[i] * (int)name2[j];
        }
    }

    printf("\n");
    printf("Love Compatibility Score:\n");
    printf("%s and %s: %d\n", name1, name2, score);

    if (score < 100000) {
        printf("Sorry, the compatibility score is too low. Maybe you're better off as friends.\n");
    } else if (score < 500000) {
        printf("There's potential, but it might take some work to make it work.\n");
    } else if (score < 1000000) {
        printf("You two are meant to be together! Keep the love alive.\n");
    } else {
        printf("Wow, the love between you two is off the charts! You're soulmates.\n");
    }
     printf("    **     **\n");
   printf("  **  ** **  **\n");
   printf(" **     **     **\n");
   printf("**              **\n");
   printf("**              **\n");
   printf(" **            **\n");
   printf("  **          **\n");
   printf("    **      **\n");
   printf("      **  **\n");
   printf("        **\n");

    return 0;
}
