void noventagrausesquerda(){

	//90 graus esquerda
	if(cor1!=BRANCO){
		stopAllMotors();
		//wait(5000,milliseconds);
		if(cor3!=BRANCO){
			wait(100,milliseconds);

			setMultipleMotors(-40,motorB,motorA);
			wait(450,milliseconds);


			stopAllMotors();

			while(cor2==BRANCO){ //VIRAR ATE ACHAR O PRETO
				setMotor(motorA,50);
				setMotor(motorB,-90);

			}

			stopAllMotors();
			wait(200,milliseconds);

			setMotor(motorA,-25);
			setMotor(motorB,25);
			wait(100,milliseconds);

			stopAllMotors();
		}//if do cor3 90

	}//IF do cor1 branco

}//VOID
