#include "main.h"
/**
 *  * _isupper -  function that checks for uppercase character.
 *   *
 *    * Return: returns 0 or 1
 *     *
 *      * @c: function parameter
 *       *
 *        * Auth: Ojo Ayanfe
 *         */
int _isupper(int c)
{
		int boolean;

			if (c >= 65 && c <= 90)
					{
								boolean = 1;
									}
				else
						{
									boolean = 0;
										}
					return (boolean);
}
