//ທ້າວ ຂັນທະລາ ສຸວັນນະລາດ
//ຫ້ອງ Com1_Con1

void setup()
{
  pinMode(A5, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int lightRead = analogRead(A5);
  Serial.println(lightRead);
  delay(5);
 if(lightRead < 100)
 {
 	digitalWrite(13, HIGH);
  }else {
  	digitalWrite(13, LOW);
  }
}