  #include <stdio.h>
    int main(int argc, const char *argv[]) {
    int i, j;
    for(i=0;i<5;puts(""),++i) {
    int n=0;
    for(j=5;j>i;n+=2*(j--)) {
    if(j>i+1) {
    printf("%d*",2*j);
    }
    else {
    printf("%d ",2*j);
    }
    } printf("=%d",n);
    } return(0);
    }
