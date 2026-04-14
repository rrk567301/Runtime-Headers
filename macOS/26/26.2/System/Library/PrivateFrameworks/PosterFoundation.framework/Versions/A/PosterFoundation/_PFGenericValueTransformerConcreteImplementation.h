@interface _PFGenericValueTransformerConcreteImplementation : PFGenericValueTransformer {
    Class _transformedValueClass;
    Class _reverseValueClass;
}

- (id)_init;
- (id)initWithTransformedValueClass:(Class)a0;
- (id)initWithTransformedValueClass:(Class)a0 reverseValueClass:(Class)a1;
- (id)reverseTransformedValue:(id)a0 context:(id)a1;
- (id)transformedValue:(id)a0 context:(id)a1;

@end
