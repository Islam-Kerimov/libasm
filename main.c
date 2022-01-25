#include "libasm.h"
#include <stdio.h>

void check_strlen(void)
{
    printf("============================================\n");
	printf("================ ft_strlen =================\n");
	printf("============================================\n\n");
    char *sorc = "";

    printf("----------------------------\n");
    printf("example: |%s|\n", sorc);
    printf("strlen:    |%lu|\n", strlen(sorc));
    printf("ft_strlen: |%lu|\n", ft_strlen(sorc));
    printf("\n");

    char *sorc2 = "hello, world!";

    printf("----------------------------\n");
    printf("example: |%s|\n", sorc2);
    printf("strlen:    |%lu|\n", strlen(sorc2));
    printf("ft_strlen: |%lu|\n", ft_strlen(sorc2));
    printf("\n");

    char *sorc3 = "hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world!";

    printf("----------------------------\n");
    printf("example: |%s|\n", sorc3);
    printf("strlen:    |%lu|\n", strlen(sorc3));
    printf("ft_strlen: |%lu|\n", ft_strlen(sorc3));
    printf("\n");
}

void check_strcpy(void)
{
    printf("============================================\n");
	printf("================ ft_strcpy =================\n");
	printf("============================================\n\n");
    char dest[1024];
    bzero(dest, 1);
    char *sourc = "";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dest);
    printf("2: |%s|\n", sourc);
    printf("strcpy:    |%s|\n", strcpy(dest, sourc));
    printf("ft_strcpy: |%s|\n", ft_strcpy(dest, sourc));
    printf("\n");

    bzero(dest, 1);
    sourc = " ";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dest);
    printf("2: |%s|\n", sourc);
    printf("strcpy:    |%s|\n", strcpy(dest, sourc));
    printf("ft_strcpy: |%s|\n", ft_strcpy(dest, sourc));
    printf("\n");

    bzero(dest, 1);
    sourc = "\127jfgjfgnhfg";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dest);
    printf("2: |%s|\n", sourc);
    printf("strcpy:    |%s|\n", strcpy(dest, sourc));
    printf("ft_strcpy: |%s|\n", ft_strcpy(dest, sourc));
    printf("\n");


    bzero(dest, 1);
    sourc = "12345";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dest);
    printf("2: |%s|\n", sourc);
    printf("strcpy:    |%s|\n", strcpy(dest, sourc));
    printf("ft_strcpy: |%s|\n", ft_strcpy(dest, sourc));
    printf("\n");

    bzero(dest, 1);
    sourc = "hello, world!";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dest);
    printf("2: |%s|\n", sourc);
    printf("strcpy:    |%s|\n", strcpy(dest, sourc));
    printf("ft_strcpy: |%s|\n", ft_strcpy(dest, sourc));
    printf("\n");

    bzero(dest, 1);
    sourc = "hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world!";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dest);
    printf("2: |%s|\n", sourc);
    printf("strcpy:    |%s|\n", strcpy(dest, sourc));
    printf("ft_strcpy: |%s|\n", ft_strcpy(dest, sourc));
    printf("\n"); 
}

void check_strcmp(void)
{
    printf("============================================\n");
	printf("================ ft_strcmp =================\n");
	printf("============================================\n\n");
    char *dst = "";
    char *src = "";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst);
    printf("2: |%s|\n", dst);
    printf("strcmp:    |%d|\n", strcmp(dst, src));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst, src));
    printf("\n");

    char *dst2 = " ";
    char *src2 = " ";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst2);
    printf("2: |%s|\n", src2);
    printf("strcmp:    |%d|\n", strcmp(dst2, src2));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst2, src2));
    printf("\n");

    char *dst3 = " ";
    char *src3 = "";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst3);
    printf("2: |%s|\n", src3);
    printf("strcmp:    |%d|\n", strcmp(dst3, src3));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst3, src3));
    printf("\n");

    char *dst4 = "";
    char *src4 = " ";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst4);
    printf("2: |%s|\n", src4);
    printf("strcmp:    |%d|\n", strcmp(dst4, src4));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst4, src4));
    printf("\n");

    char *dst5 = "hello";
    char *src5 = "hello";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst5);
    printf("2: |%s|\n", src5);
    printf("strcmp:    |%d|\n", strcmp(dst5, src5));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst5, src5));
    printf("\n");

    char *dst6 = "abc";
    char *src6 = "abj";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst6);
    printf("2: |%s|\n", src6);
    printf("strcmp:    |%d|\n", strcmp(dst6, src6));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst6, src6));
    printf("\n");

    char *dst7 = "12345";
    char *src7 = "123";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst7);
    printf("2: |%s|\n", src7);
    printf("strcmp:    |%d|\n", strcmp(dst7, src7));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst7, src7));
    printf("\n");

    char *dst8 = "1234567890";
    char *src8 = "1111111111";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst8);
    printf("2: |%s|\n", src8);
    printf("strcmp:    |%d|\n", strcmp(dst8, src8));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst8, src8));
    printf("\n");

    char *dst9 = "hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world!";
    char *src9 = "hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world! \n\
    hello, world! hello, world! hello, world! hello, world! hello, world!";

    printf("----------------------------\n");
    printf("example:\n");
    printf("1: |%s|\n", dst9);
    printf("2: |%s|\n", src9);
    printf("strcmp:    |%d|\n", strcmp(dst9, src9));
    printf("ft_strcmp: |%d|\n", ft_strcmp(dst9, src9));
    printf("\n");
}

