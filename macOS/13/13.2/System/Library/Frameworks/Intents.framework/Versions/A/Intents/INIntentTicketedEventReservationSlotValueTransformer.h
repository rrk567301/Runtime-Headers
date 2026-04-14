@interface INIntentTicketedEventReservationSlotValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
