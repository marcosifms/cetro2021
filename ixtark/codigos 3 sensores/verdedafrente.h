void verdedafrente(){

	//VERDE DA FRENTE --------------------------------------------------------------
	setMotor(motorB,30);
	moveMotor(motorA,550,degrees,-30);
	contverdeobs=0;
	while(cor1==1){
		setMotor(motorA,-30);
		setMotor(motorB,30);
		wait(10, milliseconds);
		contverdeobs++;
	}
	stopAllMotors();
	if(contverdeobs <30){
		while(cor1!=1){
			setMotor(motorA,50);
			setMotor(motorB,-50);
		}
		setMotor(motorA, 50);
		moveMotor(motorB, 100, degrees, -50);
		stopAllMotors();
		wait(1, seconds);
		setMultipleMotors(-30, motorA, motorB);
		wait(200, milliseconds);
		while(cor1 == 1){
			setMotor(motorA,50);
			setMotor(motorB,-20);
		}
		while(cor1!=1){
			setMotor(motorA,50);
			setMotor(motorB,-20);
		}
		setMotor(motorA,50);
		setMotor(motorB,-20);
		wait(300,milliseconds);
	}
	else{
		while(cor1!=1){
			setMotor(motorA,50);
			setMotor(motorB,-20);
		}
		setMotor(motorA,50);
		setMotor(motorB,-20);
		wait(300,milliseconds);
		stopAllMotors();
		wait(200,milliseconds);
	}
}
