#include "CLI.h"

int32_t CLI_Scan_INT32_Setting(Stream *Port, String pInput, String pCMD, int32_t *pValue, uint32_t pMin, uint32_t pMax, uint32_t pBase,String pOutputPrompt)
{	
	int ret_val = 0;
	
	if (pInput.startsWith(pCMD))
	{
		String ResponseAppendString = "";
		
		int index = pCMD.length();
			
		bool echo_value = false;
			
		if (pInput[index] == '?')
		{
			ret_val |= CLI_SCAN_GET_OK;
			echo_value = true;
		}			
		else if (pInput[index] == '=')
		{
			int temp_value = strtol(pInput.substring(index + 1).c_str(), 0, pBase);        // decimal conversion
			
			echo_value = true;
				
			// check the value is within range
			if(temp_value > pMax)
			{
				ret_val |= CLI_SCAN_SET_ERR_MAX;       // out of range!
				ResponseAppendString += ",ERR_MAX";
			}			
			else if(temp_value < pMin)
			{
				ret_val |= CLI_SCAN_SET_ERR_MIN;       // out of range!
				ResponseAppendString += ",ERR_MIN";
			}
			else 
			{
				if (*pValue != temp_value)
				{
					*pValue = temp_value;
					ret_val |= CLI_SCAN_SET_OK;
					ResponseAppendString += ",OK";					
				}
				else
				{
					ResponseAppendString += ",SAME";
				}
			}
		}
		else
		{
			// invalid input - not ? or =
			return ret_val;
		}
		
		if (echo_value)
		{
			Port->print(pOutputPrompt);
			Port->print(pCMD);
			Port->print("=");
			Port->print(*pValue, pBase);
			Port->println(ResponseAppendString);
		}		
	}
		
	return ret_val;
}

uint32_t CLI_Scan_UINT32_Setting(Stream *Port, String pInput, String pCMD, uint32_t *pValue, uint32_t pMin, uint32_t pMax, uint32_t pBase, String pOutputPrompt)
{	
	int ret_val = 0;
	
	if (pInput.startsWith(pCMD))
	{
		String ResponseAppendString = "";
		
		int index = pCMD.length();
			
		bool echo_value = false;
			
		if (pInput[index] == '?')
		{
			ret_val |= CLI_SCAN_GET_OK;
			echo_value = true;
		}			
		else if (pInput[index] == '=')
		{
			uint32_t temp_value = strtol(pInput.substring(index + 1).c_str(), 0, pBase);         // decimal conversion
			
			echo_value = true;
				
			// check the value is within range
			if(temp_value > pMax)
			{
				ret_val |= CLI_SCAN_SET_ERR_MAX;        // out of range!
				ResponseAppendString += ",ERR_MAX";
			}			
			else if(temp_value < pMin)
			{
				ret_val |= CLI_SCAN_SET_ERR_MIN;         // out of range!
				ResponseAppendString += ",ERR_MIN";
			}			
			else
			{
				if (*pValue != temp_value)
				{
					*pValue = temp_value;
					ret_val |= CLI_SCAN_SET_OK;
					ResponseAppendString += ",OK";					
				}
				else
				{
					ResponseAppendString += ",SAME";
				}
			}
		}
		else
		{
			// invalid input - not ? or =
			return ret_val;
		}
		
		if (echo_value)
		{
			Port->print(pOutputPrompt);			
			Port->print(pCMD);
			Port->print("=");
			Port->print(*pValue, pBase);
			Port->println(ResponseAppendString);			
		}		
	}
		
	return ret_val;
}

uint16_t CLI_Scan_UINT16_Setting(Stream *Port, String pInput, String pCMD, uint16_t *pValue, uint32_t pMin, uint16_t pMax, uint32_t pBase,String pOutputPrompt)
{	
	int ret_val = 0;
	
	if (pInput.startsWith(pCMD))
	{
		String ResponseAppendString = "";
		
		int index = pCMD.length();
			
		bool echo_value = false;
			
		if (pInput[index] == '?')
		{
			ret_val |= CLI_SCAN_GET_OK;
			echo_value = true;
		}			
		else if (pInput[index] == '=')
		{
			uint32_t temp_value = strtol(pInput.substring(index + 1).c_str(), 0, pBase);          // decimal conversion
			
			echo_value = true;
				
			// check the value is within range
			if(temp_value > pMax)
			{
				ret_val |= CLI_SCAN_SET_ERR_MAX;          // out of range!
				ResponseAppendString += ",ERR_MAX";
			}
			else if(temp_value < pMin)
			{
				ret_val |= CLI_SCAN_SET_ERR_MIN;          // out of range!
				ResponseAppendString += ",ERR_MIN";
			}						
			else
			{
				if (*pValue != temp_value)
				{
					*pValue = temp_value;
					ret_val |= CLI_SCAN_SET_OK;
					ResponseAppendString += ",OK";					
				}
				else
				{
					ResponseAppendString += ",SAME";
				}
			}
		}
		else
		{
			// invalid input - not ? or =
			return ret_val;
		}
		
		if (echo_value)
		{
			Port->print(pOutputPrompt);			
			Port->print(pCMD);
			Port->print("=");
			Port->print(*pValue, pBase);
			Port->println(ResponseAppendString);			
		}		
	}
		
	return ret_val;
}

uint8_t CLI_Scan_UINT8_Setting(Stream *Port, String pInput, String pCMD, uint8_t *pValue, uint32_t pMin, uint8_t pMax, uint32_t pBase, String pOutputPrompt)
{	
	int ret_val = 0;
	
	if (pInput.startsWith(pCMD))
	{
		String ResponseAppendString = "";
		
		int index = pCMD.length();
			
		bool echo_value = false;
			
		if (pInput[index] == '?')
		{
			ret_val |= CLI_SCAN_GET_OK;
			echo_value = true;
		}			
		else if (pInput[index] == '=')
		{
			uint32_t temp_value = strtol(pInput.substring(index + 1).c_str(), 0, pBase);           // decimal conversion
			
			echo_value = true;
				
			// check the value is within range
			if(temp_value > pMax)
			{
				ret_val |= CLI_SCAN_SET_ERR_MAX;          // out of range!
				ResponseAppendString += ",ERR_MAX";
			}
			else if(temp_value < pMin)
			{
				ret_val |= CLI_SCAN_SET_ERR_MIN;           // out of range!
				ResponseAppendString += ",ERR_MIN";
			}			
			else
			{
				if (*pValue != temp_value)
				{
					*pValue = temp_value;
					ret_val |= CLI_SCAN_SET_OK;
					ResponseAppendString += ",OK";					
				}
				else
				{
					ResponseAppendString += ",SAME";
				}
			}
		}
		else
		{
			// invalid input - not ? or =
			return ret_val;
		}
		
		if (echo_value)
		{
			Port->print(pOutputPrompt);			
			Port->print(pCMD);
			Port->print("=");
			Port->print(*pValue, pBase);
			Port->println(ResponseAppendString);			
		}		
	}
		
	return ret_val;
}
