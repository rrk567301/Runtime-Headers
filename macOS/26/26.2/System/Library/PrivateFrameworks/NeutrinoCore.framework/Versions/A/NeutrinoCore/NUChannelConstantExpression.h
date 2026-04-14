@class NUChannelData;

@interface NUChannelConstantExpression : NUChannelExpression

@property (readonly, nonatomic) NUChannelData *data;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)compactDescription;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithData:(id)a0 expressionType:(long long)a1;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;

@end
