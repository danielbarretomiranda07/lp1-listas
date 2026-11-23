n1 = int(input("Entre com n1: "))
n2 = int(input("Entre com n2: "))

if (n1 < n2):
    for i in range(n1+1, n2):
        print(i, " ", end="")
else:
    for i in range(n2+1, n1):
        print(i, " ", end="")
print("")
