void becosemsaida (){

playSound(soundBeepBeep);

	setMultipleMotors(-40,motorB,motorA);
	wait(500,milliseconds);
	stopAllMotors();


	//virando por tempo
	setMotor(motorB, 40);
	moveMotor(motorA,780, degrees, -40);
	stopAllMotors();


	while(cor2!=2 ){
		setMotor(motorB,40);
		setMotor(motorA,-40);

	}//while

	//arrumando
	while(cor2==2){
		setMotor(motorA,50);
		setMotor(motorB,-50);


	}//while arrumando

}//void
