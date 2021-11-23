import waveFunctions as b
import matplotlib.pyplot as plt
import time

b.initSpiAdc()

t = 0
data = []

while (t < 1000):
    t = t + 1
    value = b.getAdc()
    data.append(value)
    #time.sleep(1)

b.save(data, 0, t)


#shagov = 100
#shag = 10

# for i in range():
#     data.append(J.getAdc())
#     J.stepForward(shag)

# J.stepBackward(shag*shagov)

# J.deinitSpiAdc()
# J.deinitStepMotorGpio()

# J.save(data, shag)

# plt.plot(data)
# plt.show()
