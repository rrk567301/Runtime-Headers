@interface MLProgramEngine : MLNeuralNetworkEngine

+ (int)gpuPrecision;
+ (int)gpuEngine;
+ (Class)containerClass;

@end
