void setup() 
{
  pinMode(13,OUTPUT);//初始化13号引脚模式为输出

}

void loop() 
{
  digitalWrite(13,HIGH);//13号引脚输出高电平
  delay(500);//高电平输出后持续500ms
  digitalWrite(13,LOW);//13号引脚输出低电平
  delay(500);//低电平输出后持续500ms
}
