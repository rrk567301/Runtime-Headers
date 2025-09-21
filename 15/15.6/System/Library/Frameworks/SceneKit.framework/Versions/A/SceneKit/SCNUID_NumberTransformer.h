@interface SCNUID_NumberTransformer : NSValueTransformer

+ (void)initialize;
+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
