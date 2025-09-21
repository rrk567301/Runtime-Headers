@interface VSAMSIdentityProviderResponseDictionaryValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)createProviderAppArtworkFromAttributes:(id)a0;

@end
