#include <stdio.h>
    int p=0;
	int stack[100];

void push(int a){
		stack[p]=a;
		p++;}	

int pop(){int a;
	a=stack[p-1];
	p--;    
	return a;
    }

void add () {
    push(pop()+pop());
    }

void minus (){int a,b;
	a=pop();
	b=pop();
    push(b-a);
    }

void cross (){	
	push(pop()*pop());
    }

void waru (){int a,b;
	a=pop();
	b=pop();
	push(b/a);
    }

int main(){
	char m[10];
	while(1){ 
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
	    	default : push(atoi(m));
	        break;
	    }
	}
}

