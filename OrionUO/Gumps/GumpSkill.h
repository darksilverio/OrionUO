﻿/***********************************************************************************
**
** GumpSkill.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef GUMPSKILL_H
#define GUMPSKILL_H
//----------------------------------------------------------------------------------
class CGumpSkill : public CGump
{
private:
	static const int ID_GS_LOCK_MOVING = 1;

public:
	CGumpSkill(const uint &serial, const int &x, const int &y);
	virtual ~CGumpSkill();

	GUMP_BUTTON_EVENT_H;

	virtual void OnLeftMouseButtonUp();
};
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------
