/**
  ******************************************************************************
  * @file           : axes_to_buttons.c
  * @brief          : Axis to buttons driver implementation
		
		FreeJoy software for game device controllers
    Copyright (C) 2020  Yury Vostrenkov (yuvostrenkov@gmail.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
		
  ******************************************************************************
  */

#include "axis_to_buttons.h"
#include "buttons.h"


/**
  * @brief  Getting buttons state from axis to buttons
	* @param  axis_data: Input axis data
	* @param  btn_num: Number of button in axis to buttons
	* @param  axis_to_btn: Pointer to axis to button configuration
  * @retval Button state
  */
uint8_t GetPressedFromAxis (uint8_t btn_num, axis_to_buttons_t * axis_to_btn, int32_t tmp)
{
	uint8_t ret = 0;
	return ret;
}

/**
  * @brief  Getting buttons states from axis to buttons
	* @param  raw_button_data_buf: Pointer to raw buttons data buffer
	* @param  p_dev_config: Pointer to device configuration
	* @param  pos: Pointer to button position counter
  * @retval None
  */
void AxisToButtonsGet (uint8_t * raw_button_data_buf, dev_config_t * p_dev_config, uint8_t * pos)
{
}
