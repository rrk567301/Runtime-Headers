@class BWPhotoEncoderControllerConfiguration, NSString, NSDictionary, BWPhotoEncoderController, BWStillImageNodeConfiguration;

@interface BWPhotoEncoderNode : BWNode <BWPhotoEncoderControllerDelegate> {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    NSDictionary *_sensorConfigurationsByPortType;
    NSDictionary *_attachedMediaConfigurationByAttachedMediaKey;
    BWPhotoEncoderControllerConfiguration *_photoEncoderControllerConfiguration;
    BWPhotoEncoderController *_photoEncoderController;
    NSString *_lastProcessedCaptureIdentifier;
    char _preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)setZeroShutterLagEnabled:(char)a0;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2;
- (id)attachedMediaConfigurationByAttachedMediaKey;
- (char)cameraSupportsFlash;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 semanticDevelopmentVersion:(int)a2 inferenceScheduler:(id)a3 alwaysAwaitInference:(char)a4 portraitRenderQuality:(int)a5 deferredPhotoProcessorEnabled:(char)a6;
- (id)inputColorInfo;
- (id)nodeSubType;
- (id)photoEncoderController;
- (char)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)processorController:(id)a0 didFinishProcessingInput:(id)a1 err:(int)a2;
- (void)processorController:(id)a0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 type:(unsigned long long)a2 processorInput:(id)a3 err:(int)a4;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2 dimensions:(struct { int x0; int x1; })a3;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)a0;
- (void)setCameraSupportsFlash:(char)a0;
- (void)setInputColorInfo:(id)a0;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(char)a0;
- (void)setSmartStyleRenderingVersion:(int)a0;
- (void)setSmartStyleReversibilityEnabled:(char)a0;
- (void)setUsesHighEncodingPriority:(char)a0;
- (int)smartStyleRenderingVersion;
- (char)smartStyleReversibilityEnabled;
- (char)usesHighEncodingPriority;
- (char)zeroShutterLagEnabled;

@end
