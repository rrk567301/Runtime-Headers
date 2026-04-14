@interface INIntentMessageSlotValueTransformer : NSValueTransformer

+ (long long)_intents_valueType;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
