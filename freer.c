#include "monty.h"
/**
 *freer - frees any allocated space and closes a monty file
 */
void freer(void)
{
	if (mon.buff)
		free(mon.buff);
	if (mon.args)
		free(mon.args);
	if (mon.stack)
		free_dlistint(mon.stack);
	if (mon.file)
		fclose(mon.file);
}
© 2022 GitHub, Inc.
Terms
Privacy
Security
[A[C[C[C[C[C[A[C[C[C[C[A[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[[A[C
