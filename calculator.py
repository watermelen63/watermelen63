h,y,j=input("要開啟計算機嗎?(yes or no)\n"),0,[] #是否要開啟計算機，j=輸入的兩個數字，y=output
# h='yes' #開啟計算機
if h == 'yes':
    print("---計算機開啟---")
    while h != 'no':
        h=input("請輸入運算符號+,-,*,/(如要關閉計算機請輸入end)\n")#輸入運算符號
        if h == 'end':
            break
        elif h not in ['+', '-', '*', '/']:
            print('請輸入正確的運算符號')
            continue
        else:
            print('請輸入兩個數字，以空格隔開(如要關閉計算機請輸入end)')
        if h != 'off':
            temp = input()
            if temp != 'end':
                j=list(map(int,temp.split()))#輸入兩個數字
                if h == '+':
                    y = sum(j)
                    print(y)
                elif h =='-':
                    y = j[0] - j[1]
                    print(y)
                elif h == '*':
                    y = j[0] * j[1]
                    print(y)
                else:
                    if j[1] == 0:
                        print('除數不能為0')
                        continue
                    else:
                        y = j[0] / j[1]
                    print(y)
            else:
                break
print('===計算機關閉===')