# check if n is prime or not
n = int(input('Enter the number'))

state = False

for i in range(2, int(n/2)):
    if n % i == 0:
        state = True

if state:
    print('n is not a prime')
else:
    print('n is prime')
