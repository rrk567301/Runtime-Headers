@interface _PFUnreversibleValueTransformer : _PFGenericValueTransformerConcreteImplementation {
    id /* block */ _transformer;
}

+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransformedValueClass:(Class)a0 reverseValueClass:(Class)a1;
- (id)initWithTransformedValueClass:(Class)a0 transformer:(id /* block */)a1;
- (id)reverseTransformedValue:(id)a0 context:(id)a1;
- (id)transformedValue:(id)a0 context:(id)a1;

@end
