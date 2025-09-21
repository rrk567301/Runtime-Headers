@interface FI_NSDateToNSString_RelativeFullDateTime_Transformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;

@end
