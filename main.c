#include <stdio.h>
#include "Stack.h"

int main()
{
	stack* stk1;

	elem_t op = 0;
	while( scanf(elem_out, &op) == 1)
	{

		if( op == 1)
		{
			elem_t x = 0;

			scanf( elem_out, &x);

			StackPush( stk1, x);
		} else
		if( op == 2)
		{
			elem_t x = 0;
			StackPop( stk1, &x);
			printf( elem_out, x);
			printf( "\n");

		} else
		if( op == 3)
		{
			Printf_stk( stk1);
					
		} else
		if( op == 4)
		{
			StackDtor( stk1);
		} else
		if( op == 0)
		{
			size_t n = 0;
			scanf( "%lu", &n);

			StackCtor( &stk1, n);
		}
	}
	
	return 0;
}