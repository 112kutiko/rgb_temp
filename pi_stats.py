# Write your code here :-)
from gpiozero import CPUTemperature;
import serial;
import time;
import os;



def print_info():
    cpu = CPUTemperature();
    cpu_temp = cpu.temperature;
    send_temp=str(int(cpu_temp))
    print("____info___")
    print("cpu temp: "+ send_temp)
    v="after convert: " +str(bytes(send_temp.encode()));
    print(v)
    print("___________")
def print_check():
    cpu = CPUTemperature();
    cpu_temp = cpu.temperature;
    send_temp=str(int(cpu_temp))
    print("____info_a_")
    print("cpu temp: "+ send_temp)
    send_temp.encode()
    print("___________")

if __name__ == '__main__':
    ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=5);
    ser.flush()

    print("start");
    cpu = CPUTemperature();
    cpu_temp = cpu.temperature;
    print_info();
    while 0<1:
        cpu = CPUTemperature();
        cpu_temp = cpu.temperature;
        send_temp=str(int(cpu_temp))+ "\n"
        ser.write(bytes(send_temp.encode()));
        time.sleep(1);print_info();


