@interface _IFValueTransformer : NSValueTransformer

@property (readonly, copy, nonatomic) id /* block */ forwardTransformation;
@property (readonly, copy, nonatomic) id /* block */ reverseTransformation;

+ (BOOL)allowsReverseTransformation;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)initWithForwardTransformation:(id /* block */)a0 reverseTransformation:(id /* block */)a1;

@end
