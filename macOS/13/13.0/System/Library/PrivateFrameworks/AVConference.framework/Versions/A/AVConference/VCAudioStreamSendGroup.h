@class AVCBasebandCongestionDetector, VCSystemAudioCaptureSession, VCAudioStreamGroupCommon, VCRedundancyControllerAudio;

@interface VCAudioStreamSendGroup : VCMediaStreamSendGroup <VCRedundancyControllerDelegate, VCAudioStreamGroup> {
    VCAudioStreamGroupCommon *_common;
    BOOL _lastEnqueuedStreamUpdateEventWasEmpty;
    struct opaqueCMSimpleQueue { } *_audioStreamUpdateEventQueue;
    struct opaqueCMSimpleQueue { } *_audioRedundancyChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_audioStreamUpdatePool;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_audioRedundancyEventPool;
    struct tagVCMediaQueue { } *_mediaQueue;
    unsigned char _lastAudioPriority;
    BOOL _forcedAudioPriorityEnabled;
    unsigned char _forcedAudioPriorityValue;
    double _forcedAudioPriorityLastUpdateTime;
    struct opaqueVCVoiceDetector { } *_voiceDetector;
    VCRedundancyControllerAudio *_redundancyController;
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;
    struct tagVCAudioDucker { } *_audioDucker;
    BOOL _shouldScheduleMediaQueue;
    float _averageInputPower;
}

@property (nonatomic, setter=setVADFilteringEnabled:) BOOL isVADFilteringEnabled;
@property (nonatomic, setter=setCurrentDTXEnabled:) BOOL isCurrentDTXEnabled;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic) unsigned int cellularUniqueTag;
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;

- (void)dealloc;
- (id)stopCapture;
- (id)initWithConfig:(id)a0;
- (id)startCapture;
- (BOOL)configureStreams;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (BOOL)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (id)willStart;
- (void)didStop;
- (BOOL)addSyncDestination:(id)a0;
- (BOOL)removeSyncDestination:(id)a0;
- (void)setMuteOnStreams;
- (void)updateActiveMediaStreamIDs:(id)a0 withTargetBitrate:(unsigned int)a1 mediaBitrates:(id)a2;
- (id)activeStreamKeys;
- (void)redundancyController:(id)a0 redundancyVectorDidChange:(struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[32]; })a1;
- (void)redundancyController:(id)a0 redundancyPercentageDidChange:(unsigned int)a1;
- (void)redundancyController:(id)a0 redundancyIntervalDidChange:(double)a1;
- (void)setPeerSubscribedStreams:(id)a0;
- (void)updateActiveVoiceOnly:(BOOL)a0;
- (BOOL)createIOEventQueues;
- (void)cleanupIOEventQueues;
- (void)flushAudioEventQueue;
- (void)flushAudioRedundancyEventQueue;
- (void)startVoiceActivityDetection;
- (void)stopVoiceActivityDetection;
- (void)startDynamicDucker;
- (void)stopDynamicDucker;
- (id)setupRedundancyController;
- (id)checkStreamsForAudioOptIn:(id)a0;

@end
