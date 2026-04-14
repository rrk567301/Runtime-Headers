@interface INIntentVolumeSlotValueTransformer : NSValueTransformer

+ (long long)_intents_valueType;
+ (BOOL)allowsReverseTransformation;
+ (Class)_intents_resolutionResultClass;
+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
