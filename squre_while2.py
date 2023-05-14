import turtle
t = turtle.Turtle()

n = int(input("몇각형을 원하시나요?: "))

i = 0
while i < n:
    t.forward(100)
    t.right(360 / n)
    i = i + 1
