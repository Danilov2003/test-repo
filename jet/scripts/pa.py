import statistics as stat
import matplotlib.pyplot as plt
import numpy as np

def readJetData(filename):
    with open(filename) as f:
        lines = f.readlines()

    steps = 0
    count = 0
    dataLineIndex = 0

    for index, line in enumerate(lines):
        if line[0] != '-' and line[0] != '\n':
            dataLineIndex = index
            break

        if 'steps' in line:
            words = line.split()
            for word in words:
                try:
                    steps = float(word)
                except ValueError:
                    pass

        if 'count' in line:
            words = line.split()
            for word in words:
                try:
                    count = int(word)
                except ValueError:
                    pass

    dataLines = lines[dataLineIndex:]
    data = np.asarray(dataLines, dtype=int)

    return data, steps, count



print ('Калибровка')
graph = []


with open ("00pa.txt", "r") as k1:
    str = k1.readlines()
    value_array = []
    for i in range(1,100):    # i in range(first str of measure, last str of measure)
        value_array.append(int(str[i]))
    summa = sum(value_array)
    graph.append(round(summa/len(value_array)))
    print ("Среднее значение показателей АЦП при 0 Па: ", round(summa/len(value_array)))

with open ("175pa.txt", "r") as k2:
    str = k2.readlines()
    value_array = []
    for i in range(1,100):
        value_array.append(int(str[i]))
    summa = sum(value_array)
    graph.append(round(summa / len(value_array)))
    print ("Среднее значение показателей АЦП при 70 Па: ", round(summa/len(value_array)))
x =[0]
print ('введите значение манометра')
x.append(input())
kef = round(int(x[1])/(graph[1]-graph[0]),3)
print('коэффициент калибровки давления:', kef)
y=round(graph[0]*kef, 3)
print('калибровочное уравнение: ', 'P =', kef, '* x', '-' , y )

fig, ax = plt.subplots(figsize=(8,5), dpi = 400)

ox = np.linspace(int(graph[0]), int(graph[1]))
oy = kef * ox - y
ax.plot(ox, oy)
plt.tick_params(axis='both', which='major', labelsize=6)
plt.title("Калибровочный график зависимости давления от показаний АЦП", fontsize = 14)
plt.xlabel("Показатель АЦП, у.е.",  fontsize = 8) # ось абсцисс
plt.ylabel("Давление, Па",  fontsize = 8) # ось ординат
plt.grid()
fig.savefig("График калибровки давления.png")
plt.show()  
 
