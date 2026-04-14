@interface INIntentTemperatureSlotValueTransformer : NSValueTransformer

+ (Class)_intents_resolutionResultClass;
+ (Class)reverseTransformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (long long)_intents_valueType;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
