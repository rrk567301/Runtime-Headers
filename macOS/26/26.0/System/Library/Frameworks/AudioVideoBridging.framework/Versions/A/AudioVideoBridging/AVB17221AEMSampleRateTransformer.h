@interface AVB17221AEMSampleRateTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)stringForNumber:(id)a0;
- (id)samplingRateFromString:(id)a0;
- (id)stringForSamplingRate:(id)a0;

@end
