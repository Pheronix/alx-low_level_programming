#include "main.h"


	/**
	* print_alphabet - print all alphabet in lowercase
	* Description: This function serves to print all alphabet in lowercase
	*/


	void print_alphabet(void) /**Print alphabet function */
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}

