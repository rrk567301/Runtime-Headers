@interface SCN_NSImageFromSlotContents : NSValueTransformer

+ (void)initialize;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
