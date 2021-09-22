//variable declaration

int pot_pin = A0; // set the ppotentialmeter pin 
int pot_val = 0; //initiate the value to zero
int toggle_pin = 10; //set the togglepin to ten
int angle; //initializing variable angle


void setup() {
  // put your setup code here, to run once:
pinMode(pot_pin, INPUT); //set the potentialmeter as an input, as we shall use it to control rise and fall
Serial.begin(9600); //setup the serial monitor to read the angle
}

void loop() {
  // put your main code here, to run repeatedly:
  
int pot_val = analogRead(A0); //read the value of the potentialmeter
int pwmnoutput= map(pot_val, 0, 1023,0,255); //map the value for pwm output
analogWrite(pot_pin, pwmoutput); //write the value to the potentialmeter

if (digitalWrite(toggle_pin) == HIGH & angle <= 90){
  Serial.read(angle);
  }
else ((digitalWrite(toggle_pin) == HIGH & angle >= 90){
  Serial.read(angle);
  Serial.print("dangerous!");
}
