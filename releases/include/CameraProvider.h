#pragma once

#include "Camera.h"


class CameraProviderSource
{
public:
	virtual const char* getName() = 0;

};


class CameraDiscoveryConsumer
{
public:
	virtual void cameraDiscoverAbort(CameraProviderSource* source) = 0;
	virtual void cameraDiscoverTimeout(CameraProviderSource* source) = 0;
	virtual void cameraDiscovered(CameraSource* source) = 0;

};


class CameraProvider
{
public:
	virtual const char* getName() = 0;
	virtual const char* getDesc() = 0;

	virtual void discover(CameraDiscoveryConsumer* const consumer, int timeout) = 0;

	virtual Camera* connect(const char* url) const = 0;

};
