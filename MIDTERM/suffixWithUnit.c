/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include<math.h>
void getfirstNchars(char kq[], char s[], int N) {
    int i = 0;
    while (i < N) 
   {
      kq[i] = s[i];
      i++;
   }
   kq[i] = '\0';
}

void getlastNchars(char kq[], char s[], int N) {
    int c = strlen(s) - N ;
    int i = 0;
    while (i < N) 
   {
      kq[i] = s[i+c];
      i++;
   }
   kq[i] = '\0';
}

char* suffixWithUnit (char kq[], double number) {
    char str[100];
    sprintf(str, "%.0lf", number);
    char first[5];
    char last[100];
    char suffix[10] = "";
    int len;
    if (strlen(str) > 30) {
        len = 30;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Geop");
    }
    else if (strlen(str) > 27) {
        len = 27;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Bronto");
    }
    else if (strlen(str) > 24) {
        len = 24;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Yotta");
    }
    else if (strlen(str) > 21) {
        len = 21;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Zetta");
    }
    else if (strlen(str) > 18) {
        len = 18;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Exa");
    }
    else if (strlen(str) > 15) {
        len = 15;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Peta");
    }
    else if (strlen(str) > 12) {
        len = 12;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Tera");
    }
    else if (strlen(str) > 9) {
        len = 9;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Giga");
    }
    else if (strlen(str) > 6) {
        len = 6;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Mega");
    }
    else if (strlen(str) > 3) {
        len = 3;
        getfirstNchars(first, str, strlen(str)-len);
        getlastNchars(last, str, len);
        strcat(suffix, "Kilo");
    }
    else if (strlen(str) > 0) {
        getlastNchars(kq, str, strlen(str));
        return kq;
    }
    
    if (strlen(first) != 0) {
        strcat(kq,first);
    }
    if (strlen(last) != 0) {
        strcat(kq,".");
        strcat(kq,last);
    }
    if (strlen(suffix) != 0) {
        strcat(kq," ");
        strcat(kq,suffix);
    }
    return kq;
}

int main()
{
    double number;
    printf("Type the number: \n");
    scanf("%lf",&number);
    char kq[100] = "";
    char str[100] = "";
    suffixWithUnit(kq, number);
    printf("%s",kq);
    return 0;
}
