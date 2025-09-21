@class VNMetalContext, VNBGRBilinearUpsampler, VisionCoreE5RTInferenceFunctionDescriptor, VNEspressoResources;
@protocol MTLComputePipelineState;

@interface VNTrackMaskDetector : VNE5RTBasedDetector {
    VNEspressoResources *initializationModel;
    VNEspressoResources *updateModel;
    struct __CVBuffer { } *highResMaskPixelBuffer;
    VNBGRBilinearUpsampler *_bilinearUpsampler;
    VNMetalContext *_postProcessingMetalContext;
    id<MTLComputePipelineState> _applyMaskComputeState;
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor_Memory;
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor_Mask;
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor_Updated;
}

+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)E5RTProgramLibraryMilEntryPointsForModelSource:(id)a0 configurationOptions:(id)a1 error:(id *)a2;
+ (id)createE5RTFunctionDescriptorForConfigurationOptions:(id)a0 functionName:(id)a1 error:(id *)a2;
+ (id)modelURLForConfigurationOptions:(id)a0 error:(id *)a1;

- (void)dealloc;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (void).cxx_destruct;

@end
