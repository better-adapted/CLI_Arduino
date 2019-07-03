#pragma once

#include <Arduino.h>

//TODO: add your function declarations here
#define CLI_SCAN_GET_OK						0x0002
#define CLI_SCAN_SET_OK						0x0001
#define CLI_SCAN_SET_ERR_MIN				0x8000
#define CLI_SCAN_SET_ERR_MAX				0x4000
	
int32_t CLI_Scan_INT32_Setting(Stream *Port, String pInput, String pCMD, int32_t *pValue, uint32_t pMin, uint32_t pMax, uint32_t pBase, String pOutputPrompt);
uint32_t CLI_Scan_UINT32_Setting(Stream *Port, String pInput, String pCMD, uint32_t *pValue, uint32_t pMin, uint32_t pMax, uint32_t pBase, String pOutputPrompt);
uint16_t CLI_Scan_UINT16_Setting(Stream *Port, String pInput, String pCMD, uint16_t *pValue, uint32_t pMin, uint16_t pMax, uint32_t pBase, String pOutputPrompt);
uint8_t CLI_Scan_UINT8_Setting(Stream *Port, String pInput, String pCMD, uint8_t *pValue, uint32_t pMin, uint8_t pMax, uint32_t pBase, String pOutputPrompt);
