import RPi.GPIO as GPIO



GPIO.setmode(GPIO.BCM)
GPIO.setup(3, GPIO.OUT)
GPIO.setup(22, GPIO.IN)
p = GPIO.PWM(3, 1000)
p.start(0)

try:
    while True:
        inputStr = input ("Enter a value between 0 and 100 ('q' to exit) >")

        if inputStr.isdigit():
            value = float (inputStr)
            if value > 100 or value < 0:
                print ("The value is invalid, try again")
                continue 
            p.ChangeDutyCycle(value)

        elif inputStr == 'q':
            break
        else:
            print ("Enter a positive float")
            continue

except KeyboardInterrupt:
    print("The program was stoped by the keyboard")
else:
    print ("No exceptions")
finally:
    p.stop()
    GPIO.cleanup(aux)
    print ("GPIO cleanup completed")

