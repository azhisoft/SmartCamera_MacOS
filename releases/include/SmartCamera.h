#pragma once

#include "Camera.h"
#include "CameraProvider.h"
#include "base/ArrayList.h"


class SmartCamera
{
public:
	virtual ArrayList<CameraProvider*>* getSupported() const = 0;

	virtual void discover(ArrayList<CameraProvider*>* const providers, CameraDiscoveryConsumer* const consumer, int timeout) = 0;

	virtual Camera* connect(const char* url) const = 0;

	virtual void smartlink(const char* ssid, const char* password, int timeout) = 0;

};


SmartCamera* SmartCamera_getInstance();
