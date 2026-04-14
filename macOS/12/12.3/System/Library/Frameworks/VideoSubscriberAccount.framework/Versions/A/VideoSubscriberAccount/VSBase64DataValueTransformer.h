@interface VSBase64DataValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
