int na=100;
float a[100],b[100];

void setup() {
  // initialize serial comms
  Serial.begin(9600);
// signal 1
  for (int i = 0; i < na; i = i + 1) {
  a[i]=20.0;
 }
  for (int i = 0; i < 10; i = i + 1) {
  a[i]=20.0+(0.5/9)*i;
 }
  for (int i = 0; i < 10; i = i + 1) {
  a[i+10]=20.0-(0.5/9)*i;
 }
// signal 2
  float swap1,swap2,swap3;
  for (int i = 0; i < na; i = i + 1) {  // copy a->b
    b[i]=a[i];
 }
 for (int j=0;j<50;j=j+1){
  swap1=b[0];
  b[0]=b[na-1];
  for (int i = 1; i < na; i = i + 1) {
  b[i]=b[i-1];
 }
 }
}

// print signals
void loop() {
  for (int i = 0; i < na; i = i + 1) {  // copy a->b
    Serial.print(a[i]);
    Serial.print(",");
    Serial.print(b[i]);
    if (i < na-1) {Serial.print(",");}
 } 
Serial.println();
}
