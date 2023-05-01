import random

a = int(input('请输入一个数字。'))
num = random.randit(1, 100)
if 0 < a < 100:
    while (a == num):
        if a < num:
            print('大了')
            a = int(input('请输入一个数字。'))
        else:
            print('小了')
            a = int(input('请输入一个数字。'))
    else:
        print('恭喜你，猜对了！')
