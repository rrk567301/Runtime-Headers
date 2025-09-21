@interface AVBEUI64Transformer : NSValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
