#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "biblioteca.h"

int getInt(int* pNumeroIngresado, char * mensaje, char * mensajeError, int maximo, int minimo, int reintentos)
{
	int auxiliar;
	int retorno;

	retorno = -1;


	if(pNumeroIngresado != NULL && mensaje != NULL && mensajeError != NULL && maximo >= minimo && reintentos >= 0)
	{
		do
		{

			printf("%s\n", mensaje);
			scanf("%d", &auxiliar);

			if(auxiliar>=minimo && auxiliar<=maximo)
			{
				*pNumeroIngresado = auxiliar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s\n", mensajeError);
				reintentos--;
			}


		}while(reintentos >= 0);// VER QUE ONDA ESTO
	}


	return retorno;
}

int getChar(char* pCharIngresado, char * mensaje, char * mensajeError, char maximo, char minimo, int reintentos)
{
	char auxiliar;
	int retorno;
	retorno = -1;


	if(pCharIngresado != NULL && mensaje != NULL && mensajeError != NULL && maximo >= minimo && reintentos >= 0)
	{
		do
		{

			printf("%s\n", mensaje);
			fflush(stdin);
			scanf("%c", &auxiliar);
			auxiliar = tolower(auxiliar);
			if(auxiliar>=minimo && auxiliar<=maximo)
			{
				*pCharIngresado = auxiliar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s\n", mensajeError);
				reintentos--;

			}


		}while(reintentos >= 0);
	}


	return retorno;
}

int getFloat(float* pNumeroIngresado, char * mensaje, char * mensajeError, int maximo, int minimo, int reintentos)
{
	float auxiliar;
	int retorno;
	retorno = -1;


	if(pNumeroIngresado != NULL && mensaje != NULL && mensajeError != NULL && maximo >= minimo && reintentos >= 0)
	{
		do
		{

			printf("%s\n", mensaje);
			scanf("%f", &auxiliar);

			if(auxiliar>=minimo && auxiliar<=maximo)
			{
				*pNumeroIngresado = auxiliar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s\n", mensajeError);
				reintentos--;
			}



		}while(reintentos >= 0);
	}


	return retorno;
}

int CalcularDescuento (float precioNeto, float * precioConDescuento, int porcentajeDescuento, char* mensajeError)
{
	int retorno;
	int auxiliar;
	int descuento;
	retorno = -1;

	if(precioConDescuento != NULL && mensajeError != NULL && precioNeto >= 0 && porcentajeDescuento >= 0)
	{
		descuento = (precioNeto * porcentajeDescuento)/100;
		auxiliar = precioNeto - descuento;
		*precioConDescuento = auxiliar;
		retorno = 0;
	}
	else
	{
		printf("%s\n", mensajeError);
	}

	return retorno;
}

int CalcularInteres (float precioNeto, float * precioConInteres, int porcentajeInteres, char* mensajeError)
{
	int retorno;
	int auxiliar;
	int interes;
	retorno = -1;

	if(precioConInteres != NULL && mensajeError != NULL && precioNeto >= 0 && porcentajeInteres >= 0)
	{
		interes = (precioNeto * porcentajeInteres)/100;
		auxiliar = precioNeto + interes;
		*precioConInteres = auxiliar;
		retorno = 0;
	}
	else
	{
		printf("%s\n", mensajeError);
	}

	return retorno;
}

int dividirFlotantes (float primerNumero, float segundoNumero, float* pResultado)
{
	int retorno;
	float auxiliar;

	retorno = -1;

	if(segundoNumero != 0 && pResultado != NULL)
	{
		auxiliar = primerNumero / segundoNumero;
		*pResultado = auxiliar;
		retorno = 0;
	}
	else
	{
		printf("No se puede dividir por 0.\n");
		system("pause");
	}

	return retorno;

}

int ConvertirABitcoin (float precioInicial, float * pPrecioConvertido, float valorBitcoin, char * mensajeError)
{
	int retorno;
	float auxiliar;
	retorno = -1;

	if(pPrecioConvertido != NULL && mensajeError != NULL && precioInicial >= 0)
	{
		auxiliar = precioInicial / valorBitcoin;
		*pPrecioConvertido = auxiliar;
		retorno = 0;
	}
	else
	{
		printf("%s\n", mensajeError);
	}


	return retorno;
}

int sumarNumeros (float primerNumero, float segundoNumero, float * pResultado)
{
	int retorno;
	float auxiliar;
	retorno = -1;

	if(pResultado != NULL)
	{
		auxiliar = primerNumero + segundoNumero;
		*pResultado = auxiliar;
		retorno = 0;
	}

	return retorno;
}

int restarNumeros (float primerNumero, float segundoNumero, float * pResultado)
{
	int retorno;
	float auxiliar;
	retorno = -1;

	if(pResultado != NULL)
	{
		auxiliar = primerNumero - segundoNumero;
		*pResultado = auxiliar;
		retorno = 0;
	}

	return retorno;
}
