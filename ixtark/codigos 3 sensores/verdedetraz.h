void verdedetraz(){

	//VERDE DE TRAZ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	while(cor1 == 1){
		setMotor(motorB, 40);
		setMotor(motorA, -40);
	}
	while(cor1 != 1){
		setMotor(motorB, -40);
		setMotor(motorA, 40);
		wait(300, milliseconds);
	}
}
