/*
 * ADF4351.cpp
 *
 *  Created on: May 7, 2023
 *      Author: iroen
 */

#include <ADF4351.h>

ADF4351::ADF4351() {
	// TODO Auto-generated constructor stub

}

ADF4351::~ADF4351() {
	// TODO Auto-generated destructor stub
}

uint32_t ADF4351::setRegister(registerControlBits reg_bank, uint32_t reg_name){
	return reg_bank | reg_name;
}

uint32_t ADF4351::setRegister(registerControlBits reg_bank, uint32_t reg_name, uint32_t reg_value){
	uint32_t value = reg_value << reg_name;
	return reg_bank | value;
}
