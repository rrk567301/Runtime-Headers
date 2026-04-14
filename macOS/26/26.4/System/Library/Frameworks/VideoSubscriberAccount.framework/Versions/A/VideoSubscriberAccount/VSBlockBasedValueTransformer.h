@interface VSBlockBasedValueTransformer : NSValueTransformer

@property (copy, nonatomic) id /* block */ transformationBlock;
@property (copy, nonatomic) id /* block */ reverseTransformationBlock;

- (void).cxx_destruct;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
