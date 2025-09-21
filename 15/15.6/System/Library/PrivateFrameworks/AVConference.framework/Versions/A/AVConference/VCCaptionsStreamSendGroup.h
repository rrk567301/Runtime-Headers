@class NSString, VCAudioStreamGroupCommon, VCAudioCaptions, NSNumber;
@protocol VCCaptionsSourceDelegate;

@interface VCCaptionsStreamSendGroup : VCMediaStreamSendGroup <VCAudioCaptionsDelegate, VCCaptionsSource, VCAudioStreamGroup> {
    VCAudioStreamGroupCommon *_common;
    VCAudioCaptions *_audioCaptions;
    struct opaqueVCCaptionsEncoder { } *_captionsEncoder;
    id<VCCaptionsSourceDelegate> _captionsDelegate;
    NSNumber *_activeCaptionsStreamID;
}

@property (readonly, nonatomic) char captionsSupported;
@property (readonly, nonatomic) char captionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, setter=setMuted:) char isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (readonly, nonatomic) int operatingMode;
@property (setter=setPowerSpectrumEnabled:) char isPowerSpectrumEnabled;

- (void)dealloc;
- (id)stopCapture;
- (id)initWithConfig:(id)a0;
- (id)startCapture;
- (void)enableCaptions:(char)a0;
- (void)prewarmCaptions;
- (void)didStop;
- (id)activeStreamKeys;
- (id)captionsDelegate;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (void)didDisableCaptions:(char)a0 error:(id)a1;
- (void)didEnableCaptions:(char)a0 error:(id)a1;
- (void)didStartCaptioningWithReason:(int)a0 streamToken:(long long)a1;
- (void)didStopCaptioningWithReason:(int)a0 streamToken:(long long)a1;
- (void)didUpdateCaptions:(id)a0;
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)a0 withTargetBitrate:(unsigned int)a1 mediaBitrates:(id)a2 rateChangeCounter:(unsigned int)a3;
- (void)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { char x0; char x1; int x2; char x3; char x4; int x5; unsigned char x6; })a2;
- (void)registerCaptionsEventDelegate:(id)a0;
- (void)setCaptionsLocale:(id)a0;
- (void)setCaptionsUsage:(id)a0;
- (char)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (void)transmitTranscription:(id)a0;
- (id)willStart;

@end
