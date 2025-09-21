@class NSString, VCMediaStreamSynchronizer;
@protocol VCMediaStreamSyncSource, VCVideoReceiverDelegate;

@interface VCVideoReceiverBase : NSObject <VCMediaStreamSyncDestination, VCConnectionChangedHandler, VCMediaTimeSync> {
    struct tagVCVideoReceiverRealtimeClassVTable { void /* function */ *setExternalOutputLatency; } _vTable;
    double _synchronizationTimeOffset;
    float lastLastVideoStallDuration;
    unsigned int _rtpTimestampRate;
    VCMediaStreamSynchronizer *_mediaStreamSynchronizer;
}

@property int remoteVideoOrientation;
@property (nonatomic) id<VCVideoReceiverDelegate> delegate;
@property (nonatomic) struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { void /* function */ *didReceiveSampleBuffer; void /* function */ *didReceiveRemoteFrame; } delegateFunctions;
@property (nonatomic) id<VCMediaStreamSyncSource> syncSource;
@property double roundTripTime;
@property (readonly) double lastReceivedVideoRTPPacketTime;
@property (readonly) double lastReceivedVideoRTCPPacketTime;
@property (readonly) float lastLastVideoStallDuration;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setJitterBufferMode:(int)a0;
- (void)collectChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0 interval:(float)a1;
- (void)handleActiveConnectionChange:(id)a0;
- (id)initWithDelegate:(id)a0 delegateFunctions:(const struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { void /* function */ *x0; void /* function */ *x1; } *)a1;
- (void)pauseVideo;
- (void)rtcpSendIntervalElapsed;
- (void)setDeferredAssemblyEnabled:(char)a0;
- (void)setEnableCVO:(char)a0 cvoExtensionID:(unsigned long long)a1;
- (void)setEnableRateAdaptation:(char)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)setLooseAVSyncEnabled:(char)a0;
- (void)setShouldEnableMLEnhance:(char)a0 streamID:(unsigned short)a1;
- (void)setSynchronizer:(id)a0;
- (void)setTargetStreamID:(unsigned short)a0;
- (void)setVideoExpected:(char)a0;
- (char)startSynchronization:(id)a0;
- (void)startVideo;
- (void)stopSynchronization;
- (void)stopVideo;
- (void)updateSourcePlayoutTime:(const struct tagVCMediaTime { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; double x1; } *)a0;

@end
