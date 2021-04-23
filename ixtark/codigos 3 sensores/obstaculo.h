
void obstaculo(){


	if(getColorName (S3)  > 5 ){
		playSound(soundBeepBeep);

		//dando re
		setMotor(motorA, 30);
		moveMotor(motorB,200, degrees, 30);
		stopAllMotors();

		//virando robo ate sensor lateral detectar

		while( SensorValue (S4) > 15 ){
			setMotor(motorA,30);
			setMotor(motorB,-30);


		}//while

		//virando por tempo
		setMotor(motorA, 30);
		moveMotor(motorB,120, degrees, -30);
		stopAllMotors();

		//indo pra frente
		setMotor(motorA, -30);
		moveMotor(motorB,600, degrees, -30);
		stopAllMotors();

		//virando por tempo
		setMotor(motorA, -30);
		moveMotor(motorB,430, degrees, 30);
		stopAllMotors();

		//indo ate achar obstaculo

		while( SensorValue (S4) > 15 ){
			setMotor(motorA,-30);
			setMotor(motorB,-30);


		}//while

		stopAllMotors();
		wait(300,milliseconds);

		//indo pra frente por tempo
		setMotor(motorA, -30);
		moveMotor(motorB,790, degrees, -30);
		stopAllMotors();

		//virando por tempo
		setMotor(motorA, -30);
		moveMotor(motorB,445, degrees, 30);
		stopAllMotors();

		//indo um pouco por tempo
		setMotor(motorA, -30);
		moveMotor(motorB,190, degrees, -30);
		stopAllMotors();





		//indo pra frente ate achar obstaculo
		while( SensorValue (S4) > 15 ){
			setMotor(motorA,-30);
			setMotor(motorB,-30);


		}//while




		//INDO ATE DESENCONTRAR OBSTACULO
		while( SensorValue (S4) < 15 ){
			setMotor(motorA,-30);
			setMotor(motorB,-30);


		}//while

		//pra traaas
			setMotor(motorA, 30);
		moveMotor(motorB,70, degrees, 30);
		stopAllMotors();


		//virando pra alinhar
		setMotor(motorA, 30);
		moveMotor(motorB,475, degrees, -30);
		stopAllMotors();
		wait(300,milliseconds);


		//indo pra tras
		setMotor(motorA, 30);
		moveMotor(motorB,120, degrees, 30);
		stopAllMotors();
		wait(100,milliseconds);
























		/*











		//indo por tempo

		setMotor(motorA, -50);
		moveMotor(motorB,300, degrees, -50);
		stopAllMotors();

		//virando por tempo

		setMotor(motorA, -50);
		moveMotor(motorB,490, degrees, 50);
		stopAllMotors();

		//indo ate sensor achar obstaculo

		while(getColorName (S3)  < 5 ){
		setMultipleMotors(-20,motorA,motorB);


		}//while

		stopAllMotors();
		wait(300,milliseconds);



		//voltando e procurando condicoes


		while (contobstaculo < 10 ){

		setMultipleMotors(40,motorA,motorB);

		wait(80,milliseconds);

		contobstaculo ++ ;



		if(cor2==2){ // 90 direita

		stopAllMotors();
		wait(300,milliseconds);

		setMotor(motorA, -50);
		moveMotor(motorB,100, degrees, -50);
		stopAllMotors();


		setMotor(motorA, 40);
		moveMotor(motorB,300, degrees, -40);
		stopAllMotors();

		while(cor1!=2 ){
		setMotor(motorA,40);
		setMotor(motorB,-40);

		}// while



		}//if cont direita

		if(cor1==2){// 90 esquerda

		stopAllMotors();
		wait(300,milliseconds);


		setMotor(motorA, -40);
		moveMotor(motorB,100, degrees, -40);
		stopAllMotors();


		setMotor(motorA, -40);
		moveMotor(motorB,300, degrees, 40);
		stopAllMotors();

		while(cor2!=2 ){
		setMotor(motorA,40);
		setMotor(motorB,-40);

		}// while



		}//if cont esquerda


		if(cor1 & cor2 == 2){ //barra preta

		stopAllMotors();
		wait(300,milliseconds);


		setMotor(motorA, -40);
		moveMotor(motorB,100, degrees, -40);
		stopAllMotors();

		setMotor(motorA, -50);
		moveMotor(motorB,500, degrees, 50);
		stopAllMotors();

		while(cor2!=2 ){
		setMotor(motorA,-40);
		setMotor(motorB,50);


		}// while





		}//if barra preta




		if(cor2==4){	//if verde da direita
		stopAllMotors();
		wait(300,milliseconds);



		setMotor(motorA, -40);
		moveMotor(motorB,100, degrees, -40);
		stopAllMotors();


		setMotor(motorB, -40);
		moveMotor(motorA,300, degrees, 40);
		stopAllMotors();


		while(cor1!=2 ){
		setMotor(motorA,40);
		setMotor(motorB,-40);

		}//while verde direita


		}//if verde dreita

		if(cor1==4){ //if verde esquerda
		stopAllMotors();
		wait(300,milliseconds);

		setMotor(motorA, -40);
		moveMotor(motorB,100, degrees, -40);
		stopAllMotors();


		setMotor(motorA, -40);
		moveMotor(motorB,300, degrees, 40);
		stopAllMotors();


		while(cor2!=2 ){
		setMotor(motorB,40);
		setMotor(motorA,-40);

		}//while verde esquerda

		}//if verde esqerda


		if(cor1==4){//if dois verdes
		stopAllMotors();
		wait(300,milliseconds);

		if(cor2==4){

		setMotor(motorA, -40);
		moveMotor(motorB,100, degrees, -40);
		stopAllMotors();

		}

		}//if dois verdes

		}//while cont
		*/
	}//fim if obstaculo



}//void obstaculo
