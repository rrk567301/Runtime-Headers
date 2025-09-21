@interface AVB17221AEMStreamFormatTransformer : NSValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)stringForNumber:(id)a0;
- (id)streamFormatForString:(id)a0;
- (id)stringForStreamFormat:(id)a0;

@end
