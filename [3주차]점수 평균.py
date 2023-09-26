scoreList = []
for i in range(5):
    score = int(input('정수 입력: '))
    scoreList.append(score)

scoreSum = scoreList[0] + scoreList[1] + scoreList[2] + scoreList[3] + scoreList[4]

print('합계:',scoreSum)
print('평균:',scoreSum/5)
