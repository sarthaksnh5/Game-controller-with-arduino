int steering = A0; // for steering potentiometer
int acc = A1; // for acceleration potentiometer
int delay1 = 1023; 
int vala = 0;
int vals = 0;

void setup() {
  pinMode(steering, INPUT);
  pinMode(acc, INPUT);
  Serial.begin(9600); // for Serial commands
}

void loop() {
  vals=analogRead(A0);
  vala=analogRead(A1);

  //Serial.println(vals);
  //Serial.println(vala);

  if(vals>623){ // you can change these values according to your convinience
    Serial.println("Right");
    delay(delay1-vals);
  }

  else if(vals<400){
    Serial.println("Left");
    delay(vals);
  }

  if(vala>623){
    Serial.println("up");
    delay(delay1-vala);
  }

  else if(vala<400){
    Serial.println("down");
    delay(vala);
  }

}
