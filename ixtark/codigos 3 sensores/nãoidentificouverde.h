void nãoidentificouverde(){

	//não identificou verde
	else{
		setMotor(motorB, -40);
		setMotor(motorA, 40);
		wait(200, milliseconds);
		contobs=0;

		setMultipleMotors(-40, motorA, motorB);
		wait(300,milliseconds);

		contobs=0;
	}
}
