@class BWStillImageAnalyticsPayloadCommon, NSArray, BWStillImageSampleBufferSinkNodeAnalyticsConfiguration, BWStillImageFrameCoordinatorNode;

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    int _stillImageCapturePipeliningMode;
    BOOL _deferredPhotoProcessorEnabled;
    BOOL _clientIsCameraOrDerivative;
    BOOL _captureTimePhotosCurationSupported;
    NSArray *_propagatedAttachedMediaKeys;
    BOOL _focusPixelBlurScoreEnabled;
    BWStillImageSampleBufferSinkNodeAnalyticsConfiguration *_analyticsConfiguration;
    BOOL _cameraSupportsFlash;
    long long _lastCaptureRequestTime;
    long long _lastReportedSettingsID;
    BWStillImageAnalyticsPayloadCommon *_cachedAnalyticsPayloadForPortraitFailures;
    BWStillImageFrameCoordinatorNode *_frameCoordinatorNode;
}

@property (copy, nonatomic) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setFocusPixelBlurScoreEnabled:(BOOL)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (BOOL)focusPixelBlurScoreEnabled;
- (int)stillImageCapturePipeliningMode;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)setAnalyticsConfiguration:(id)a0;
- (id)propagatedAttachedMediaKeys;
- (void)setPropagatedAttachedMediaKeys:(id)a0;
- (void)setStillImageCapturePipeliningMode:(int)a0;
- (id)initWithSinkID:(id)a0;
- (BOOL)deferredPhotoProcessorEnabled;
- (void)setCaptureTimePhotosCurationSupported:(BOOL)a0;
- (void)dealloc;
- (BOOL)cameraSupportsFlash;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)clientIsCameraOrDerivative;
- (void)setClientIsCameraOrDerivative:(BOOL)a0;
- (void)setDeferredPhotoProcessorEnabled:(BOOL)a0;
- (BOOL)captureTimePhotosCurationSupported;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)analyticsConfiguration;

@end
