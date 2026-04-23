import random

print("Привет! Это рандомайзер для оружек в кс. Работает так:\n В игре нажимаешь \"B\" (закупиться), а дальше по очереди цифры, которые выдаст рандомайзер. ")
print("Для начала работы введи в терминал, все что угодно,\nЧтобы остановить программу напиши \"Stop\"")
print("Удачи!")

StopCheaker = input()

while StopCheaker != 'Stop':
    StopCheaker = input()
    
    print(random.randint(2,4))
    print(random.randint(1,5))
