int flame_sensor=5;
int flame_detected;
int distance;
long duration;
int buzzer1=9;
int trigPin=6;
int echoPin=7;
int led=10;
  
void setup()
{
  Serial.begin(9600);
  pinMode(5,INPUT);         //flame senssor input
  pinMode(7,INPUT);         //ultrasonic input
  pinMode(6,OUTPUT);        //ultrasonic output
  pinMode(10, OUTPUT);		//light ON
  pinMode(9, OUTPUT);       //flame buzzer output
}

int main()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*(0.034/2);
  if(distance>=150)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}

void flame()
{
  flame_detected=digitalRead(flame_sensor);
  if(flame_detected == 1)
  {
    Serial.println("Flame detected...! take action immediately.");
    digitalWrite(buzzer1, HIGH);
    delay(200);
  }
  else
  {
    Serial.println("No flame detected. stay cool");
    digitalWrite(buzzer1, LOW);
  }
  delay(1000);
}

