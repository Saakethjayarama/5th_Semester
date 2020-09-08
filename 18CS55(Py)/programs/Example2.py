# factors

n = int(input('Enter the value of n'))

if n < 0:
    exit('Enter positive number')

factor = 1
while(n > 1):
    factor = factor * n
    n = n - 1
print(factor)
