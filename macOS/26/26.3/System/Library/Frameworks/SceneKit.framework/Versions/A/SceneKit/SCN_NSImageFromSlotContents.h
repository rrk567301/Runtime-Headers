@interface SCN_NSImageFromSlotContents : NSValueTransformer

+ (void)initialize;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
