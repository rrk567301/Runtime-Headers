@interface MTLReversibleValueTransformer : MTLValueTransformer

+ (char)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0 success:(char *)a1 error:(id *)a2;
- (id)initWithForwardBlock:(id /* block */)a0 reverseBlock:(id /* block */)a1;

@end
