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

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)setFocusPixelBlurScoreEnabled:(BOOL)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)setClientIsCameraOrDerivative:(BOOL)a0;
- (void)setDeferredPhotoProcessorEnabled:(BOOL)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (BOOL)cameraSupportsFlash;
- (void)dealloc;
- (id)propagatedAttachedMediaKeys;
- (BOOL)focusPixelBlurScoreEnabled;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)setCaptureTimePhotosCurationSupported:(BOOL)a0;
- (BOOL)captureTimePhotosCurationSupported;
- (void)setStillImageCapturePipeliningMode:(int)a0;
- (BOOL)deferredPhotoProcessorEnabled;
- (id)analyticsConfiguration;
- (void)setAnalyticsConfiguration:(id)a0;
- (void)setPropagatedAttachedMediaKeys:(id)a0;
- (id)initWithSinkID:(id)a0;
- (BOOL)clientIsCameraOrDerivative;
- (void).cxx_destruct;
- (int)stillImageCapturePipeliningMode;

@end
