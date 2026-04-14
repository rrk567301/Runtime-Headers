@interface SiriTTSNeuralUtils : NSObject

+ (BOOL)hasANE;
+ (BOOL)hasAMX;
+ (BOOL)isANEOnly;
+ (BOOL)isNeuralPlatform;
+ (BOOL)isH12Platform;
+ (BOOL)shouldUseNeuralVoice:(id)a0;
+ (BOOL)isANEModelCompiled:(id)a0;
+ (BOOL)compileANEModel:(id)a0 error:(id *)a1;

@end
