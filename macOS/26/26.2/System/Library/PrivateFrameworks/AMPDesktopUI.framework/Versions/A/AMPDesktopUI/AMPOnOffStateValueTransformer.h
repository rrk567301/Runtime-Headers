@interface AMPOnOffStateValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)supportsReverseTransformation;

- (id)transformedValue:(id)a0;
- (BOOL)_isBooleanTransformer;
- (id)description;

@end
