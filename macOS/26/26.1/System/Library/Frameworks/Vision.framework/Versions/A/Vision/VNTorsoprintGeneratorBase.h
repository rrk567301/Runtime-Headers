@interface VNTorsoprintGeneratorBase : VNEspressoModelFileBasedDetector

@property (class, readonly) struct CGSize { double x0; double x1; } torsoprintDescriptorSize;
@property (class, readonly) float minimumTorsoInsideInputImageThreshold;
@property (class, readonly) float magnifiedBBoxScaleFactor;

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (struct CGSize { double x0; double x1; })torsoprintInputImageSizeForFaceOrientation:(int)a0;

@end
