#include <canto1.h>;
#include <canto2.h>;
#include <canto3.h>;
void sala3(){


	stopAllMotors();


	//entrando na sala
	setMultipleMotors(-40,motorA,motorB,);
	wait(1000,milliseconds);


	stopAllMotors();
	wait(500,milliseconds);


	//abrindo a garra
	setMotor(motorC,-30);
	wait(1500,milliseconds);

	stopAllMotors();


	//indo para o canto
	setMotor(motorA, -50);
	moveMotor(motorB,1100, degrees, -50);
	stopAllMotors();
	wait(20,milliseconds);



	//fechando garra
	setMotor(motorC,30);
	wait(1500,milliseconds);


	//indo pra frente
setMultipleMotors(-50,motorA,motorB,);
	wait(4000,milliseconds);
	stopAllMotors();
	wait(100,milliseconds);


	stopAllMotors();
	displayCenteredBigTextLine(3, "%d", getColorName(S3));
	wait(500, milliseconds);
	//identificando o canto



	if(getColorName(S3) <  2 ){
		playSound(soundBeepBeep);
		canto1();

	}

	else{

		//virando robo
		setMotor(motorA, -50);
		moveMotor(motorB,540, degrees, 50);
		stopAllMotors();
		wait(200,milliseconds);

		//indo pra tras
		setMotor(motorA, 50);
		moveMotor(motorB,200, degrees, 50);
		stopAllMotors();

		//abrindo a garra
		setMotor(motorC,-20);
		wait(1500,milliseconds);

		stopAllMotors();

		//varrendo bolinha
		setMotor(motorA, -50);
		moveMotor(motorB,980, degrees, -50);
		stopAllMotors();


		//fechando a garra
		setMotor(motorC,20);
		wait(1500,milliseconds);

		//indo pra frente
		setMultipleMotors(-50,motorA,motorB,);
	wait(4000,milliseconds);
		stopAllMotors();

		//identificando o segundo canto

		if(getColorName (S3) < 2 ){
			playSound(soundBeepBeep);
			canto2();

		}


		else{
			canto3();
		}


	}//else canto 2









}//void
