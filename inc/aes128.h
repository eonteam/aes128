/******************************************************************************************
* Copyright 2015, 2016 Ideetron B.V.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************************/
/******************************************************************************************
*
* File:        AES-128_V10.h
* Author:      Gerben den Hartog
* Compagny:    Ideetron B.V.
* Website:     http://www.ideetron.nl/LoRa
* E-mail:      info@ideetron.nl
******************************************************************************************/
/****************************************************************************************
*
* Created on: 			20-10-2015
* Supported Hardware: ID150119-02 Nexus board with RFM95
*
* Firmware Version 1.0
* First version
****************************************************************************************/

#ifndef __AES128_H_
#define __AES128_H_

/*
********************************************************************************************
* FUNCTION PROTOTYPES
********************************************************************************************
*/

// Function for encrypting data using AES-128
// @param {Data} must be 16 bytes (128 bits)
// @param {Key} must be 16 bytes (128 bits)
// @note This function is not thread safe
void AES_Encrypt(unsigned char *Data, unsigned char *Key);

#endif
