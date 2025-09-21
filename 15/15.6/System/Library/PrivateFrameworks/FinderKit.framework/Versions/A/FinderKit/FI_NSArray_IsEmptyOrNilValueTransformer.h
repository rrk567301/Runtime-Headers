@interface FI_NSArray_IsEmptyOrNilValueTransformer : NSValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;

@end
