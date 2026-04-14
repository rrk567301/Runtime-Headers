@interface PFGenericValueTransformer : NSValueTransformer

@property (nonatomic) BOOL assertOnInvalidObjectTypes;

+ (id)new;

- (id)_init;
- (id)transformedValue:(id)a0;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)initWithTransformedValueClass:(Class)a0 transformer:(id /* block */)a1;
- (id)initWithTransformedValueClass:(Class)a0 transformer:(id /* block */)a1 reverseValueClass:(Class)a2 reverseTransformer:(id /* block */)a3;
- (id)reverseTransformedValue:(id)a0 context:(id)a1;
- (id)transformedValue:(id)a0 context:(id)a1;

@end