void check_write(void)
{
    printf("============================================\n");
	printf("================ ft_write ==================\n");
	printf("============================================\n\n");

    printf("----------------------------\n");
    printf("example:\n");
    printf("fd = 1, *buf = \"Hello World !\", size = 13\n");
    printf("\nwrite return    : |%zd|\n", write(1, "Hello World !", 13));
    printf("\nft_write return : |%zd|\n\n", ft_write(1, "Hello World !", 13));
    printf("\n");

    printf("----------------------------\n");
    printf("example:\n");
    printf("fd = -7, *buf = \"libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test\", size = 271\n");
    printf("\nwrite return    : |%zd|\n", write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
    printf("\nft_write return : |%zd|\n\n", ft_write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
    printf("\n");

    printf("----------------------------\n");
    printf("example:\n");
    printf("fd = 1, *buf = \"\", size = 1\n");
    printf("\nwrite return    : |%zd|\n", write(1, "", 1));
    printf("\nft_write return : |%zd|\n\n", ft_write(1, "", 1));
    printf("\n");

    printf("----------------------------\n");
    printf("example:\n");
    printf("fd = 1, *buf = \"\", size = 2\n");
    printf("\nwrite return    : |%zd|\n", write(1, "", 2));
    printf("\nft_write return : |%zd|\n\n", ft_write(1, "", 2));
    printf("\n");

    printf("----------------------------\n");
    printf("example:\n");
    printf("fd = 999, *buf = \"Hello World !\", size = 13\n");
    printf("\nwrite return    : |%zd|\n", write(999, "Hello World !", 13));
    printf("\nft_write return : |%zd|\n\n", ft_write(999, "Hello World !", 13));
    printf("\n");

    printf("----------------------------\n");
    printf("example:\n");
    printf("fd = 1, *buf = \"Hello World !\", size = 0\n");
    printf("\nwrite return    : |%zd|\n", write(1, "Hello World !", 0));
    printf("\nft_write return : |%zd|\n\n", ft_write(1, "Hello World !", 0));
    printf("\n");
}

void check_read(void)
{
	char *buf;
    char *buf2;
    errno = 0;

    printf("============================================\n");
	printf("================ ft_read ===================\n");
	printf("============================================\n\n");

    printf("----------------------------\n");
    printf("example:\n");
    buf = (char *)calloc(255, sizeof(char));
    buf2 = (char *)calloc(255, sizeof(char));
    printf("\nread return    : |%li|\n", read(0, buf, 10));
    printf("\nft_read return : |%li|\n", ft_read(0, buf2, 10));
    bzero(buf, 255);
    bzero(buf2, 255);
    printf("\n");


    printf("----------------------------\n");
    printf("example:\n");
    buf = (char *)calloc(255, sizeof(char));
    buf2 = (char *)calloc(255, sizeof(char));
    printf("\nread return    : |%li|\n", read(0, buf, -1));
    printf("\nft_read return : |%li|\n", ft_read(0, buf2, -1));
    bzero(buf, 255);
    bzero(buf2, 255);
    printf("\n");

    int fd;
    int ret_read;

    printf("----------------------------\n");
    printf("example:\n");
    fd = open("ft_strcmp.s", O_RDONLY);
    ret_read = 0;
	ret_read = read(999, buf, 2000);
	buf[ret_read] = '\0';
    printf("|%s|\nread return    : |%d|\n", buf, ret_read);
    if (ret_read == -1)
        fprintf(stderr, "errno = %i\n", errno);
    close(fd);
    fd = open("ft_write.s", O_RDONLY);
    ret_read = 0;
	ret_read = ft_read(999, buf, 2000);
	buf[ret_read] = '\0';
    printf("|%s|\nft_read return : |%d|\n", buf, ret_read);
    if (ret_read == -1)
        fprintf(stderr, "errno = %i\n", errno);
    printf("\n");
    close(fd);

    printf("----------------------------\n");
    printf("example:\n");
    fd = open("ft_strlen.s", O_RDONLY);
    ret_read = 0;
	ret_read = read(-7, buf, 2000);
	buf[ret_read] = '\0';
    printf("|%s|\nread return    : |%d|\n", buf, ret_read);
    if (ret_read == -1)
        fprintf(stderr, "errno = %i\n", errno);
    close(fd);
    fd = open("ft_write.s", O_RDONLY);
    ret_read = 0;
	ret_read = ft_read(-7, buf, 2000);
	buf[ret_read] = '\0';
    printf("|%s|\nft_read return : |%d|\n", buf, ret_read);
    if (ret_read == -1)
        fprintf(stderr, "errno = %i\n", errno);
    printf("\n");
    close(fd);
}

void check_strdup(void)
{
    printf("============================================\n");
	printf("================ ft_strdup =================\n");
	printf("============================================\n\n");
	
    char *sorc = "";

    printf("----------------------------\n");
    printf("example: |%s|\n", sorc);
    printf("strdup:    |%s|\n", strdup(sorc));
    printf("ft_strdup: |%s|\n", ft_strdup(sorc));
    printf("\n");

    char *sorc2 = "hello, world!";

    printf("----------------------------\n");
    printf("example: |%s|\n", sorc2);
    printf("strdup:    |%s|\n", strdup(sorc2));
    printf("ft_strdup: |%s|\n", ft_strdup(sorc2));
    printf("\n");

    char *sorc3 = "hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world! \n\
        hello, world! hello, world! hello, world! hello, world! hello, world!";

    printf("----------------------------\n");
    printf("example: |%s|\n", sorc3);
    printf("strdup:    |%s|\n", strdup(sorc3));
    printf("ft_strdup: |%s|\n", ft_strdup(sorc3));
    printf("\n");
}

int main ()
{   
    // check_strlen();
    // check_strcpy();
    // check_strcmp();
    // check_write();
    check_read();
    // check_strdup();

    return (0);
}