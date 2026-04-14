@interface AMPOnOffStateValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)supportsReverseTransformation;

- (BOOL)_isBooleanTransformer;
- (id)description;
- (id)transformedValue:(id)a0;

@end
