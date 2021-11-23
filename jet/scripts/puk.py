import statistics as stat
import matplotlib.pyplot as plt
import numpy as np
import math

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
    data = np.asarray(dataLines, dtype=float)

    return data, steps, count


steps = [0]*8
count = [0]*8
data0, steps[0], count[0] = readJetData("00mm.txt")
data1, steps[1], count[1] = readJetData("05mm.txt")
data2, steps[2], count[2] = readJetData("20mm.txt")
data4, steps[4], count[4] = readJetData("40mm.txt")
data6, steps[6], count[6] = readJetData("60mm.txt")
 
data0 = 0.192*data0 - 159
data1 = 0.192*data1 - 159
data2 = 0.192*data2 - 159 
data4 = 0.192*data4 - 159
data6 = 0.192*data6 - 159
 
print('введите давление в трубке Пито без потока, целое число')
davl = int(input())
data0 = 2/1.2*(data0-davl)
data0 = np.fabs(data0)
data0 = np.sqrt(data0)

data1 = 2/1.2*(data1-davl)
data1 = np.fabs(data1)
data1 = np.sqrt(data1)

data2 = 2/1.2*(data2-davl)
data2 = np.fabs(data2)
data2 = np.sqrt(data2)

data4 = 2/1.2*(data4-davl)
data4 = np.fabs(data4)
data4 = np.sqrt(data4)

data6 = 2/1.2*(data6-davl)
data6 = np.fabs(data6)
data6 = np.sqrt(data6)


x = np.linspace(-5,5, 100)

#for i in range(0, 100):
    #q0 = np.trapz(data0[i]), dx=0.00004 + q0
    #q1 = np.trapz(data1[i]), dx=0.00004 + q1
    #q2 = np.trapz(data2[i]), dx=0.00004 + q2
    #q4 = np.trapz(data4[i]), dx=0.00004 + q4 
    #q6 = np.trapz(data6[i]), dx =0.00004 + q6
 
plt.title("Скорость потока воздуха в сечении затопленной струи")           # заголовок
plt.xlabel("Положение трубки Пито относительно центра струи [мм]")         # ось абсцисс
plt.ylabel("Скорость воздуха [м/с]")                                       # ось ординат
plt.grid()                                                                 # включение отображение сетки
plt.plot( x, data0,'r', x, data1,'g', x, data2,'b', x, data4,'c', x, data6,'k')

plt.legend(['Q(00мм)','Q(05мм)','Q(20мм)','Q(40мм)', 'Q(60мм)'])
#plt.legend(['Q(00мм) = %f [г/c]'%q0 ,'Q(05мм) = %f [г/c]'%q1 ,'Q(20мм) = %f [г/c]'%q2 ,'Q(40мм) = %f [г/c]'%q4 , 'Q(60мм) = %f [г/c]'%q6])


plt.savefig("Скорость потока воздуха в сечении затопленной струи.png")