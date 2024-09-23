#define Sensor_Pin A1
#define Output_Pin 6
#define indicate 12
int light;

void setup() {
  // put your setup code here, to run once:
  pinMode(Sensor_Pin , INPUT);
  pinMode(Output_Pin , OUTPUT);
  pinMode(indicate, OUTPUT);
  Serial.begin(9600);

}
 
void loop() {
  // put your main code here, to run repeatedly:
        light =analogRead(Sensor_Pin);
        if(light>600)   //6pm
        {
          analogWrite(Output_Pin,150);
          digitalWrite(indicate,HIGH);
          delay(1000);
        }
         light =analogRead(Sensor_Pin);
        if(light>600)   //7pm
        {
          analogWrite(Output_Pin,190);
          digitalWrite(indicate,HIGH);
          delay(1000);
        }
         light =analogRead(Sensor_Pin);
        if(light>600)   //8pm
        {
          analogWrite(Output_Pin,230);
          delay(1000);
        }
         light =analogRead(Sensor_Pin);
        if(light>600)   //9pm
        {
          analogWrite(Output_Pin,255);
          delay(1000);
        }
         light =analogRead(Sensor_Pin);
        if(light>600)   //10pm
        {
          analogWrite(Output_Pin,255);
          delay(1000);
        }
        light =analogRead(Sensor_Pin);
         if(light>600)   //11pm
        {
          analogWrite(Output_Pin,255);
          delay(1000);
        }
         light =analogRead(Sensor_Pin);
        if(light>600)   //12am
        {
          analogWrite(Output_Pin,200);
          delay(1000);
        }
         light =analogRead(Sensor_Pin);
        if(light>600)   //1am
        {
          analogWrite(Output_Pin,200);
          delay(1000);
        }
        light =analogRead(Sensor_Pin);
        if(light>600)   //2am
        {
          analogWrite(Output_Pin,200);
          delay(1000);
        }
        light =analogRead(Sensor_Pin);
        if(light>600)   //3am
        {
          analogWrite(Output_Pin,200);
          delay(1000);
        }
        light =analogRead(Sensor_Pin);
        if(light>600)   //4am
        {
          analogWrite(Output_Pin,180);
          delay(1000);
        }
        light =analogRead(Sensor_Pin);
        if(light>600)   //5am
        {
          analogWrite(Output_Pin,150);

          delay(1000);
        }
        light =analogRead(Sensor_Pin);
        if(light>600)   //6am
        {
          analogWrite(Output_Pin,50);
          delay(1000);
        }
        
           digitalWrite(Output_Pin,LOW);
            digitalWrite(indicate,LOW);
        
        //Serial.println(light);
        delay(1000);
}