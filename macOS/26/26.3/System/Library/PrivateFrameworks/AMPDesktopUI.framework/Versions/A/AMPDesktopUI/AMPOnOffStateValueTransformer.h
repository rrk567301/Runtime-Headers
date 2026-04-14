@interface AMPOnOffStateValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)supportsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)description;
- (BOOL)_isBooleanTransformer;

@end
