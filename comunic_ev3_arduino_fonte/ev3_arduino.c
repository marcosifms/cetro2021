// Set the sensor port 1 (S1) to be a custom I2C sensor
#pragma config(Sensor, S1,TIR,sensorI2CCustom)
// Allow us to use "ARDUINO_PORT" instead of writing "S1"
#define ARDUINO_PORT S1
//___________________________ ____________ ________________________________________
//___________________________|            |________________________________________
//___________________________| I2C Basics |________________________________________
//___________________________|____________|________________________________________
// First, define the Arduino Address
// Address is 0x04 on the Arduino: (Binary) 0100
// Bit shifted out with one 0, that becomes: (Binary) 1000
// Which is 0x08
#define ARDUINO_ADDRESS	0x08     // Arduino: 0x04
ubyte I2Cmessage[22];
char I2Creply[20];

//============================================
//============================================
//FUNCAO DE COMUNICACAO (NAO MEXE AQ POR ND NN)
//============================================
//============================================
int i2c_msg(byte ard_address, int message_size, int return_size, ubyte byte0, ubyte byte1, ubyte byte2, ubyte byte3 ,ubyte byte4){
	memset(I2Creply, 0, sizeof(I2Creply));
	message_size = message_size+3;
	I2Cmessage[0] = message_size; // TAMANHO DE MENSAGEM (NAO MEXE)
	I2Cmessage[1] = ard_address; // ENDERECO DO ARDUINO (NAO MEXE)
	I2Cmessage[2] = byte0; //VALOR PARA ARDUINO (VETOR [0])
	I2Cmessage[3] = byte1; //VALOR PARA ARDUINO (VETOR [1])
	I2Cmessage[4] = byte2; //VALOR PARA ARDUINO (VETOR [2])
	I2Cmessage[5] = byte3; //VALOR PARA ARDUINO (VETOR [3])
	I2Cmessage[6] = byte4; // max is 99 only for I2Cmessage[6] //VALOR PARA ARDUINO (VETOR [4])
	//// can't add more than 5 Bytes
	sendI2CMsg(S1, &I2Cmessage[0], return_size);
	wait1Msec(20);
	readI2CReply(ARDUINO_PORT, &I2Creply[0],2); // return_size);
	int x = I2Creply[0];
	wait1Msec(35);
	return x;
}

//FUNCAO PARA PASSAR O VALOR DO LED PARA O ARDUINO
/*
void set_light(byte address, int pin_num , bool state)
{
	i2c_msg(address, 2, 0, 0, pin_num, state, 0, 0);
}
*/

int read_sensor(byte address, int pin_num, bool analog_digital)
{
	/*
  byte ard_address
  int message_size  2
  int return_size   1
  ubyte byte0       4
  ubyte byte1       pin_num
  ubyte byte2       analog_digital
  ubyte byte3       0
  ubyte byte4       0
  */
	//int value = i2c_msg(address, 2, 1, 4, pin_num, analog_digital , 0, 0);
  int value = i2c_msg(address, 2, 1, 100, pin_num, analog_digital , 0, 0);
  /*string str = "";                  // Create String, 'str' and initialize it as 'empty'.
  StringFormat(str, "%d", value);
  displayBigStringAt(50, 50, str );*/
	return value;
}

task main(){

	while(true)
	{

	 int ultrasonic_value;
 	  ultrasonic_value = read_sensor( ARDUINO_ADDRESS, 2, true);
    string str = "";                  // Create String, 'str' and initialize it as 'empty'.
    StringFormat(str, "%d", ultrasonic_value);
 	  displayBigStringAt(50, 50, str );
		wait1Msec(1000);

	}
}
