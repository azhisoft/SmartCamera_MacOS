#pragma once

#include "base/Object.h"

#include "CameraConfig.h"


class CameraSource
{
public:
	virtual const char* getName() = 0;
	virtual const char* getUrl() = 0;

};


class CameraConfiguration
{
public:
	virtual const char* getName() = 0;
	virtual bool setName(const char* name) = 0;

	virtual const OVERLAY_CONFIG* getOverlay() = 0;
	virtual bool setOverlay(const OVERLAY_CONFIG* config) = 0;

	virtual const NETWORK_CONFIG* getNetwork() = 0;
	virtual bool setNetwork(const NETWORK_CONFIG* config) = 0;

	virtual const WIFI_CONFIG* getWiFi() = 0;
	virtual bool setWiFi(const WIFI_CONFIG* config) = 0;

	virtual const AUDIO_CONFIG* getAudio() = 0;
	virtual bool setAudio(const AUDIO_CONFIG* config) = 0;

	virtual const VIDEO_CONFIG* getVideo() = 0;
	virtual bool setVideo(const VIDEO_CONFIG* config) = 0;

	virtual const RTMP_CONFIG* getRtmp() = 0;
	virtual bool setRtmp(const RTMP_CONFIG* config) = 0;

	virtual const RTSP_CONFIG* getRtsp() = 0;

};


class Camera : public CameraConfiguration, public Object
{
public:
	virtual CameraSource* getSource() const = 0;

	virtual bool restore() = 0;
	virtual bool reboot() = 0;

	virtual bool disconnect() = 0;

};
