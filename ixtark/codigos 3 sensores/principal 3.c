#pragma config(Sensor, S1,     luz1,           sensorEV3_Color)
#pragma config(Sensor, S2,     luz2,           sensorEV3_Color)
#pragma config(Sensor, S3,     luz3,           sensorEV3_Color)
#pragma config(Sensor, S4,     luz4,           sensorEV3_Color)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//!!Code automatically generated by 'ROBOTC' configuration wizard               !!//

#define BRANCO 1
#define PRETO 2
#define VERDE 4

int cor1, cor2, cor3, cor4;
int a1,b1,c1,a2,b2,c2,a3,b3,c3,a4,b4,c4,;



/*
int var=0;
int contador=0;
int preto=0;
*/

int somaS1;
int somaS2;


task obterCor(){
//void obterCor2021() {
	while(true){
		//RED GREEN BLUE

		getColorRawRGB(luz1,a1,b1,c1); // Definindo para a1 = R, b1 = G e c1 = B do sensor1
		getColorRawRGB(luz2,a2,b2,c2);	// Definindo para a2 = R, b2 = G e c2 = B do sensor2
		getColorRawRGB(luz3,a3,b3,c3); //Definido para a3 = R, b3 = G e c3 = B do sensor 3
		getColorRawRGB(luz4,a4,b4,c4); //Definido para a4 = R, b4 = G e c4 = B do sensor 4

		somaS1 = (a1 * 2) + (b1*3) + (c1*1);

		somaS2 = (a2 * 2) + (b2*3) + (c2*1);
		int somaS3 = (a3 * 2) + (b3*3) + (c3*1);
		int somaS4 = (a4 * 2) + (b4*3) + (c4*1);

		int intervBr1 =1000, intervBr2=2200;
		int intervPr1=30, intervPr2=290;
		int intervVer1=300, intervVer2=650;
		//S1 - Luz1
		if(somaS1>intervBr1 && somaS1<intervBr2){
			//Verificacao: Branco Esquerdo
			cor1=BRANCO;
		}//fim BRANCO

		else if(somaS1>intervPr1 && somaS1<intervPr2){
			//Verificacao: Preto Esquerdo
			cor1=PRETO;
		}//fim PRETO

		/*else if(somaS1>250 && somaS1<300){
		//Verificacao: Meio Preto
		cor1=3;
		}//fim MEIOPRETO
		*/

		else if(somaS1>intervVer1 && somaS1<intervVer2){
			//Verificacao: Verde Esquerdo
			cor1=4;
		}//fim VERDE
		/*

		else if(somaS1>560 && somaS1<615){//REFAZER LEITURA
		//Verificacao: Prata Esquerdo
		cor1=5;
		}//fim PRATA
		*/

		else{
			cor1 = -1; //indefinido;
		} //Caso for nenhuma das condicoes, entao e branco.

		//displayBigTextLine(8,"cor:%d",cor1);



		//S2 - Luz2
		if(somaS2>intervBr1 && somaS2<intervBr2){
			//Verificacao: Branco Direito
			cor2=BRANCO;
		}// fim BRANCO

		else if(somaS2>intervPr1 && somaS2<intervPr2){
			//Verificacao: Preto Direito
			cor2=PRETO;
		}// fim PRETO
		/*
		else if(somaS2>250 && somaS2<300){
		//Verificacao: Meio Preto Direito
		cor2=3;
		}// fim MEIOPRETO
		*/

		else if(somaS2>intervVer1 && somaS2<intervVer2){
			//Verificacao: Verde Direito
			cor2=4;
		}	//fim VERDE
		/*
		else if(somaS2>541 && somaS2<585){// REFAZER LEITURA
		//Verificacao: Prata Direito
		cor2=5;
		}// fim PRATA
		*/

		else{
			cor2 = -1; //indefinido;
		}


		//S3 - Luz3
		if(somaS3>intervBr1 && somaS3<intervBr2){
			//Verificacao: Branco Direito
			cor3=BRANCO;
		}// fim BRANCO

		else if(somaS3>intervPr1 && somaS3<intervPr2){
			//Verificacao: Preto Direito
			cor3=PRETO;
		}// fim PRETO
		/*
		else if(somaS3>250 && somaS3<300){
		//Verificacao: Meio Preto Direito
		cor3=3;
		}// fim MEIOPRETO
		*/

		else if(somaS3>intervVer1 && somaS3<intervVer2){
			//Verificacao: Verde Direito
			cor3=4;
		}	//fim VERDE
		/*
		else if(somaS3>541 && somaS3<585){// REFAZER LEITURA
		//Verificacao: Prata Direito
		cor3=5;
		}// fim PRATA
		*/

		else{
			cor3 =-1; //indefinido;
		}

		//S4 - Luz4
		if(somaS4>intervBr1 && somaS4<intervBr2){
			//Verificacao: Branco Esquerdo
			cor4=BRANCO;
		}//fim BRANCO

		else if(somaS4>intervPr1 && somaS4<intervPr2){
			//Verificacao: Preto Esquerdo
			cor4=PRETO;
		}//fim PRETO
		/*
		else if(somaS4>250 && somaS4<300){
		//Verificacao: Meio Preto
		cor4=3;
		}//fim MEIOPRETO
		*/

		else if(somaS4>intervVer1 && somaS4<intervVer2){
			//Verificacao: Verde Esquerdo
			cor4=4;
		}//fim VERDE
		/*
		else if(somaS4>560 && somaS4<615){//REFAZER LEITURA
		//Verificacao: Prata Esquerdo
		cor4=5;
		}//fim PRATA
		*/

		else{
			cor4 = -1; //indefinido;
		} //Caso for nenhuma das condicoes, entao e branco.

		//displayCenteredBigTextLine(3,"cor1 %d|%d|%d",a1,b1,c1);
		//displayCenteredBigTextLine(6,"cor2 %d|%d|%d",a2,b2,c2);


		  displayCenteredBigTextLine(7,"cor1 %d, %d",somaS1, cor1 );
			displayCenteredBigTextLine(9,"cor2 %d, %d",somaS2, cor2 );

			//displayCenteredBigTextLine(11,"cor3 %d, %d",somaS3, cor3);
			//displayCenteredBigTextLine(13,"cor4 %d, %d",somaS4, cor1);

	}

}//fim do while de obter cor

