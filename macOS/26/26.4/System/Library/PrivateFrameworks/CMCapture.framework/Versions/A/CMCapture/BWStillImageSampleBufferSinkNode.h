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

- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (BOOL)deferredPhotoProcessorEnabled;
- (void)setFocusPixelBlurScoreEnabled:(BOOL)a0;
- (int)stillImageCapturePipeliningMode;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (BOOL)clientIsCameraOrDerivative;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (BOOL)captureTimePhotosCurationSupported;
- (void)setClientIsCameraOrDerivative:(BOOL)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)analyticsConfiguration;
- (void).cxx_destruct;
- (BOOL)focusPixelBlurScoreEnabled;
- (void)setPropagatedAttachedMediaKeys:(id)a0;
- (void)setDeferredPhotoProcessorEnabled:(BOOL)a0;
- (id)propagatedAttachedMediaKeys;
- (void)setAnalyticsConfiguration:(id)a0;
- (BOOL)cameraSupportsFlash;
- (void)setCaptureTimePhotosCurationSupported:(BOOL)a0;
- (id)initWithSinkID:(id)a0;
- (void)setStillImageCapturePipeliningMode:(int)a0;
- (void)dealloc;

@end
