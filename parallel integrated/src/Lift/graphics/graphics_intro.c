﻿/*
 * graphics_intro.c
 *
 * Created: 19/11/2015 06:57:59 م
 *  Author: ahmed
 */ 

#include <graphics_data.h>

const char intro_logo [] = {
	 0x5B, 0x00, 0x36, 0x00,
	 0x00, 0x80, 0xE0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
	 0xFE, 0xFE, 0xFC, 0xF8, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0x7C, 0x3C, 0x3E, 0x7E, 0x7C, 0xFC, 0xFC, 0xF8,
	 0xF8, 0xF8, 0xF8, 0xF8, 0x70, 0x30, 0xB0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8,
	 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
	 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x20, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE4, 0xEC, 0xCE, 0xCE, 0xDF, 0x9F, 0x9F, 0x9F, 0xBF, 0x3F,
	 0x3F, 0x7E, 0x7C, 0x7C, 0x7C, 0x7E, 0xBF, 0x9F, 0xCF, 0xEF, 0xF7, 0xF3, 0xF9, 0x3D, 0x1E, 0xFE,
	 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x7F, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
	 0xFF, 0xFF, 0xC7, 0xC3, 0xFB, 0xFF, 0xFF, 0xFF, 0x1C, 0x0E, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0x00, 0x00, 0x01, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x04, 0xFF, 0xFF, 0xFC,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xC7, 0xE1, 0x71,
	 0xFF, 0xFF, 0xFE, 0x86, 0xC7, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0xF8, 0xF8, 0xF8,
	 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF9, 0xF1, 0x01, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xF9, 0x70, 0x78, 0xFF, 0xFF, 0xBF, 0x83, 0xE3,
	 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00,
	 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x7C, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x30, 0x10, 0x10, 0x10,
	 0x90, 0xF0, 0x60, 0x00, 0x03, 0xC3, 0xE3, 0x33, 0x13, 0x13, 0x33, 0x73, 0xE3, 0x03, 0x03, 0xC3,
	 0xE3, 0x33, 0x13, 0x13, 0x13, 0x63, 0xE3, 0x03, 0x03, 0xC3, 0xE3, 0x31, 0x11, 0x10, 0x10, 0x20,
	 0xE0, 0x80, 0x00, 0x00, 0x01, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F,
	 0x3F, 0x1F, 0x1F, 0x1F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x07, 0x03, 0x01, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0C, 0x0A, 0x1B, 0x19, 0x18, 0x18, 0x00, 0x00,
	 0x07, 0x0F, 0x08, 0x10, 0x10, 0x08, 0x0C, 0x0F, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18,
	 0x0E, 0x0F, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x10, 0x10, 0x18, 0x1C, 0x0F, 0x03,
 };