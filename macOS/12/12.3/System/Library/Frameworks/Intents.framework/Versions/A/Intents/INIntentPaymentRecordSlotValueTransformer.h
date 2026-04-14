@interface INIntentPaymentRecordSlotValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
