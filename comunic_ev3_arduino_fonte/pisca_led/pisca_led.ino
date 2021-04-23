// I2C Slave Send / Receive
// A4 – SDA
// A5 – SCL

#include<Wire.h> // I2C library
int instruction[5] = {5,0,0,0,0};

void setup()
{
  pinMode(13, OUTPUT);
  Wire.begin(0x04); // set the slave address
  Wire.onReceive(receiveI2C); // Receiving information!
  
  Serial.begin(9600);
    
}
//________________________________________________________________________________
void loop()
{
    
}

//________________________________________________________________________________
//________________________________________________________________________________
//________________________________________________________________________________

byte read_byte = 0x00;
int byte_count = 0;

//BLOCO DE CODIGO DA COMUNICAÇÃO
void receiveI2C(int bytesIn)
{
  read_byte = bytesIn;
  byte_count = 0;
  while(1 < Wire.available()) // loop through all but the last
  {
    read_byte = Wire.read(); 
    
    instruction[byte_count] = read_byte;
    
    byte_count++;
  }
  int x = Wire.read(); //Read the last dummy byte (has no meaning, but must read it)



  if( instruction[0] == 0 ){
    Serial.println(instruction[2]);
    
    if ( instruction[2] == 0 )
    {
      digitalWrite(13,LOW);
     
      
    }
        if ( instruction[2] == 1 )
    {
      digitalWrite(13,HIGH);  

    }
  }  
}
