@interface INIntentDistanceSlotValueTransformer : NSValueTransformer

+ (Class)_intents_resolutionResultClass;
+ (long long)_intents_valueType;
+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
