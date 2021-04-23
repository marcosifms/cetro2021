void verdes(){
	//verde esquerda
	if(cor2==4 && cor1 !=4){


		//procurando outro verde
		verde=0;
		setMultipleMotors(20, motorA, motorB);
		wait(100, milliseconds);
		while(verde < 10){
			setMotor(motorA, 30);
			setMotor(motorB, -30);
			wait(30, milliseconds);
			verde++;
			if(cor1 == 4){
				verde=15;
			}
		}
		while(verde != 15 && verde != 0){
			setMotor(motorB, 30);
			setMotor(motorA, -30);
			wait(30, milliseconds);
			verde--;
			if(cor1 == 4){
				verde=15;
			}
		}
		while(verde < 10 && verde !=15){
			setMotor(motorB, 30);
			setMotor(motorA, -30);
			wait(30, milliseconds);
			verde++;
			if(cor1 == 4){
				verde=15;
			}
		}
		while(verde !=15 && verde!= 0){
			setMotor(motorA, 30);
			setMotor(motorB, -30);
			wait(30, milliseconds);
			verde--;
			if(cor1 == 4){
				verde=15;
			}
		}
		if(verde == 15 || (cor1 == 4 && cor2 == 4)){


			setMultipleMotors(50,motorA,motorB);
			wait(610,milliseconds);

			setMotor(motorA,30);
			moveMotor(motorB,750,degrees,-30);

			while(cor1==1){
				setMotor(motorB,-30);
				setMotor(motorA,30);
			}
			while(cor1!=1){
				setMotor(motorB,50);
				setMotor(motorA,-20);
			}
			setMotor(motorB,50);
			setMotor(motorA,-20);
			wait(100, milliseconds);
			stopAllMotors();
			wait(200,milliseconds);
		}
		else{



			stopAllMotors();
			setMultipleMotors(50,motorA,motorB);
			wait(400, milliseconds);


			stopAllMotors();
			setMotor(motorA,50);
			setMotor(motorB,-20);
			wait(800, milliseconds);
			stopAllMotors();

			wait(100, milliseconds);
			while(cor1!=2){
				setMotor(motorA,50);
				setMotor(motorB,-20);
			}
			stopAllMotors();
			wait(200,milliseconds);
			while(cor1!=1){
				setMotor(motorB,50);
				setMotor(motorA,-20);
			}
			setMotor(motorB,50);
			setMotor(motorA,-20);
			wait(200, milliseconds);
			stopAllMotors();
		}
	}





	//verde direita
	if(cor1==4 && cor2 != 4){

		setMultipleMotors(20, motorA, motorB);
		wait(100, milliseconds);
		//procurando outro verde
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

		if(verde == 15 || (cor1 == 4 && cor2 == 4)){



			setMultipleMotors(50,motorA,motorB);
			wait(610,milliseconds);

			setMotor(motorA,30);
			moveMotor(motorB,770,degrees,-30);

			while(cor1==1){
				setMotor(motorB,-30);
				setMotor(motorA,30);
			}
			while(cor1!=1){
				setMotor(motorB,50);
				setMotor(motorA,-20);
			}
			setMotor(motorB,60);
			setMotor(motorA,-20);
			wait(100, milliseconds);
			stopAllMotors();
			wait(200,milliseconds);

		}
		else{



			stopAllMotors();
			setMultipleMotors(50,motorA,motorB);
			wait(400, milliseconds);


			stopAllMotors();
			setMotor(motorB,50);
			setMotor(motorA,-20);
			wait(800, milliseconds);
			stopAllMotors();

			wait(100, milliseconds);
			while(cor2!=2){
				setMotor(motorB,50);
				setMotor(motorA,-20);
			}
			stopAllMotors();
			wait(200,milliseconds);
			while(cor2!=1){
				setMotor(motorA,50);
				setMotor(motorB,-20);
			}
			stopAllMotors();
		}
	}



	//Dois verdes
	if(cor1 == 4 && cor2 == 4){


		setMultipleMotors(50,motorA,motorB);
		wait(800,milliseconds);

		setMotor(motorA,30);
		moveMotor(motorB,550,degrees,-30);

		while(cor1==1){
			setMotor(motorB,-30);
			setMotor(motorA,30);
		}
		while(cor1!=1){
			setMotor(motorB,50);
			setMotor(motorA,-20);
		}
		setMotor(motorB,50);
		setMotor(motorA,-20);
		wait(100, milliseconds);
		stopAllMotors();
		wait(200,milliseconds);
	}
}
