import serial

arduino = serial.Serial(port='COM3', baudrate=9600, timeout=1)

while True:
    message = input("On or Off: ")
    arduino.write(message.encode())



