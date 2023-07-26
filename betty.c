/**
 * add_numbers - Adds two numbers.
 * @num1: The first number to be added.
 * @num2: The second number to be added.
 *
 * Return: The sum of num1 and num2.
 */
int add_numbers(int num1, int num2)
{
    return num1 + num2;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a = 5;
    int b = 10;
    int result;

    result = add_numbers(a, b);

    printf("The sum of %d and %d is: %d\n", a, b, result);

    return 0;
}

