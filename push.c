#include <stdio.h>

int main(){

    int p,q,m;
	int stack[100];
	void push(int a){
		stack[p]=a;
		p++;
	}
	
int pop(){int a;
	a=stack[p-1];
	p--;    
return a;
}
void add (int a, int b) {
	int c;
	a=pop();
	b=pop();
	c=a+b;
    push(c);
    return 0;
}
for(q=0;q >= 0;q++){
	scanf("%d",&m);
	if(m == 0){printf("%d\n",pop()); return 0;}
	else if(m == 10){add();}
    else(push(m));}


}