#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/morse_ascii_data_struct.h"
#include "../include/morse_ascii.h"
char morse_code[]={"--._---_---_-.._----_----_---_-..._----_--._..-_-.--_..."};
	
void morse_code_ascii(char morse_code[]){

	cur_node=data_struct();
	for(int i=0;i<strlen(morse_code);i++){
		switch(morse_code[i]){
			case '-': 
					cur_node=cur_node->right;
					break;
			case '.':
					cur_node=cur_node->left;
					break;
			case '_': printf("%c", cur_node->data);
					cur_node=data_struct();
					break;
		}
		
	}
	//printf("%s",argv[1]);
	printf("\n") ;
}
int main(int argc, char *argv[]) 
{ 
	
	//int i=0;
	//char* morse_code=argv[1];
	//char ascii_var[]="VISHAL ISAE SUPAERO";
	//morse_code_ascii(morse_code);
	morse_code_ascii(argv[1]);
	//ascii_code_morse(ascii_var);
	exit(0);
	return 0; 
}
