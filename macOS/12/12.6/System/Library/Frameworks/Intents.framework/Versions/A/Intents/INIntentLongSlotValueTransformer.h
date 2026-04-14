@interface INIntentLongSlotValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;
+ (Class)_intents_resolutionResultClass;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
