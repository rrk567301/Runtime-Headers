@class NSString, VCAudioStreamGroupCommon, VCAudioCaptions, NSNumber;
@protocol VCCaptionsSourceDelegate;

@interface VCCaptionsStreamSendGroup : VCMediaStreamSendGroup <VCAudioCaptionsDelegate, VCCaptionsSource, VCAudioStreamGroup> {
    VCAudioStreamGroupCommon *_common;
    VCAudioCaptions *_audioCaptions;
    struct opaqueVCCaptionsEncoder { } *_captionsEncoder;
    id<VCCaptionsSourceDelegate> _captionsDelegate;
    NSNumber *_activeCaptionsStreamID;
}

@property (readonly, nonatomic) BOOL captionsSupported;
@property (readonly, nonatomic) BOOL captionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (readonly, nonatomic) int operatingMode;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;
@property (nonatomic, setter=setVADFilteringEnabled:) BOOL isVADFilteringEnabled;

- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (id)stopCapture;
- (id)startCapture;
- (void)enableCaptions:(BOOL)a0;
- (void)captions:(id)a0 didChangeSourceLocale:(id)a1;
- (void)didStop;
- (id)activeStreamKeys;
- (void)captions:(id)a0 didProduceLanguageHypothesis:(id)a1 streamToken:(long long)a2;
- (void)captions:(id)a0 didStopLanguageDetectorWithError:(id)a1 streamToken:(long long)a2;
- (id)captionsDelegate;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (void)didConfigureCaptionsWithError:(id)a0;
- (void)didDisableCaptions:(BOOL)a0 error:(id)a1;
- (void)didEnableCaptions:(BOOL)a0 error:(id)a1;
- (void)didStartCaptioningWithReason:(unsigned char)a0 streamToken:(long long)a1;
- (void)didStopCaptioningWithReason:(unsigned char)a0 streamToken:(long long)a1;
- (void)didUpdateCaptions:(id)a0;
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)a0 withTargetBitrate:(unsigned int)a1 mediaBitrates:(id)a2 rateChangeCounter:(unsigned int)a3;
- (void)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; })a2;
- (BOOL)prewarmCaptionsWithError:(id *)a0;
- (void)registerCaptionsEventDelegate:(id)a0;
- (void)reportCaptionsUsage:(unsigned char)a0;
- (void)setCaptionsSourceLocale:(id)a0;
- (BOOL)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (void)transmitTranscription:(id)a0;
- (void)updateCaptionsConfig:(id)a0;
- (id)willStart;

@end
