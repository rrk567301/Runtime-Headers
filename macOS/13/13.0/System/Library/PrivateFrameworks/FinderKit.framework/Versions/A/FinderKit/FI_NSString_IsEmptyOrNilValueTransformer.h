@interface FI_NSString_IsEmptyOrNilValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;

@end
