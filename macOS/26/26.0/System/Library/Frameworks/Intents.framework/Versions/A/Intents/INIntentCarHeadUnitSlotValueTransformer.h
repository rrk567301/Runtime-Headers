@interface INIntentCarHeadUnitSlotValueTransformer : NSValueTransformer

+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (long long)_intents_valueType;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
