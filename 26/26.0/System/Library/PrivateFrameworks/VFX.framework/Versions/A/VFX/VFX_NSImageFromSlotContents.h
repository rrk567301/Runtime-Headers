@interface VFX_NSImageFromSlotContents : NSValueTransformer

+ (Class)transformedValueClass;
+ (void)initialize;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
