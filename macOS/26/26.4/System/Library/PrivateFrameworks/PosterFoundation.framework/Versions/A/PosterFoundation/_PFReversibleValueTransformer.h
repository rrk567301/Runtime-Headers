@interface _PFReversibleValueTransformer : _PFUnreversibleValueTransformer {
    id /* block */ _reverseTransformer;
    Class _reverseTransformerClass;
}

+ (BOOL)allowsReverseTransformation;

- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)initWithTransformedValueClass:(Class)a0 transformer:(id /* block */)a1 reverseValueClass:(Class)a2 reverseTransformer:(id /* block */)a3;
- (id)reverseTransformedValue:(id)a0 context:(id)a1;
- (id)transformedValue:(id)a0 context:(id)a1;

@end
