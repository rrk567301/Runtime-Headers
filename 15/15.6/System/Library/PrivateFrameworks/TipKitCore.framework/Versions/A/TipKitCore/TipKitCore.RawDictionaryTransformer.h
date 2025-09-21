@interface TipKitCore.RawDictionaryTransformer : NSValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
