import serial
from pynput.mouse import Button, Controller
ser = serial.Serial('COM3', 9600)#Enter Arduino Port Number Here
mouse = Controller()
while True:
    data = ser.readline()
    if data.decode().strip() == "d":
        mouse.press(Button.left)
        mouse.release(Button.left)
   
        


