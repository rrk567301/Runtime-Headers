@class NUChannelExpression;

@interface NUChannelUnaryExpression : NUChannelExpression

@property (readonly, nonatomic) NUChannelExpression *expression;

- (id)debugDescription;
- (id)initWithExpression:(id)a0;
- (id)evaluateWithArgumentData:(id)a0 error:(out id *)a1;
- (id)evaluateWithData:(id)a0 error:(out id *)a1;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;

@end
