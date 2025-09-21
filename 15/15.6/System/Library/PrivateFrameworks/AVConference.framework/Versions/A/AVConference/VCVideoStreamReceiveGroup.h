@class NSNumber, VCRedundancyControllerVideo;

@interface VCVideoStreamReceiveGroup : VCMediaStreamReceiveGroup <VCRedundancyControllerDelegate> {
    _Atomic unsigned char _videoPriority;
    unsigned char _lastVideoPriority;
    char _isVideoDegraded;
    double _isVideoDegradedStartTime;
    char _reportedDegradeStatus;
    char _haveReportedPerfTimers;
    char _isProcessingVideoOptIn;
    NSNumber *_previousOptedInStreamID;
    VCRedundancyControllerVideo *_videoRedundancyController;
    char _isRedundancyRequested;
    char _isMediaSuspended;
    double _lastVideoExpectationSwitch;
    char _isVideoExpected;
    double _lastRecordedExtendedPoorConnection;
    double _poorConnectionTotalLength;
    char _poorConnectionPercentageRegressedFromTelemetrySymptomReported;
    int _poorConnectionPercentageABCReportingThreshold;
    double _startTime;
    double _didReportSymptomOnPoorConnectionDespiteVideoIsReceived;
    double _displayLatency;
    char _shouldConvertSourceRTPTimestamp;
    unsigned long long _syncUpdateCalled;
}

@property (nonatomic) char isRemoteMediaStalled;
@property (nonatomic, getter=isRemoteVideoPaused) char remoteVideoPaused;
@property (nonatomic, getter=isRemoteVideoEnabled) char remoteVideoEnabled;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;

- (void)dealloc;
- (char)isVisible;
- (id)initWithConfig:(id)a0;
- (void)didStart;
- (char)isVideoExpected;
- (void)didStop;
- (void)resetPerfTimers;
- (void)checkAndReportRegressedPoorConnectionPercentage;
- (void)checkForAndReportPoorConnectionDespiteVideoReceivedForVideoStream:(id)a0 stallDuration:(double)a1;
- (void)checkForExtendedPoorConnectionWithStallDuration:(double)a0;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (void)mediaStream:(id)a0 didReceiveNewMediaKeyIndex:(id)a1;
- (void)redundancyController:(id)a0 redundancyIntervalDidChange:(double)a1;
- (void)redundancyController:(id)a0 redundancyPercentageDidChange:(unsigned int)a1;
- (void)redundancyController:(id)a0 redundancyVectorDidChange:(struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[32]; })a1;
- (void)resetDidReceiveFirstFrame;
- (void)setActiveStreamIDs:(id)a0;
- (void)setExternalRenderLatency:(double)a0;
- (void)setIsRemoteMediaStalled:(char)a0 duration:(double)a1;
- (void)setMediaSuspended:(char)a0 forStreamToken:(id)a1;
- (void)setOptedInStreamID:(id)a0;
- (void)setShouldEnableFaceZoom:(char)a0;
- (void)setShouldEnableMLEnhance:(char)a0 streamID:(unsigned short)a1;
- (char)setSyncSource:(id)a0;
- (void)setVideoDegraded:(char)a0 duration:(double)a1;
- (void)setVideoStreamDelegate:(id)a0 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable { void /* function */ *x0; } *)a1;
- (void)setupExternalRenderLatency;
- (id)setupRedundancyController;
- (void)setupVideoPriority;
- (void)updateShouldEnableFaceZoom;
- (void)updateVideoExpected;
- (void)updateVideoPriority:(unsigned char)a0;
- (void)vcMediaStream:(id)a0 didReceiveFirstFrameWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)vcMediaStream:(id)a0 didSwitchFromStreamID:(unsigned short)a1 toStreamID:(unsigned short)a2;
- (void)vcMediaStream:(id)a0 priorityDidChange:(unsigned char)a1;
- (void)vcMediaStream:(id)a0 remoteMediaStalled:(char)a1 duration:(double)a2;
- (void)vcMediaStream:(id)a0 requestKeyFrameGenerationWithStreamID:(unsigned short)a1 firType:(int)a2;
- (id)willStart;
- (void)willStop;

@end
