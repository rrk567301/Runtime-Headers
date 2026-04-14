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

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (BOOL)smartStyleReversibilityEnabled;
- (void)setZeroShutterLagEnabled:(BOOL)a0;
- (BOOL)zeroShutterLagEnabled;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (BOOL)cameraSupportsFlash;
- (void)dealloc;
- (void)processorController:(id)a0 didFinishProcessingInput:(id)a1 err:(int)a2;
- (BOOL)usesHighEncodingPriority;
- (id)photoEncoderController;
- (id)inputColorInfo;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (int)smartStyleRenderingVersion;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)a0;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 semanticDevelopmentVersion:(int)a2 inferenceScheduler:(id)a3 alwaysAwaitInference:(BOOL)a4 portraitRenderQuality:(int)a5 deferredPhotoProcessorEnabled:(BOOL)a6 clientIsCameraOrDerivative:(BOOL)a7;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2 dimensions:(struct { int x0; int x1; })a3;
- (void)setSmartStyleReversibilityEnabled:(BOOL)a0;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)setUsesHighEncodingPriority:(BOOL)a0;
- (void)handleStillImagePrewarmWithSettings:(id)a0 resourceConfig:(id)a1 forInput:(id)a2;
- (id)attachedMediaConfigurationByAttachedMediaKey;
- (void)setSmartStyleRenderingVersion:(int)a0;
- (void)processorController:(id)a0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 type:(unsigned long long)a2 processorInput:(id)a3 err:(int)a4;
- (void)setInputColorInfo:(id)a0;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;

@end
