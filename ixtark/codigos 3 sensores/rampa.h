void rampa(){

	//RAMPA

	if (SensorValue[S4]<=10){
		stopAllMotors();
		setMultipleMotors(-80,motorA,motorB);
		wait(650,milliseconds);

		stopAllMotors();
		wait(500,milliseconds);

		if (SensorValue[S4]<=10){
			stopTask(obterCor);
			sleep(200);
			setMultipleMotors(-80,motorA,motorB);
			while(true){
				while(SensorValue[S4]<=7){
					setMultipleMotors(-80,motorA,motorB);

					if(SensorValue[S4]>3){
						setMotor(motorA,-20);
						setMotor(motorB,20);
					}

					if(SensorValue[S4]<1){
						setMotor(motorB,-30);
						setMotor(motorA,20);
					}
				}
				stopAllMotors();
				wait(500,milliseconds);
				getColorReflected(S1);
				getColorReflected(S2);
				sala3();
			}
		}
	}//IF RAMPA
}
