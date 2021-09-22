// initializing the variables

int vr = 9; //potential meter pin
int zf = 8;//toggle switch pin

void setup() {
  // put your setup code here, to run once:
  
pinMode(vr,OUTPUT); // setting up the potentialmeter as an ouput
pinMode(zf,OUTPUT); //setting up the toggle switch as an output
digitalWrite(zf, 1); // intializing the direction as 1-clockwise, and 0-anticlockwise
}

void loop() {
  // put your main code here, to run repeatedly:
  
analogWrite(vr,100);// creating a pwm pulse 50-250 speed
delay(4);
}
