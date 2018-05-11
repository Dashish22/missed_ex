#include <stdio.h>
int main(void)
{
	int i_1, i_2, i_3,
	    j_1, j_2, j_3,
	    k_1, k_2, k_3; 
	i_1 = 365;
	i_2 = 12258;
	i_3 = 996;
	j_1 = 7;
	j_2 = 23;
	j_3 = 4;
	k_1 = i_1 + j_1 - (i_1 % j_1);
	k_2 = i_2 + j_2 - (i_2 % j_2);
	k_3 = i_3 + j_3 - (i_3 % j_3);
    printf("%i\n%i\n%i\n", k_1, k_2, k_3);
    return 0;
}
