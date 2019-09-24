#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/morse_ascii_data_struct.h"
#include "../include/ascii_morse.h"
//char morse_code[]={"--. --- --- -.. ---- ---- --- -... ---- --. ..- -.-- ..."};
void ascii_code_morse(char var[])
{
	morse_t m_table[] = { {".-", 'A'},
                        {"-...", 'B'},
                        {"-.-.", 'C'},
                        {"-..",  'D'},
						{".",    'E'},
						{"..-.", 'F'},
						{"--.",  'G'},
						{"....", 'H'},
						{"..",   'I'},
						{".---", 'J'},
						{"-.-",  'K'},
						{".-..", 'L'},
						{"--",   'M'},
						{"-.",   'N'},
						{"---",  'O'},
						{".--.", 'P'},
						{"--.-", 'Q'},
						{".-.",  'R'},
						{"...",  'S'},
						{"-",    'T'},
						{"..-",  'U'},
						{"...-", 'V'},
						{".--",  'W'},
						{"-..-", 'X'},
						{"-.--", 'Y'},
						{"--..", 'Z'},
						{"----", '_'}};
	char output[200]="";
	for (int i=0;i<strlen(var);i++)
	{
		for (int j=0;j<27;j++){
			if(var[i]==m_table[j].ascii){
				strcat(output,m_table[j].morse);
			}
		}
	}
	printf("%s",output);
	//printf("%s", m_table[26].morse);
	//printf("%s", var);
}
int main(int argc, char *argv[]) 
{ 
	
	//int i=0;
	//char* morse_code=argv[1];
	//char ascii_var[]="VISHAL ISAE SUPAERO";
	//morse_code_ascii();
	ascii_code_morse(argv[1]);
	exit(0);
	return 0; 
}
