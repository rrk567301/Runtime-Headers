@class NSArray, BWStillImageSampleBufferSinkNodeAnalyticsConfiguration, BWStillImageCaptureAnalyticsPayload;

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    BOOL _clientIsCameraOrDerivative;
    BOOL _captureTimePhotosCurationSupported;
    NSArray *_propagatedAttachedMediaKeys;
    BWStillImageSampleBufferSinkNodeAnalyticsConfiguration *_analyticsConfiguration;
    long long _lastCaptureRequestTime;
    long long _lastReportedSettingsID;
    BWStillImageCaptureAnalyticsPayload *_cachedAnalyticsPayloadForPortraitFailures;
}

@property (copy, nonatomic) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;
+ (id)_inferenceTypesForClientMetadata;

- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)clientIsCameraOrDerivative;
- (void)setClientIsCameraOrDerivative:(BOOL)a0;
- (id)initWithSinkID:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)initWithInputMediaType:(unsigned int)a0 sinkID:(id)a1;
- (void)_attachPrivateClientMetadataToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_reportAggdDataWithRequestedStillImageSettings:(id)a0 resolvedStillImageCaptureSettings:(id)a1 sbuf:(struct opaqueCMSampleBuffer { } *)a2;
- (void)_reportCoreAnalyticsForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 stillImageSettings:(id)a1;
- (id)_newFilteredDetectedObjectsInfoFromDetectedObjectsInfo:(id)a0;
- (id)_coreAnalyticsPayloadWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 stillImageSettings:(id)a1;
- (void)setCaptureTimePhotosCurationSupported:(BOOL)a0;
- (BOOL)captureTimePhotosCurationSupported;
- (void)setPropagatedAttachedMediaKeys:(id)a0;
- (id)propagatedAttachedMediaKeys;
- (void)setAnalyticsConfiguration:(id)a0;
- (id)analyticsConfiguration;

@end
