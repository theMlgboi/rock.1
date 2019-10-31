#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
int number = atoi(argv[1]);
int choose = atoi(argv[2]);
int win= 0;
int out; 
int i;
for(i=0;i<number;i++){

win = paper(out);

printf("%d \n",win);
win=0;

}
return(0);
}
int paper(int choose){
int j=0;

int user = choose; 

int result;

int r = (rand()  % 2) +1;
if(user == r){
    result=3;
}else if(r==0 && user==1){
    result=1;
}else if(r==0 && user==2){
    result = 0;
}else if(r==1 && user==0){
    result=0;
}else if(r==1 && user==2){   
    result=1;
}else if(r==2 && user==0){     
    result = 1;
}else if(r==2 && user==1){  
    result=0;
}


return(result);
}    