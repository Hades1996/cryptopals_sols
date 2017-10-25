#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc > 2)
	{
		puts("Indique un solo argumento");
	} else if (argc < 2) {
		puts("Debe indicar un argumento");
	} else {
		char const *hexstr = argv[1];
		puts("Valor hexadecimal inicial: ");
		puts(hexstr);
		int i = 0;
		while((hexstr[i]>47 && hexstr[i]<58) || (hexstr[i]>96 && hexstr[i]<103)){
			putchar(hexstr[i]);
			if (hexstr[i]>47 && hexstr[i]<58)
			{
				printf(" Int: %i\n", hexstr[i]-'0');
			}
			if (hexstr[i]>96 && hexstr[i]<103)
			{
				printf(" Int: %i\n", (hexstr[i]-'a')+10);
			}

			i++;
		}
	}
	return 0;
}

unsigned char low_half(int hex){
	return (hex & 0xF);
}
int how_many_zeroes(char hex){
	return (hex & 0xF);
} 