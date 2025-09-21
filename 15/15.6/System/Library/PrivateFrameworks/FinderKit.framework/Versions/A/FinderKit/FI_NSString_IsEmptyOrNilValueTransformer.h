@interface FI_NSString_IsEmptyOrNilValueTransformer : NSValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;

@end
