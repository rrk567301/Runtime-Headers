@interface MLProgramEngine : MLNeuralNetworkEngine

+ (int)gpuEngine;
+ (int)gpuPrecision;
+ (Class)containerClass;

@end
