@interface AVB17221AEMStreamFormatTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)stringForNumber:(id)a0;
- (id)stringForStreamFormat:(id)a0;
- (id)streamFormatForString:(id)a0;

@end
