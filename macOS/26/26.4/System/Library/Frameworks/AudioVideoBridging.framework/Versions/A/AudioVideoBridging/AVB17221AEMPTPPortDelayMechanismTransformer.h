@interface AVB17221AEMPTPPortDelayMechanismTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)numberFromString:(id)a0;
- (id)stringForNumber:(id)a0;

@end
