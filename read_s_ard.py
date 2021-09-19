import serial, sys

strPort = sys.argv[1]

ser=serial.Serial(strPort, sys.argv[2])

print("connected to: " + ser.portstr)

i=0
while True:
  line = ser.readline()
  line2=line.strip().decode('utf-8')
  data = [str(val) for val in line2.split(",")]
  print(data)
  if i==0:
    f = open("signal_test.csv", "w")
    f.write(str(line2))
    f.close()
    i=1