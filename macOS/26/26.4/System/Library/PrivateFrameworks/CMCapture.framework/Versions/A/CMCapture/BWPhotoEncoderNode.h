@class BWPhotoEncoderControllerConfiguration, NSString, NSDictionary, BWPhotoEncoderController, BWStillImageNodeConfiguration;

@interface BWPhotoEncoderNode : BWNode <BWPhotoEncoderControllerDelegate> {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    NSDictionary *_sensorConfigurationsByPortType;
    NSDictionary *_attachedMediaConfigurationByAttachedMediaKey;
    BWPhotoEncoderControllerConfiguration *_photoEncoderControllerConfiguration;
    BWPhotoEncoderController *_photoEncoderController;
    NSString *_lastProcessedCaptureIdentifier;
    BOOL _preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)setSmartStyleReversibilityEnabled:(BOOL)a0;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)setSmartStyleRenderingVersion:(int)a0;
- (int)smartStyleRenderingVersion;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (BOOL)smartStyleReversibilityEnabled;
- (void)setZeroShutterLagEnabled:(BOOL)a0;
- (void)handleStillImagePrewarmWithSettings:(id)a0 resourceConfig:(id)a1 forInput:(id)a2;
- (id)photoEncoderController;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)setInputColorInfo:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)setUsesHighEncodingPriority:(BOOL)a0;
- (id)nodeSubType;
- (BOOL)zeroShutterLagEnabled;
- (id)attachedMediaConfigurationByAttachedMediaKey;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)processorController:(id)a0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 type:(unsigned long long)a2 processorInput:(id)a3 err:(int)a4;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 semanticDevelopmentVersion:(int)a2 inferenceScheduler:(id)a3 alwaysAwaitInference:(BOOL)a4 portraitRenderQuality:(int)a5 deferredPhotoProcessorEnabled:(BOOL)a6 clientIsCameraOrDerivative:(BOOL)a7;
- (id)nodeType;
- (void)processorController:(id)a0 didFinishProcessingInput:(id)a1 err:(int)a2;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2 dimensions:(struct { int x0; int x1; })a3;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)a0;
- (id)inputColorInfo;
- (BOOL)cameraSupportsFlash;
- (void)dealloc;
- (BOOL)usesHighEncodingPriority;

@end
