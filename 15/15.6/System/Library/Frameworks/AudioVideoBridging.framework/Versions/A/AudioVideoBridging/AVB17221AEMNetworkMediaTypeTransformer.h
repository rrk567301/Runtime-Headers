@interface AVB17221AEMNetworkMediaTypeTransformer : NSValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)numberFromString:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)stringForNumber:(id)a0;

@end
