@interface HMDIdentityTransformer : HMDValueTransformer

+ (Class)valueClass;
+ (id)transformedValue:(id)a0 error:(id *)a1;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0 error:(id *)a1;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;

@end
