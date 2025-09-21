@interface CESRAudioSamplingUtilities : NSObject

+ (char)isUniformlySampled:(unsigned long long)a0 fromTotal:(unsigned long long)a1;
+ (char)isUniformlySampledWithPercentage:(unsigned long long)a0;
+ (char)isUniformlySampledWithSamplingRate:(float)a0;

@end
