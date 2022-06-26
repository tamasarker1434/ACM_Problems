#include <stdio.h>

char complement(char tempVer){
	switch(tempVer){
		case 'A':
			return 'T';
		case 'T':
			return 'A';
		case 'C':
			return 'G';
		default:
			return 'C';
	}
}

int main() {
    // Write C code here
    int t=0,n=0,arrCount=0;
    scanf("%d", &t);
    scanf("%d", &n);
    char dnaStr[t][n+1];
    if(t>0 && t<=100 && n>0 && n<=100){        
    	for(int i=0; i<t;i++){
    	char tempStr[n+1];
	    		char tempVer;
	    		for(int j=0;j<n;j++){
	    			scanf("%c", &tempVer);
	    			tempStr[j]=complement(tempVer);	    			
	    		}
	    		dnaStr[i][arrCount];
	    	arrCount++;
    	}
    }
    for(int i=0;i<t;t++){
    	printf("%s\n", dnaStr+i);
      }  
    return 0;
}