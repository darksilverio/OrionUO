﻿/***********************************************************************************
**
** ToolTip.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef TOOLTIP_H
#define TOOLTIP_H
//----------------------------------------------------------------------------------
#include "Globals.h"
#include "GLEngine/GLTextTexture.h"
//----------------------------------------------------------------------------------
//Класс для работы с тултипами
class CToolTip
{
	SETGET(uint, Timer);
	SETGET(wstring, Data);
	SETGET(uint, ClilocID);
	SETGET(int, MaxWidth);
	SETGET(WISP_GEOMETRY::CPoint2Di, Position);
	SETGET(bool, Use);

public:
	CToolTip();
	~CToolTip();

	void Reset();

	class CRenderObject *m_Object;

	//Текстура тулпита
	CGLTextTexture Texture;

	//Установить тултип из строки
	void Set(wstring str, int maxWidth = 0);

	//Установить тултип из клилока
	void Set(uint clilocID, string str, int maxWidth = 0, const bool &toCamelCase = false);

	//Отрисовать тултип
	void Draw(const int &cursorWidth = 0, const int &cursorHeight = 0);
};
//----------------------------------------------------------------------------------
extern CToolTip g_ToolTip;
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------
