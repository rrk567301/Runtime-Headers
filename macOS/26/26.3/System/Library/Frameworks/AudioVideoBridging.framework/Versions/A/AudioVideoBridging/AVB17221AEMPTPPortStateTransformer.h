@interface AVB17221AEMPTPPortStateTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)numberFromString:(id)a0;
- (id)stringForNumber:(id)a0;

@end
