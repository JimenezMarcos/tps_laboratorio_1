

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_


/// @brief Funcion que me permite pedir un numero entero
///
/// @param pNumeroIngresado puntero a la variable que contendra el numero pedido
/// @param mensaje Texto que se muestra al pedir el numero
/// @param mensajeError Texto que se muestra al ingresar un dato invalido
/// @param maximo Valor maximo que puede tener el numero
/// @param minimo Valor minimo que puede tener el numero
/// @param reintentos Cantidad de veces que el usuario puede ingresar un numero
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int getInt(int* pNumeroIngresado, char * mensaje, char * mensajeError, int maximo, int minimo, int reintentos);

/// @brief Funcion que me permite pedir un caracter
///
/// @param pCharIngresado puntero a la variable que contendra el caracter
/// @param mensaje Texto que se muestra al pedir el caracter
/// @param mensajeError Texto que se muestra al ingresar un dato invalido
/// @param maximo Valor maximo en la tabla ascii que puede tener el caracter
/// @param minimo Valot minimo en la tabla ascii que puede tener el caracter
/// @param reintentos Cantidad de errores permitidos al ingresar un caracter
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int getChar(char* pCharIngresado, char * mensaje, char * mensajeError, char maximo, char minimo, int reintentos);

/// @brief Funcion que me permite pedir un numero flotante
///
/// @param pNumeroIngresado puntero a la variable que contendra el numero pedido
/// @param mensaje Texto que se muestra al pedir el numero
/// @param mensajeError Texto que se muestra al ingresar un dato invalido
/// @param maximo Valor maximo que puede tener el numero
/// @param minimo Valor minimo que puede tener el numero
/// @param reintentos Cantidad de veces que el usuario puede ingresar un numero
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int getFloat(float* pNumeroIngresado, char * mensaje, char * mensajeError, int maximo, int minimo, int reintentos);

/// @brief Funcion que calcula un precio descontando un porcentaje "x" del mismo
///
/// @param precioNeto precio que ingresa sin descuento
/// @param precioConDescuento puntero a la variable que contendra el precio con descuento
/// @param porcentajeDescuento porcentaje que se descontara
/// @param mensajeError texto que se muestra al ingresar un dato invalido
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int CalcularDescuento (float precioNeto, float * precioConDescuento, int porcentajeDescuento, char* mensajeError);

/// @brief Funcion que me permite calcular el interes de un valor
///
/// @param precioNeto precio que ingresa sin interes
/// @param precioConDescuento puntero a la variable que contendra el precio con interes
/// @param porcentajeDescuento porcentaje que se recargara
/// @param mensajeError texto que se muestra al ingresar un dato invalido
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int CalcularInteres (float precioNeto, float * precioConInteres, int porcentajeInteres, char* mensajeError);

/// @brief Funcion que permite ingresar dos numeros flotante y dividirlos.
///
/// @param primerNumero Primer operando
/// @param segundoNumero Segundo operando
/// @param pResultado puntero a la variable que contendra el resultado
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int dividirFlotantes (float primerNumero, float segundoNumero, float* pResultado);

/// @brief Funcion que permite calcular al valor Bitcoin un precio determinado
///
/// @param precioInicial Precio con la moneda ingresada
/// @param pPrecioConvertido Puntero apunta a la variable que contendra el precio convertido
/// @param valorBitcoin Valor por el cual se cotizara el precio ingresado
/// @param mensajeError texto que se muestra al ingresar un dato invalido
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int ConvertirABitcoin (float precioInicial, float * pPrecioConvertido, float valorBitcoin, char * mensajeError);

/// @brief Funcion que permite sumar dos numeros flotantes
///
/// @param primerNumero primer operando
/// @param segundoNumero segundo operando
/// @param pResultado puntero a la variable que contendra el resultado
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int sumarNumeros (float primerNumero, float segundoNumero, float * pResultado);

/// @brief Funcion que permite restar dos numeros flotantes
///
/// @param primerNumero primer operando
/// @param segundoNumero segundo operando
/// @param pResultado puntero a la variable que contendra el resultado
/// @return 0 si la implementacion fue un exito, -1 si hubieron errores
int restarNumeros (float primerNumero, float segundoNumero, float * pResultado);

#endif /* BIBLIOTECA_H_ */
