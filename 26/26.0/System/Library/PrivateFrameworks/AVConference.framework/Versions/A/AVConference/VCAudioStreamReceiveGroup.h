@class VCAudioStreamGroupCommon, NSMutableDictionary;
@protocol VCMediaStreamSyncSource;

@interface VCAudioStreamReceiveGroup : VCMediaStreamReceiveGroup <VCAudioStreamGroup> {
    VCAudioStreamGroupCommon *_common;
    struct tagVCAudioStreamGroupPriorityInfo { BOOL isAudioActive; unsigned int audioActiveProbabilityThreshold; unsigned int audioInactiveProbabilityThreshold; unsigned int audioActiveAccumulationThreshold; unsigned int audioInactiveAccumulationThreshold; unsigned int audioActiveCount; unsigned int lastAudioPriority; unsigned int refreshCounter; } _mediaPriorityInfo;
    void /* function */ *_didPullSamplesCallback;
    void *_didPullSamplesCallbackContext;
    BOOL _receivingEndToEndStream;
    float _averageOutputPower;
    unsigned long long _speakerProcsCalled;
    unsigned long long _syncTargetCalled;
    NSMutableDictionary *_syncGroupIdToOverlayTokenMap;
    unsigned int _currentOverlayToken;
}

@property (readonly) id<VCMediaStreamSyncSource> syncSource;
@property (nonatomic) unsigned int audioChannelIndex;
@property (nonatomic) unsigned long long spatialAudioSourceID;
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (readonly, nonatomic) int operatingMode;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;
@property (nonatomic, setter=setVADFilteringEnabled:) BOOL isVADFilteringEnabled;

- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (id)stopCapture;
- (id)startCapture;
- (void)didStart;
- (void)didStop;
- (BOOL)isAudioExpected;
- (BOOL)addSyncDestination:(id)a0;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (BOOL)configureStreams;
- (void)distributeOverlayToken;
- (void)mediaStream:(id)a0 didReceiveNewMediaKeyIndex:(id)a1;
- (unsigned int)preferredOverlayToken;
- (BOOL)removeSyncDestination:(id)a0;
- (void)setActiveStreamIDs:(id)a0;
- (BOOL)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)setOptedInStreamID:(id)a0;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (void)updateActiveVoiceOnly:(BOOL)a0;
- (void)vcMediaStream:(id)a0 didReceiveFirstFrameWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)vcMediaStream:(id)a0 didSwitchToAudioStreamWithID:(unsigned short)a1;
- (void)vcMediaStream:(id)a0 remoteMediaStalled:(BOOL)a1 duration:(double)a2;
- (id)willStart;

@end
