@interface SCN_NSImageFromImageValue : NSValueTransformer

+ (void)initialize;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
