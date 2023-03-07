#include<stdlib.h>
int main(int argc,char**argv){
        int sum=0;
        if(argc>5)
                return 0;
        else
                for(int r=1;r<argc;r++){
                        sum=sum + atoi(argv[r]);
                }
        return sum;}

