#include <stdio.h>
#include <stdlib.h>

/* Reserve Memori for a Vector */
int * RMV (int n)
{
	int *v;
	v = (int *) malloc (n * sizeof (int) );
	if (!v) exit (1);
return v;
}

int
main (void)
{
	int n = 3;
	int *a, *b;
	a = RMV (n);
	b = RMV (n);

return 0;
}
