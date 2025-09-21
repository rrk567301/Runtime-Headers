@interface AVB17221AEMVideoColorSpaceTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)nameForColorSpace:(unsigned short)a0;
- (unsigned short)colorSpaceForName:(id)a0;

@end
