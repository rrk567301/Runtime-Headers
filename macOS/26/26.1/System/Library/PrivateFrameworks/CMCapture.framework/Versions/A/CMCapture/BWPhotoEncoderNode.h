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

- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (int)smartStyleRenderingVersion;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (BOOL)zeroShutterLagEnabled;
- (id)nodeSubType;
- (void)setSmartStyleReversibilityEnabled:(BOOL)a0;
- (void)setZeroShutterLagEnabled:(BOOL)a0;
- (void)processorController:(id)a0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 type:(unsigned long long)a2 processorInput:(id)a3 err:(int)a4;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (id)attachedMediaConfigurationByAttachedMediaKey;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 semanticDevelopmentVersion:(int)a2 inferenceScheduler:(id)a3 alwaysAwaitInference:(BOOL)a4 portraitRenderQuality:(int)a5 deferredPhotoProcessorEnabled:(BOOL)a6 clientIsCameraOrDerivative:(BOOL)a7;
- (void)processorController:(id)a0 didFinishProcessingInput:(id)a1 err:(int)a2;
- (void)setInputColorInfo:(id)a0;
- (void)handleStillImagePrewarmWithSettings:(id)a0 resourceConfig:(id)a1 forInput:(id)a2;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)a0;
- (void)setSmartStyleRenderingVersion:(int)a0;
- (void)dealloc;
- (BOOL)cameraSupportsFlash;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (BOOL)smartStyleReversibilityEnabled;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2 dimensions:(struct { int x0; int x1; })a3;
- (BOOL)usesHighEncodingPriority;
- (id)photoEncoderController;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2;
- (id)inputColorInfo;
- (void)setUsesHighEncodingPriority:(BOOL)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;

@end
