/*
 * ADF4351SPIinterface.h
 *
 *  Created on: May 7, 2023
 *      Author: iroen
 */

#ifndef INC_ADF4351SPIINTERFACE_H_
#define INC_ADF4351SPIINTERFACE_H_

#include<main.h>

class ADF4351_SPI_interface {
public:
	ADF4351_SPI_interface(SPI_HandleTypeDef *hspi, GPIO_TypeDef* chipSelectGPIOx, uint16_t chipSelectGPIO_PIN);
	virtual ~ADF4351_SPI_interface();

	void sendRegValue(uint32_t regValue);
private:
	SPI_HandleTypeDef *hspi_;
	GPIO_TypeDef* chipSelectGPIOx_;
	uint16_t chipSelectGPIO_PIN_;
};

#endif /* INC_ADF4351SPIINTERFACE_H_ */
