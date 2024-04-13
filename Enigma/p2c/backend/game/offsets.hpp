#pragma once
#ifndef OFFSETS_HPP
#define OFFSETS_HPP

struct o
{
	uintptr_t gworld = 0x1216B7B8;
	uintptr_t viewpoint = 0xE322218;
	uintptr_t gameinstance = 0x1d8;
	uintptr_t localplayers = 0x38;
	uintptr_t playerstate = 0x2b0;
	uintptr_t persistentlevel = 0x30; 
	uintptr_t acknowledgedpawn = 0x338; 
	uintptr_t playercontroller = 0x30; 
	uintptr_t rootcomp = 0x198; 
	uintptr_t gamestate = 0x160;
	uintptr_t entitycount = 0xA0;
	uintptr_t pawnpriv = 0x308; 
	uintptr_t entityarray = 0x2A8; ;
	uintptr_t relativelocation = 0x120;
	uintptr_t mesh = 0x318;
	uintptr_t CurrentActor = 0x8; //??
	uintptr_t teamid = 0x1251;
	uintptr_t weapondata = 0x450; //??
	uintptr_t displayname = 0x98; //??
	uintptr_t length = 0x40; //??

	uintptr_t currentweapon = 0x948; //??

	uintptr_t comptowrld = 0x1c0;

	uintptr_t bonearray = 0x5B0; //??
	uintptr_t bonec = 0x60;// ??

	uintptr_t namepoolchunk = 0x10EFDA00;

	uintptr_t lastsubmit = 0x2E8; //??
	uintptr_t lastrender = 0x2F0; //??

	struct b
	{
		int humanbase = 0;
		int	humanpelvis = 2;
		int	humanlthigh1 = 71;
		int	humanlthigh2 = 77;
		int	humanlthigh3 = 72;
		int	humanlcalf = 74;
		int	humanlfoot = 86;
		int	humanltoe = 76;
		int	humanrthigh1 = 78;
		int	humanrthigh2 = 84;
		int	humanrthigh3 = 79;
		int	humanrcalf = 81;
		int	humanrfoot = 87;
		int	humanrtoe = 83;
		int	humanspine1 = 7;
		int	humanspine2 = 5;
		int	humanspine3 = 2;
		int	humanlcollarbone = 9;
		int	humanlupperarm = 35;
		int	humanlforearm1 = 36;
		int	humanlforearm23 = 10;
		int	humanlforearm2 = 34;
		int	humanlforearm3 = 33;
		int	humanlpalm = 32;
		int	humanrcollarbone = 98;
		int	humanrupperarm = 64;
		int	humanrforearm1 = 65;
		int	humanrforearm23 = 39;
		int	humanrforearm2 = 63;
		int	humanrforearm3 = 62;
		int	humanrpalm = 58;
		int	humanneck = 67;
		int	humanhead = 109;
		int	humanchest = 66;
	};
};

std::unique_ptr<o> offsets = std::make_unique<o>();
std::unique_ptr<o::b> bones = std::make_unique<o::b>();

#endif