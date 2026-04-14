@interface FinanceKit.CNPostalAddressValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)init;
- (id)reverseTransformedValue:(id)a0;

@end
