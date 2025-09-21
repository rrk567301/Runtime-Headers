@interface SiriTTSNeuralUtils : NSObject

+ (BOOL)hasANE;
+ (char)compileANEModel:(id)a0 error:(id *)a1;
+ (float)currentSampleRate:(id)a0;
+ (BOOL)hasAMX;
+ (char)isANEModelCompiled:(id)a0;
+ (BOOL)isANEOnly;
+ (BOOL)isH12Platform;
+ (BOOL)isNaturalPlatform;
+ (BOOL)isNeuralPlatform;
+ (char)isNeuralVoiceReady:(id)a0;
+ (char)shouldUseNeuralVoice:(id)a0;

@end
