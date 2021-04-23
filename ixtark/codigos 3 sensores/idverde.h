void idverde(){
	verde=0;
	while(verde < 10){
		setMotor(motorA, 30);
		setMotor(motorB, -30);
		wait(30, milliseconds);
		verde++;
		if(cor2 == 4){
			verde=15;
		}
	}
	while(verde != 15 && verde != 0){
		setMotor(motorB, 30);
		setMotor(motorA, -30);
		wait(30, milliseconds);
		verde--;
		if(cor2 == 4){
			verde=15;
		}
	}
	while(verde < 10 && verde !=15){
		setMotor(motorB, 30);
		setMotor(motorA, -30);
		wait(30, milliseconds);
		verde++;
		if(cor2 == 4){
			verde=15;
		}
	}
	while(verde !=15 && verde!= 0){
		setMotor(motorA, 30);
		setMotor(motorB, -30);
		wait(30, milliseconds);
		verde--;
		if(cor2 == 4){
			verde=15;
		}
	}
}
