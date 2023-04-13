itemPrice = int(input("물건값을 입력하시오: "))
note = int(input("1000원 지폐개수: "))
coin500 = int(input("500원 동전개수: "))
coin100 = int(input("100원 동전개수: "))

change = note*1000 + coin500*500 + coin100*100 - itemPrice

nCoin500 = change//500
change = change%500

nCoin100 = change//100
change = change%100

nCoin10 = change//10
change = change%10

nCoin1 = change

print('\n')
print('==거스름돈==')
print('500원= %s 100원= %s 10원= %s 1원= %s'%(nCoin500, nCoin100, nCoin10, nCoin1))
