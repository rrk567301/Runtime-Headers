@interface INIntentRideOptionSlotValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
