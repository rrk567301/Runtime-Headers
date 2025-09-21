@class NSString, NSMutableDictionary, NSMutableOrderedSet;
@protocol VCMediaStreamSyncSource;

@interface VCVideoStreamConfig : VCMediaStreamConfig {
    double _mediaStallRefresh;
}

@property (nonatomic) long long videoResolution;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (readonly, nonatomic) NSMutableOrderedSet *txBitrateTiers;
@property (nonatomic) unsigned long long txInitialBitrate;
@property (nonatomic) unsigned long long rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate;
@property (readonly, nonatomic) NSMutableDictionary *rxCodecFeatureListStrings;
@property (readonly, nonatomic) NSMutableDictionary *txCodecFeatureListStrings;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) int remoteVideoInitialOrientation;
@property (nonatomic) char enableCVO;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) char isVideoProtected;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long sourceFramerate;
@property (nonatomic) int encodingMode;
@property (nonatomic) int encoderUsage;
@property (nonatomic) _Atomic unsigned char *videoPriorityPointer;
@property (nonatomic) long long captureSourceID;
@property (nonatomic) char forceL4SHighDataRate;
@property (nonatomic) char shouldSendBlackFramesOnClearScreen;
@property (nonatomic) char foveationEnabled;
@property (nonatomic) unsigned int screenDisplayID;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) unsigned long long tilesPerFrame;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) char ltrpEnabled;
@property (nonatomic) int hdrMode;
@property (retain, nonatomic) NSString *remoteDeviceName;
@property (retain, nonatomic) NSString *profileLevel;
@property (nonatomic) unsigned int parameterSets;
@property (nonatomic) char temporalScalingEnabled;
@property (nonatomic) char isVariableSliceModeEnabled;
@property (nonatomic) char rtcpPSFB_FIREnabled;
@property (nonatomic) id<VCMediaStreamSyncSource> syncSource;
@property (nonatomic) char useVideoJitterForVideoPlayout;
@property (nonatomic) char useInBandFEC;
@property (nonatomic) unsigned int audioIOSampleRate;
@property (nonatomic) double minPlaybackInterval;
@property (nonatomic) double minRenderingDelay;
@property (nonatomic) char resetSendRTPTimestampOnStop;
@property (nonatomic) unsigned long long maxEncoderPixels;
@property (nonatomic) char forceZeroRegionOfInterestOrigin;
@property (nonatomic) char fecEnabled;
@property (nonatomic) char rtxEnabled;
@property (nonatomic) int transportProtocolType;
@property (nonatomic) char shouldEnableMLEnhance;
@property (nonatomic) double mediaStallTimeout;
@property (nonatomic) double mediaStallReportRepeatInterval;
@property (nonatomic) int fecHeaderVersion;
@property (nonatomic) char fecGeneratorEnabled;
@property (nonatomic) char deferredAssemblyEnabled;
@property (nonatomic) char looseAVSyncEnabled;

+ (unsigned int)profileLevelIdForString:(id)a0;
+ (id)profileLevelStringForId:(unsigned int)a0;
+ (char)validateClientDictionary:(id)a0;

- (void)dealloc;
- (id)init;
- (void)addRxCodecFeatureListString:(id)a0 codecType:(long long)a1;
- (void)addTxBitrateTier:(id)a0;
- (void)addTxCodecFeatureListString:(id)a0 codecType:(long long)a1;
- (char)applyVideoStreamClientDictionary:(id)a0;
- (id)initWithClientDictionary:(id)a0;
- (void)initializeParameterSets;
- (char)updateWithClientDictionary:(id)a0;

@end
