#include <becosemsaida.h>
#include <detverde.h>
void verdedireita() {

	//verde direita
	if(cor2==4){
		detverde();

		stopAllMotors();
		wait(300,milliseconds);


		if(v1 == 1 && v2 == 1){
			becosemsaida();
		}



		else{


			setMultipleMotors(-40,motorB,motorA);
			wait(520,milliseconds);
			stopAllMotors();

			stopAllMotors();
			wait(100,milliseconds);




			setMotor(motorB, -20);
			moveMotor(motorA,390, degrees, 20);
			stopAllMotors();
			wait(100,milliseconds);

			//indo pra tras so um pouco
			setMotor(motorB, 40);
			moveMotor(motorA,40, degrees, 40);
			stopAllMotors();
			wait(100,milliseconds);





			//while(cor1!=2 ){
			//setMotor(motorA,40);
			//setMotor(motorB,-40);



			//}

			stopAllMotors();
			wait(100,milliseconds);

			//arrumando
			while(cor1!=1 ){
				setMotor(motorA, -50);
				setMotor(motorB, 50);

			}

		}//else

	}//if verde esquerda

}
