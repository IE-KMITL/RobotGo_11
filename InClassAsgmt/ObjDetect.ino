const int Sensor=D2;
int inputVal = 0;
void setup() 
{                
  pinMode(Sensor,INPUT);    
  Serial.begin(9600);
}

void loop() 
{  
   if(digitalRead(Sensor)==HIGH)
{

Serial.println("sensor not detected object"" ");
delay(200);    // wait for a second
}
else 
{
Serial.println("sensor detected object");

}
}
/*จากการทดสอบถ้าใช้กระดาษสีขาววางกั้นห่าง 15 ซม.ใช้ไขควงหมุนจนไฟติด ถ้ามากกว่า 15 ซม.ไฟจะดับ
  จากการทดสอบวัตถุต่างๆ 5 ชนิดได้ผลการทดสอบดังต่อไปนี
  1.หนังสือสีส้ม จับได้ในระยะประมาณ 12 ซม.
  2.ไอแพดได้จับได้ในระยะประมาณ 9 ซม.
  3.ขวดน้ำ จับได้ในระยะประมาณ 13 ซม.
  4.เครื่องคิดเลขสีดำ จับได้ในระยะประมาณ 4.5 ซม.
  5.มือ จับได้ในระยะประมาณ 2 ซม.
  จากการทดสอบพบว่า วัตถุอื่นๆจับระยะได้น้อยกว่า 15 ซม.เพราะกระดาษสีขาวสะท้อนแสงสัญญาณกับตัวsensorได้ดีกว่าตถุอื่นๆ 
 */
