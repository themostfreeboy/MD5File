#include <stdio.h>
#include <stdlib.h>
#include "md5_file.h"

int main()
{
	char filename[100];
	scanf_s("%s",filename,100);
	unsigned char md5[17];
	unsigned long f_size=md5_file_calc(filename,md5);
	printf("size(×Ö½Ú):%d\n",f_size);
	md5_file_print(md5);
	system("pause");
	return 0;
}