@interface HMDTimeOffsetToDateComponentsTransformer : HMDValueTransformer

+ (Class)valueClass;
+ (Class)transformedValueClass;
+ (id)transformedValue:(id)a0 error:(id *)a1;

- (id)reverseTransformedValue:(id)a0 error:(id *)a1;

@end
