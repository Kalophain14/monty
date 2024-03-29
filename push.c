#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int number, index = 0, flag = 0;

		if (bus.arg)
		{
			if (bus.arg[0] == '-')
				index++;
			for (; bus.arg[index] != '\0'; index++)
			{
				if (bus.arg[index] > 57 || bus.arg[index] < 48)
					flag = 1; }
			if (flag == 1)
			{ fprintf(stderr, "L%d: usage: push integer\n", counter);
				fclose(bus.file);
				free(bus.content);
				free_stack(*head);
				exit(EXIT_FAILURE); }}
		else
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }
		number = atoi(bus.arg);
		if (bus.lifi == 0)
			addnode(head, number);
		else
			addqueue(head, number);
	}
