@interface FinanceKit.CNPostalAddressValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)init;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
