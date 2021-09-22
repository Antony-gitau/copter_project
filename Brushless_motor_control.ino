//variable declaration

int pot_pin = A0;
int pot_val = 0;
int delay_time = 750;
int toggle_pin = 10;
int motor_driver
int angle;

void setup() {
  // put your setup code here, to run once:
pinMode(pot_pin, INPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
int pot_val = analogueRead(A0);
int pwmnoutput= map(pot_val, 0, 1023,0,255);
analogWrite(motor_driver, pwmoutput);

if (digitalWrite(toggle_pin) == HIGH & angle <= 90){
  Serial.read(angle);
  
}

}
