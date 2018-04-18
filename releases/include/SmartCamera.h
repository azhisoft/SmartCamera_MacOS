#pragma once

#include "base/ArrayList.h"

#include "Camera.h"
#include "CameraProvider.h"


class SmartCamera
{
public:
	virtual ArrayList<CameraProvider*>* getSupported() const = 0;

	virtual void discover(ArrayList<CameraProvider*>* const providers, CameraDiscoveryConsumer* const consumer, int timeout) = 0;

	virtual Camera* connect(const char* url) const = 0;

	virtual void smartlink(const char* ssid, const char* password, int timeout) = 0;

};


#ifdef _WINDOWS

SmartCamera* __stdcall SmartCamera_getInstance();

#else

SmartCamera* SmartCamera_getInstance();

#endif
