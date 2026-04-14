@interface PIAutoLoopKernels : NSObject

+ (id)alphaCompositingKernel;
+ (id)longExposureFusionKernels;
+ (id)dynamismMapKernel;
+ (id)dynamismMapRefineKernel;
+ (id)rgbToLumaKernel;
+ (id)homographyKernel;
+ (id)nccKernel;
+ (id)nccCoarseKernel;
+ (id)blur7x7Kernel;
+ (id)blur5x5Kernel;
+ (id)blur3x3Kernel;
+ (id)fusionKernel;

@end
