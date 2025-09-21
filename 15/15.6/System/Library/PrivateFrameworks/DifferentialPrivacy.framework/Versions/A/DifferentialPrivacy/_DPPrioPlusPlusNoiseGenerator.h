@interface _DPPrioPlusPlusNoiseGenerator : NSObject

+ (char)isValidDimension:(unsigned long long)a0;
+ (char)isValidSigma:(double)a0;
+ (id)randomize:(id)a0 dimension:(unsigned long long)a1 stddev:(double)a2;

@end
