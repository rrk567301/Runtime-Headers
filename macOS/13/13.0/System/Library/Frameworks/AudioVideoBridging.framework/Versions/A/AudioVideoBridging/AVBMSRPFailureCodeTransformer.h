@interface AVBMSRPFailureCodeTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)localizedNameForFailureCode:(unsigned char)a0;

@end
