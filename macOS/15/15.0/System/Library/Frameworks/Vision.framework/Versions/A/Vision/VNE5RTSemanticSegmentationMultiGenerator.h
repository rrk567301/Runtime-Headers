@interface VNE5RTSemanticSegmentationMultiGenerator : VNE5RTBasedDetector

+ (id)E5RTFunctionDescriptorForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)modelURLForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)requestInfoForRequest:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;

- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)imageCropAndScaleOption:(unsigned long long *)a0 fromOptions:(id)a1 error:(id *)a2;
- (BOOL)needsMetalContext;
- (id)observationsFromE5RTExecutionOutputs:(id)a0 forFunctionDescriptor:(id)a1 originatingRequestSpecifier:(id)a2 options:(id)a3 error:(id *)a4;

@end
