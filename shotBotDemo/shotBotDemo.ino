/***********************************************************************************
 * ShotBot Demo
 *   ___________
 *  |.________  |
 *  |.|       | |
 *   .        | |     
 * | . |     _|_|_
 * | . |     |   |
 * |___|     |___|
 *
 *  This Demo creates a simple liquid pumping device using 2 pumping stations
 *  and 2 pushbuttons. 
 *
 *
 *  Wiring
 *  Pin 2 - RobotGeek Pushbutton to control pump 1
 *  Pin 4 - RobotGeek Pushbutton to control pump 2
 *  Pin 7 - RobotGeek Pushbutton relay/pumping station 1
 *  Pin 8 - RobotGeek Pushbutton relay/pumping station 2
 *
 *  Control Behavior:
 *    Push each button once to activate the coresponding pump for a time.
 *    Alter the defines  PUMP_1_TIME and PUMP_2_TIME to change the time that each
 *    pump activates.
 *
 *  External Resources
 *
 ***********************************************************************************/

//define the input/output pins
//pump/relay pins
#define PUMP_1_PIN 7
#define PUMP_2_PIN 8

//pushbutton pins
#define BUTTON_1_PIN 2
#define BUTTON_2_PIN 4

//Time for pumping stations to turn on in milliseconds
#define PUMP_1_TIME 2500
#define PUMP_2_TIME 2500

//setup() runs once
void setup()
{
  //setup output pins for relays/pumping stations
  pinMode(PUMP_1_PIN, OUTPUT);
  pinMode(PUMP_2_PIN, OUTPUT);
  
  //setup input pins for buttons
  pinMode(BUTTON_1_PIN, INPUT);
  pinMode(BUTTON_2_PIN, INPUT);  
}

//loop() runs indefinitely
void loop()
{
  //check pushbutton on pin BUTTON_1_PIN to see if it is HIGH (it has been pressed)
  if(digitalRead(BUTTON_1_PIN) == HIGH)
  {
     digitalWrite(PUMP_1_PIN, HIGH); //turn pump 1 on
     delay(PUMP_1_TIME);             //wait PUMP_1_TIME milliseconds
     digitalWrite(PUMP_1_PIN, LOW);  //turn pump 1 off
  }
  
  //check pushbutton on pin BUTTON_2_PIN to see if it is HIGH (it has been pressed)
  if(digitalRead(BUTTON_2_PIN) == HIGH)
  {
     digitalWrite(PUMP_2_PIN, HIGH); //turn pump 2 on
     delay(PUMP_2_TIME);             //wait PUMP_2_TIME milliseconds
     digitalWrite(PUMP_2_PIN, LOW);  //turn pump 2 off
  }
}
