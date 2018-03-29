#pragma once


typedef struct _tagNetworkConfig {
	bool	dhcp;
	char	ip[16], mask[16], gateway[16];
	char	dns1[16], dns2[16];
	char	macAddr[32];
} NETWORK_CONFIG;


typedef struct _tagWiFiConfig {
	bool	enabled;
	char	ssid[32], password[32];
} WIFI_CONFIG;


typedef enum _emAudioCodec {
	ACODEC_UNDEFINED = 0,
	ACODEC_AAC = 1
} AUDIO_CODEC;

typedef enum _emAudioSample {
	SAMPLE_BASE = 8000,
	SAMPLE_TELEPHONE = 11025,
	SAMPLE_BROADCAST = 22050,
	SAMPLE_VCD = 44100,
	SAMPLE_DVD = 64000,
	SAMPLE_HD_DVD = 96000
} AUDIO_SAMPLE;

typedef struct _tagAudioConfig {
	bool	enabled;
	int		codec;		// 音频编码
	int		samplerate;	// 采样频率
	int		bitrate;	// 码率，单位 Kbps
	int		volume;		// 采样音量，0-100
} AUDIO_CONFIG;


typedef enum _emVideoCodec {
	VCODEC_UNDEFINED = 0,
	VCODEC_H264 = 264,
	VCODEC_H265 = 265
} VIDEO_CODEC;

typedef enum _emVideoResolution {
	RESO_UNDEFINED = 0,
	RESO_720P = 720,
	RESO_1080P = 1080
} VIDEO_RESO;

typedef enum _emVideoBrCtrl {
	CTRL_UNDEFINED = 0,
	CTRL_CBR = 1,
	CTRL_VBR = 2,
	CTRL_CVBR = 3
} VIDEO_BRCTRL;

typedef struct _tagVideoConfig {
	bool	enabled;
	int		codec;	// 视频编码
	int		reso;	// 分辨率
	int		brctrl;	// 码率控制
	int		bitrate;	// 码率，单位 Kbps
	int		framerate;	// 帧率，支持 1-30 FPS
} VIDEO_CONFIG;


typedef struct _tagRtmpConfig {
	bool	enabled;
	char	rtmpUrl[256];
	char	user[32], password[32];
} RTMP_CONFIG;


typedef struct _tagRtspConfig {
	char	mainUrl[64], subUrl[64];
} RTSP_CONFIG;
