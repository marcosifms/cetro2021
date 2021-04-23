void noventagrausdireita()
{

	//90 graus direita
	if (cor2 != BRANCO)
	{
		stopAllMotors();
		if (cor4 != BRANCO)
		{
			wait(100, milliseconds);

			setMultipleMotors(-40, motorB, motorA);
			wait(450, milliseconds);

			stopAllMotors();

			while (cor1 == BRANCO)
			{ //VIRAR ATE ACHAR O PRETO
				setMotor(motorA, -90);
				setMotor(motorB, 50);
			}

			stopAllMotors();
			wait(200, milliseconds);

			setMotor(motorA, 25);
			setMotor(motorB, -25);
			wait(100, milliseconds);

			stopAllMotors();

		} //if cor4 do 90

	} //IF cor2 do 90

} //VOID
