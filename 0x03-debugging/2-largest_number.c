#include "main.h"
/**
* largest_number - finds the greatest of three numbers.
* @N:the first integer.
* @M:the second integer.
* @O:the third integer.
* Return:Largest number.
*/
int largest_number(int N, int M, int O)
{
int largest;
if (N > M && N > O)
{
largest = N;
}
else if (N > M && O > N)
{
largest = O;
}
else if (M > O)
{
largest = M;
}
else
{
largest = O;
}
return (largest);
}
