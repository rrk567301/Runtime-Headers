@class VCAudioStreamGroupCommon;
@protocol VCMediaStreamSyncSource;

@interface VCAudioStreamReceiveGroup : VCMediaStreamReceiveGroup <VCAudioStreamGroup> {
    VCAudioStreamGroupCommon *_common;
    struct tagVCAudioStreamGroupPriorityInfo { char isAudioActive; unsigned int audioActiveProbabilityThreshold; unsigned int audioInactiveProbabilityThreshold; unsigned int audioActiveAccumulationThreshold; unsigned int audioInactiveAccumulationThreshold; unsigned int audioActiveCount; unsigned int lastAudioPriority; unsigned int refreshCounter; } _mediaPriorityInfo;
    void /* function */ *_didPullSamplesCallback;
    void *_didPullSamplesCallbackContext;
    char _receivingEndToEndStream;
    float _averageOutputPower;
    unsigned long long _speakerProcsCalled;
    unsigned long long _syncTargetCalled;
}

@property (readonly) id<VCMediaStreamSyncSource> syncSource;
@property (nonatomic) unsigned int audioChannelIndex;
@property (nonatomic, setter=setMuted:) char isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (readonly, nonatomic) int operatingMode;
@property (setter=setPowerSpectrumEnabled:) char isPowerSpectrumEnabled;

- (void)dealloc;
- (id)stopCapture;
- (id)initWithConfig:(id)a0;
- (id)startCapture;
- (void)didStart;
- (void)didStop;
- (char)isAudioExpected;
- (char)addSyncDestination:(id)a0;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (char)configureStreams;
- (void)mediaStream:(id)a0 didReceiveNewMediaKeyIndex:(id)a1;
- (char)removeSyncDestination:(id)a0;
- (void)setActiveStreamIDs:(id)a0;
- (char)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)setMuteOnStreams;
- (void)setOptedInStreamID:(id)a0;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (void)vcMediaStream:(id)a0 didReceiveFirstFrameWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)vcMediaStream:(id)a0 didSwitchToAudioStreamWithID:(unsigned short)a1;
- (void)vcMediaStream:(id)a0 remoteMediaStalled:(char)a1 duration:(double)a2;
- (id)willStart;

@end
