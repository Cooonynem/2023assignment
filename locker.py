def buttonPuzzle():

    lock = ["d", "a", "b", "e", "c", "f"]   #정답
    key = []    #입력한 답 리스트

    i = 0

    while i < 6:
        print("------------------")

        if i == 0:
            print("|  ○○○○○○  |")
            print("|  ⓐⓑⓒⓓⓔⓕ  |")
        elif i == 1:
            print("|  ●○○○○○  |")
            print("|  ⓐⓑⓒ●ⓔⓕ  |")
        elif i == 2:
            print("|  ●●○○○○  |")
            print("|  ●ⓑⓒ●ⓔⓕ  |")
        elif i == 3:
            print("|  ●●●○○○  |")
            print("|  ●●ⓒⓔ●ⓕ  |")
        elif i == 4:
            print("|  ●●●●○○  |")
            print("|  ●●ⓒ●●ⓕ  |")
        elif i == 5:
            print("|  ●●●●●○  |")
            print("|  ●●●●●ⓕ  |")

        print("------------------")

        print("그만두려면 q를 입력하세요")
        answer = input("한 자리 문자 입력(a, b, c, d, e, f) : ")

        if answer == "q" or answer == "Q":
            
            return "close"
        
        key.append(answer)

        if lock[i]==key[i]: #정답 입력시 다음으로
            i += 1
        else:
            i = 0
            key.clear()     #오답 입력시 초기화

    print("------------------")
    print("|  ◎◎◎◎◎◎  |")
    print("|  ●●●●●●  |")
    print("------------------")
    print("어딘가의 문이 열렸다")

    return "open"










def Card():

    
    cardSave = ["[a]","[b]","[c]","[d]","[e]","[f]","[g]","[h]","[i]","[j]","[k]","[l]","[m]","[n]","[o]","[p]"]
    card = ["[a]","[b]","[c]","[d]","[e]","[f]","[g]","[h]","[i]","[j]","[k]","[l]","[m]","[n]","[o]","[p]"]
    answer = ["[$]", "[+]", "[\]", "[%]", "[-]", "[$]", "[%]", "[!]", "[\]", "[#]", "[!]", "[+]", "[-]", "[#]", "[@]", "[@]"]

# 정답지
#a - f	[$]
#b - l	[+]
#c - i	[\]
#d - g	[%]
#e - m	[-]
#h - k	[!]
#j - n	[#]
#o - p	[@]
    
    print(card[0],card[1],card[2],card[3])
    print(card[4],card[5],card[6],card[7])
    print(card[8],card[9],card[10],card[11])
    print(card[12],card[13],card[14],card[15])

    i = 0
    while i < 16:
        print("그만두려면 q를 입력하세요")
        choice = input("카드에 해당하는 알파벳 입력 : ")

        if choice == "a":
            card[0] = answer[0]
        elif choice == "b":
            card[1] = answer[1]
        elif choice == "c":
            card[2] = answer[2]
        elif choice == "d":
            card[3] = answer[3]
        elif choice == "e":
            card[4] = answer[4]
        elif choice == "f":
            card[5] = answer[5]
        elif choice == "g":
            card[6] = answer[6]
        elif choice == "h":
            card[7] = answer[7]
        elif choice == "i":
            card[8] = answer[8]
        elif choice == "j":
            card[9] = answer[9]
        elif choice == "k":
            card[10] = answer[10]
        elif choice == "l":
            card[11] = answer[11]
        elif choice == "m":
            card[12] = answer[12]
        elif choice == "n":
            card[13] = answer[13]
        elif choice == "o":
            card[14] = answer[14]
        elif choice == "p":
            card[15] = answer[15]
            
        elif choice == "q":         #종료
            print("test종료문구")
            return "close"
        
        else:
            continue
        
        print(card[0],card[1],card[2],card[3])
        print(card[4],card[5],card[6],card[7])
        print(card[8],card[9],card[10],card[11])
        print(card[12],card[13],card[14],card[15])


        tmp = "[" + choice + "]"
        
        if i%2==0:          #홀수번째 실행일 때
                       
            choiceTmp1 = cardSave.index(tmp)
            answerTmp1 = answer[cardSave.index(tmp)]   #홀수번째로 고른 카드 저장

        elif i%2==1:               #짝수번째 실행일 때

            choiceTmp2 = cardSave.index(tmp)
            answerTmp2 = answer[cardSave.index(tmp)] #짝수번째로 고른 카드 저장

            
            if answerTmp1 != answerTmp2:    #뒤집은 두 카드가 일치하지 않을 때
                card[choiceTmp1] = cardSave[choiceTmp1]
                card[choiceTmp2] = cardSave[choiceTmp2]     #카드 초기화

                print("오답")

                print(card[0],card[1],card[2],card[3])
                print(card[4],card[5],card[6],card[7])
                print(card[8],card[9],card[10],card[11])
                print(card[12],card[13],card[14],card[15])

                i -= 2  #카드 뒤집기 전으로 되돌림

            else:
                print("정답")
        
        i += 1

    print("test클리어문구")
    return "open"


