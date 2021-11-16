import jetFunctions as J
import matplotlib.pyplot as plt

J.initStepMotorGpio()
J.initSpiAdc()

data = []
shagov = 100
shag = 10

for i in range(shagov):
    data.append(J.getAdc())
    J.stepForward(shag)

J.stepBackward(shag*shagov)

J.deinitSpiAdc()
J.deinitStepMotorGpio()

J.save(data, shag)

plt.plot(data)
plt.show()