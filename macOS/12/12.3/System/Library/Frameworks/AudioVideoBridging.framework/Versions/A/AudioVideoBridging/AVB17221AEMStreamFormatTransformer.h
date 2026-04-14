@interface AVB17221AEMStreamFormatTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)stringForNumber:(id)a0;
- (id)stringForStreamFormat:(id)a0;
- (id)streamFormatForString:(id)a0;

@end
