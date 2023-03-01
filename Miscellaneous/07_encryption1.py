# Inputs
text = "a1b2c2"
letters, numbers = [], []

for i in range(len(text)):
    temp = ""
    # Checking for letters
    if text[i].isalpha():
        letters.append(text[i])

    # Checking for numbers
    elif text[i].isdigit():
        # Create a temp string and get all the numbers
        try:
            while text[i].isdigit():
                temp = temp + text[i]
                i = i + 1
            numbers.append(int(temp))
        except IndexError:
            numbers.append(int(temp))
            break

# Printing out the result
for i in range(len(letters)):
    print(letters[i] * numbers[i], end="")
print()

