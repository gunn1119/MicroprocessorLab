void setup()
{
  DDRD = 0b11111100;
  DDRB = 0b000011;
 }

void loop()
{
  
  int i;
  int j;
  PORTD = 0b00000100;
for(i=0;i<6;i++)
  {
   
   delay(300);
    PORTD = PORTD << 1;
  }
  PORTB = 0b000001;
  for(j=0;j<2;j++)
  {
    delay(300);
    PORTB = PORTB << 1;

  }
}
