void verdeesquerda(){

	//verde esquerda
	if(cor1==VERDE){


		stopAllMotors();
		wait(30000000000,milliseconds);




		setMultipleMotors(-40,motorB,motorA);
		wait(520,milliseconds);
		stopAllMotors();

		setMotor(motorB, 20);
		moveMotor(motorA,390, degrees, -20);
		stopAllMotors();
		wait(100,milliseconds);

		//indo pra tras so um pouco
		setMotor(motorB, 40);
		moveMotor(motorA,40, degrees, 40);
		stopAllMotors();
		wait(100,milliseconds);


		stopAllMotors();
		wait(100,milliseconds);

		//arrumando
		while(cor2!=1 ){
			setMotor(motorA, 50);
			setMotor(motorB, -50);

		}

	}//else

}//if verde esquerda
