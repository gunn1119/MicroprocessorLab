#define CH_A 2
#define CH_B 3

int prev_A = 0;
int A = 0;
int B = 0;

void setup(){
  pinMode(CH_A, INPUT_PULLUP);
  pinMode(CH_B, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
  A = digitalRead(CH_A);
  B = digitalRead(CH_B);
  
  if(prev_A == 0 && A == 1)
  {
    if(B == 1)
    {
      Serial.println("Counter-Clockwise");
      delay(700);
    }
    if(B == 0)
    {
      Serial.println("Clockwise");
      delay(700);
    }
  }
  
  prev_A = A;
}
