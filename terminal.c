#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int terminal(char *src){
    printf("%s",src);
    system(src);

    return 0;
}

int choises(int c, char *url){
    char cat[100];
    switch(c){
        case 1:
        terminal(url);break;
    }
}

int main(int argc, char **argv){
    int choise;
    char url[100];
    printf("Choose:\n1.nslookup\n2.whois\n3.whatweb\n4.theHervester\n5.dig\n6.wafw00f\n");
    scanf("%d",&choise);
    printf("Give url: ");
    scanf("%s",url);

    choises(choise, url);

    terminal(url);


    return 0;
}