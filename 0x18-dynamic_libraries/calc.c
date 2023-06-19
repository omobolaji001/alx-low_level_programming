int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - add value a and b
 * @a:  first number
 * @b: second number
 *
 * Return: returns the sum of the two numbers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts second number from the first number
 * @a: first number
 * @b: second number
 *
 * Return: return a - b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the product of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides a by b
 * @a: first number
 * @b: second number
 *
 * Return: returns the division of two numbers
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - calculates the modulus of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the remainder when b divides a.
 */

int mod(int a, int b)
{
	return (a % b);
}
