@interface VFX_NSImageFromImageValue : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (void)initialize;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
