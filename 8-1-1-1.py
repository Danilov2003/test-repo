import numpy as np
import matplotlib.pyplot as plt
import textwrap

#Импортириуем текстовые файлы
data = np.genfromtxt("data.txt",comments="\n")
settings = np.genfromtxt("settings.txt",comments="\n")
#Подключаем время
times = np.linspace(0, settings, len(data))
#Подключаем fig
fig = plt.figure()
ax = fig.add_subplot(111)
#Подключаем оси
ax.set_xlim([min(times), 1.1*max(times)])
ax.set_ylim([min(data), 1.05*max(data)])
#Подключаем зоголовки
location = ['center', 'left', 'right']
myTitle = "Процесс зарядки и разрядки конденсатора в RC-цепи"
ax.set_title("\n".join(textwrap.wrap(myTitle, 80)), loc =location[0])
ax.set_xlabel('Время, с')
ax.set_ylabel('Напряжение, V')
#Параметры маркеров
plt.plot(times, data,
        linestyle = '-',
        linewidth = 1,
        color = 'blue',
        marker='*',
        mew = 2,
        markevery = 50,
        label = 'Зависимость V(t)')
plt.legend()
#Параметры сетки 
plt.minorticks_on()      
plt.grid(which='major', color='yellow', linestyle='-', linewidth=1)
plt.grid(which='minor', color='yellow', linestyle='--', linewidth=0.5) 
#Параметры текста
plt.text(76, 2.5,"Время заряда = {: .2f}".format(times[np.argmax(data)]))
plt.text(76, 2,"Время разряда = {: .2f}".format(settings - times[np.argmax(data)]))
#Сохранение графика
plt.savefig('grafic.svg')
plt.show()

