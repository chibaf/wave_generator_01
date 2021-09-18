int myarray[] = {0, 1, 2, 3, 4, 5};
int number = 0;

void displayArray () {
  for (int i = 0; i < number; i++) {
    Serial.print(myarray[i]);
    Serial.print (" ");
  }
  Serial.println (" ");
}

void setup() {
  Serial.begin(115200);
  number = sizeof(myarray) / sizeof(int);
  displayArray ();
}

void loop() {
  int tempo = myarray[number - 1];
  for (int i = number - 1; i > 0; i--) myarray[i] = myarray[i - 1];
  myarray[0] = tempo;
  displayArray ();
  delay(2000);
}
