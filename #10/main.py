def solver(matriks):
    currentPos = 0
    res = 0
    for i in range(len(matriks)):
        res += matriks[currentPos][currentPos]
        currentPos += 1
    #part 2 -> (len-1, 0), (len-2, 1)
    currentPos = len(matriks) - 1
    aPos = 0
    for i in range(len(matriks)):
        res += matriks[currentPos][aPos]
        currentPos -= 1
        aPos += 1
    return res


#Main Program Ga perlu diutak-atik
#Fokus saja pada pembuatan logic pada function
#Input Output Gausah dipikir, format input dan output pasti benar sesuai solver
case = int(input())
result = []
for i in range(case):
    size = int(input())
    matriks = []
    for _ in range(size):
        row = input().split()
        row = [int(x) for x in row]
        matriks.append(row)
    result.append(solver(matriks))
    #print("Case #{} : {}".format(i+1,solver(matriks)))
for i in range(len(result)):
    print("Case #{} : {}".format(i+1,result[i]))