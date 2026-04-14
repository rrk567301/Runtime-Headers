@interface AMPNotEmptyArrayValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)supportsReverseTransformation;

- (id)description;
- (BOOL)_isBooleanTransformer;
- (id)transformedValue:(id)a0;

@end
