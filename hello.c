#include <stdio.h>

#define FPATH_NAME "./hello.txt"

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char *str = "hello world";

	fp = fopen(FPATH_NAME, "a+");
	fprintf(fp, "%s", str);

	return 0;
}
