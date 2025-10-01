#pragma once

#include "Module.h"
#include "Globals.h"

#include "Box2d/box2d.h"


// TODO 1: Include Box 2 header


// Module --------------------------------------
class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();
	int inline METERS_TO_PIXELS(float meters);
	float inline PIXELS_TO_METERS(int pixels);
	void SpawnShape(int x, int y);
	

private:
	bool debug;
	b2World* world = nullptr;
	
};