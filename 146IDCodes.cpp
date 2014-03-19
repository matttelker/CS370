#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;


int main() {
    char s[100];
	int f;

    // Scanning input for a string of characters, stopping at first white space,
    // and ensuring that it is not "#"
	while(scanf("%s",s) && strcmp(s,"#")){
		f = 1;
	 
	    // Rearranges elements in the range of s in the next greater permutation
		while(next_permutation(s,s+strlen(s))){
		 
		    // Outputs the successor and breaks out of the loop
			printf("%s\n",s);
			f = 0;
			break;
		}

		// Prints no successor if no successor is found
		if(f) printf("No Successor\n");
	}

return 0;
}