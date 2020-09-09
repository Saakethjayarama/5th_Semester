# program to demonstrate break;
while True:
    line = input('> ')
    if line == 'done':
        break
    print(line)
    print('Done!')

while True:
    line = input('> ')
    if line[0] == '#':
        continue
    if line == 'done':
        break
    print(line)
print('Done!')
