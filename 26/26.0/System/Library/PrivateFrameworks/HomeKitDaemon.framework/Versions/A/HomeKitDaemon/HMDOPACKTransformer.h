@interface HMDOPACKTransformer : HMDValueTransformer

+ (id)transformedValue:(id)a0 error:(id *)a1;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (id)valueFromOPACK:(id)a0 error:(id *)a1;
+ (Class)valueClass;
+ (id)OPACKFromValue:(id)a0 error:(id *)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)isStructuredDataCompatible;

- (id)valueFromOPACK:(id)a0 error:(id *)a1;
- (id)OPACKFromValue:(id)a0 error:(id *)a1;

@end
