n = int(input('Enter the number'))
factorial = 1
while(n > 1):
    factorial = factorial * n
    n = n-1

print('Factorial is {}'.format(factorial))
