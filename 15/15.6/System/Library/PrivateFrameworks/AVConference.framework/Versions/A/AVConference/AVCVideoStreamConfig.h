@class NSString;

@interface AVCVideoStreamConfig : NSObject

@property (nonatomic) long long txCodecType;
@property (nonatomic) long long rxCodecType;
@property (nonatomic) long long videoResolution;
@property (nonatomic) long long synchronizationSourceStreamToken;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) unsigned long long rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate;
@property (retain, nonatomic) NSString *rxCodecFeatureListString;
@property (retain, nonatomic) NSString *txCodecFeatureListString;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) int remoteVideoInitialOrientation;
@property (nonatomic) char enableCVO;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) char isVideoProtected;
@property (nonatomic) long long videoStreamMode;
@property (nonatomic) long long captureSource;
@property (nonatomic) long long captureSourceID;
@property (nonatomic) unsigned long long screenDisplayID;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) unsigned long long tilesPerFrame;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic, getter=isLTRPEnabled) char ltrpEnabled;
@property (nonatomic) unsigned long long hdrMode;
@property (retain, nonatomic) NSString *remoteDeviceName;
@property (nonatomic, getter=isLatencySensitiveModeEnabled) char latencySensitiveModeEnabled;
@property (retain, nonatomic) NSString *profileLevel;
@property (nonatomic) long long transportProtocolType;
@property (nonatomic, getter=isFECEnabled) char fecEnabled;
@property (nonatomic, getter=isRTXEnabled) char rtxEnabled;
@property (nonatomic) char shouldSendBlackFramesOnClearScreen;
@property (nonatomic, getter=isFoveationEnabled) char foveationEnabled;

+ (long long)clientCodecTypeWithCodecType:(long long)a0;
+ (long long)clientVideoCaptureSourceFromCaptureSource:(int)a0;
+ (long long)clientVideoResolutionFromResolution:(long long)a0;
+ (long long)clientVideoStreamModeFromVideoStreamType:(long long)a0;
+ (long long)codecTypeWithClientCodecType:(long long)a0;
+ (char)isPixelFormatValid:(unsigned int)a0 hdrMode:(unsigned long long)a1;
+ (int)videoCaptureSourceFromClientCaptureSource:(long long)a0;
+ (long long)videoResolutionFromClientResolution:(long long)a0;
+ (long long)videoStreamTypeFromClientVideoStreamMode:(long long)a0;

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (char)isValidForDirection:(long long)a0;
- (void)setUpWithDictionary:(id)a0;

@end
