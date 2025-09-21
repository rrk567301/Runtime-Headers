@interface AMPIsEmptyArrayValueTransformer : NSValueTransformer

+ (char)supportsReverseTransformation;
+ (Class)transformedValueClass;

- (id)description;
- (char)_isBooleanTransformer;
- (id)transformedValue:(id)a0;

@end
