@interface _IFValueTransformer : NSValueTransformer

@property (readonly, copy, nonatomic) id /* block */ forwardTransformation;
@property (readonly, copy, nonatomic) id /* block */ reverseTransformation;

+ (BOOL)allowsReverseTransformation;

- (void).cxx_destruct;
- (id)initWithForwardTransformation:(id /* block */)a0 reverseTransformation:(id /* block */)a1;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
