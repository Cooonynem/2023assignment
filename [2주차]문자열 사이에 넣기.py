sign = input('기호를 입력하시오: ')
word = input('중간에 삽입할 문자를 입력하시오: ')

beforeList = [sign[0],word,sign[1]]

space = ''

afterList = space.join(beforeList)

print(afterList)
