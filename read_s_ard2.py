import serial, sys, time

strPort = sys.argv[1]

ser=serial.Serial(strPort, sys.argv[2])

print("connected to: " + ser.portstr)

time.sleep(1)

i=0
f = open("signal_test.csv", "w")
while True:
  line = ser.readline()
  line2=line.strip().decode('utf-8')
  data = [str(val) for val in line2.split(",")]
  print(line2)
  if i<100:
    f.write(str(line2)+"\n")
    i=i+1
  else:
    print("i=100")
    f.close()