//#include <sala3.h>;
//#include<obstaculo.h>;
#include<noventagrausdireita.h>
#include<noventagrausesquerda.h>;
#include<verdeesquerda.h>;
//#include<verdedireita.h>;
//#include<rampa.h>;

void andarReto(){
	setMultipleMotors(-28, motorA,motorB);
	//	wait(0.2, seconds);
	//	stopAllMotors();
}
task main(){

int numeros1[200];
	int numeros2[200];
	startTask(obterCor);

	while(true){
		//obterCor2021();
		//displayBigTextLine(8,"cor1:%d, %d",somaS1, cor1);
		//displayBigTextLine(12,"cor2:%d, %d",somaS2, cor2);

		//andar reto
		if(cor1==BRANCO && cor2==BRANCO){

			andarReto();
			} else {
			stopAllMotors();
	    //wait(4, seconds);
			noventagrausdireita();

			noventagrausesquerda();

			/*	if(cor1==PRETO&&cor2==PRETO&&cor3==PRETO&&cor4==PRETO){
			stopAllMotors();
			setMultipleMotors(-20, motorA,motorB);
			wait(100,milliseconds);
			}
			*/
			//esquerda
			if (cor1 != BRANCO){
				while  (cor2 != BRANCO){
					setMotor(motorB, -15);
				}
				//corre��o para sair totalemente do preto
				stopAllMotors();
				setMotor(motorB, -15);
				setMotor(motorA, 10);
				wait(0.4, seconds);
			}
			//direita
			if  (cor2 != BRANCO){
				while  (cor1 != BRANCO){
					setMotor(motorA, -15);
				}
				//corre��o para sair totalemente do preto
				stopAllMotors();
				setMotor(motorA, -15);
				setMotor(motorB, 10);
				wait(0.4, seconds);
			}


			verdeesquerda();

			//verdedireita();



			//	obstaculo();


			//	rampa();





		}

	}
}