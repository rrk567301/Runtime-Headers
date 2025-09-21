@interface _AllCapsStringTransformer : NSValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)transformedValue:(id)a0;

@end
