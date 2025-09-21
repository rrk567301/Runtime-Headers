@class NSArray, BWStillImageSampleBufferSinkNodeAnalyticsConfiguration, BWStillImageAnalyticsPayloadCommon;

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    int _stillImageCapturePipeliningMode;
    char _deferredPhotoProcessorEnabled;
    char _clientIsCameraOrDerivative;
    char _captureTimePhotosCurationSupported;
    NSArray *_propagatedAttachedMediaKeys;
    char _focusPixelBlurScoreEnabled;
    BWStillImageSampleBufferSinkNodeAnalyticsConfiguration *_analyticsConfiguration;
    char _cameraSupportsFlash;
    long long _lastCaptureRequestTime;
    long long _lastReportedSettingsID;
    BWStillImageAnalyticsPayloadCommon *_cachedAnalyticsPayloadForPortraitFailures;
}

@property (copy, nonatomic) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)dealloc;
- (void)setFocusPixelBlurScoreEnabled:(char)a0;
- (id)initWithSinkID:(id)a0;
- (void)setPropagatedAttachedMediaKeys:(id)a0;
- (int)stillImageCapturePipeliningMode;
- (id)analyticsConfiguration;
- (char)cameraSupportsFlash;
- (char)captureTimePhotosCurationSupported;
- (char)clientIsCameraOrDerivative;
- (char)deferredPhotoProcessorEnabled;
- (void)didReachEndOfDataForInput:(id)a0;
- (char)focusPixelBlurScoreEnabled;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)initWithInputMediaType:(unsigned int)a0 sinkID:(id)a1;
- (id)nodeSubType;
- (id)propagatedAttachedMediaKeys;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setAnalyticsConfiguration:(id)a0;
- (void)setCameraSupportsFlash:(char)a0;
- (void)setCaptureTimePhotosCurationSupported:(char)a0;
- (void)setClientIsCameraOrDerivative:(char)a0;
- (void)setDeferredPhotoProcessorEnabled:(char)a0;
- (void)setStillImageCapturePipeliningMode:(int)a0;

@end
