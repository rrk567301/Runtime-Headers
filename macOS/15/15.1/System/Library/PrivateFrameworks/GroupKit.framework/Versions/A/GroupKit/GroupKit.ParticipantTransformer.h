@interface GroupKit.ParticipantTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;

- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
