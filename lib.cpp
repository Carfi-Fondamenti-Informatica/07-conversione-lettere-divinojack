#include "lib.h"
bool verifica(char a){
    int x;
    x=(int)a;
    if(x>=65 && x<=90 || x>=97 && x<=122) {
        return true;
    }
    else{
        return false;
    }
}
char lettera(char a){
    int x;
    x=(int)a;
    int y=0;
    if(x>=65 && x<=90){
        y=x+32;
    }else if(x>=97 && x<=122){
        y= x-32;
    }
    return y;
}
