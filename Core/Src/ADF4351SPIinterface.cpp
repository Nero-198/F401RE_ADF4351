/*
 * ADF4351SPIinterface.cpp
 *
 *  Created on: May 7, 2023
 *      Author: iroen
 */

#include <ADF4351SPIinterface.h>

ADF4351_SPI_interface::ADF4351_SPI_interface(SPI_HandleTypeDef *hspi, GPIO_TypeDef* chipSelectGPIOx, uint16_t chipSelectGPIO_PIN)
: hspi_(hspi), chipSelectGPIOx_(chipSelectGPIOx), chipSelectGPIO_PIN_(chipSelectGPIO_PIN){
	// TODO Auto-generated constructor stub

}

ADF4351_SPI_interface::~ADF4351_SPI_interface() {
	// TODO Auto-generated destructor stub
}

void ADF4351_SPI_interface::sendRegValue(uint32_t regValue){
	HAL_GPIO_WritePin(SPI3_LE_GPIO_Port, SPI3_LE_Pin, GPIO_PIN_RESET);
	HAL_SPI_Transmit(hspi_, (uint8_t*)&regValue, 4, 100);
	HAL_GPIO_WritePin(SPI3_LE_GPIO_Port, SPI3_LE_Pin, GPIO_PIN_SET);
}
