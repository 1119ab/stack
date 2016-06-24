#include <stdio.h>
    int p,q,a,b,c;
	int stack[100];
	void push(int a){
		stack[p]=a;
		p++;}	
int pop(){int a;
	a=stack[p-1];
	p--;    
	c=a+b;
return a;}
void add () {
	a=pop();
	b=pop();
	c=b+a;
    push(c);}
void minus (){	
	a=pop();
    b=pop();
    c=b-a;
    push(c);}
void cross (){	
	a=pop();
	b=pop();
	c=a*b;
	push(c);}
void waru (){
	a=pop();
	b=pop();
	c=b/a;
	push(c);}
int main(){
char m[10];
for(q=0;q >= 0;q++){
	scanf("%s",m);
    switch (*m) {
    	case '+' : add();
    	break;
    	case '-' : minus();
    	break;
    	case '*' : cross();
    	break;
    	case '/' : waru();
    	break;
    	case '=' : printf("%d\n",pop());
    	return 0;
    	break;
    	default : push(atoi(m));
        break;}}}

