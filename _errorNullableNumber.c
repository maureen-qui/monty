#include "monty.h"

/**
 * av
 */
void _errorNullableNumber(void)
{
	fprintf(stderr, "L%d: division by zero\n", appData->lineNumber);
}
