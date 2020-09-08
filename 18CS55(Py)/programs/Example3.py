# Factors of a number

n = int(input('Enter n'))

print(n)
for i in range(1, int(n/2)):
    if n % i == 0:
        print(i)
