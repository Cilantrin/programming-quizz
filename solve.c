#include <stdio.h>

int main()
{
  printf("This is a simple calculator!\n");
  printf("Available operations:\n- addition(1)\n- substraction(2)\n- multiplication(3)\n");
  printf("Enter your desired operation (type 1-3): ");
  int operation;
  scanf("%d", &operation);

  float num1, num2, result;

  if (operation != 1 & operation != 2 & operation != 3)
  {
    printf("Sorry, invalid operation.\n");
    return 1;
  }

  printf("Enter the two numbers\n");
  printf("Enter number 1: ");
  scanf("%f", &num1);
  printf("Enter number 2: ");
  scanf("%f", &num2);

  if (operation == 1)
  {
    result = num1 + num2;
    printf("Result: %.2lf\n", result);
  }
  else if (operation == 2)
  {
    result = num1 - num2;
    printf("Result: %.2lf\n", result);
  }
  else
  {
    result = num1 * num2;
    printf("Result: %.2lf\n", result);
  }

  return 0;
}
