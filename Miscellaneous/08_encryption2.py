# Sample input
string = 'helio'
array = [1, 2, 3, 4, 5]

# Driver Program
for i in range(0, len(string)):  
    for j in range(0, array[i]): 
        print(string[i], end='')   # end = '' means no new-line character


