import random
counters = [0, 0, 0, 0, 0, 0]

for i in range(500):
    dice = random.randint(1, 6)

    if dice == 1:
        counters[0]+=1
    elif dice == 2:
        counters[1]+=1
    elif dice == 3:
        counters[2]+=1
    elif dice == 4:
        counters[3]+=1
    elif dice == 5:
        counters[4]+=1
    elif dice == 6:
        counters[5]+=1

for j in range(6):
    print('주사위가 %d 인 수: %d' %(j+1,counters[j]))
