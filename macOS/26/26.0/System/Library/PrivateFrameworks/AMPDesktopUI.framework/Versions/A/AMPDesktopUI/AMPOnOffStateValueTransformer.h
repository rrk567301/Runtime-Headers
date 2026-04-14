@interface AMPOnOffStateValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)supportsReverseTransformation;

- (BOOL)_isBooleanTransformer;
- (id)transformedValue:(id)a0;
- (id)description;

@end
