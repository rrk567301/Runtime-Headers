@interface INIntentEventSlotValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
