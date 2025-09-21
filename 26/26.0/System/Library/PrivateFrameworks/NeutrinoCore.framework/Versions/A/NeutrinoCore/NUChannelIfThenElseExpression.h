@class NUChannelExpression;

@interface NUChannelIfThenElseExpression : NUChannelExpression

@property (readonly, nonatomic) NUChannelExpression *conditionExpression;
@property (readonly, nonatomic) NUChannelExpression *trueExpression;
@property (readonly, nonatomic) NUChannelExpression *falseExpression;

- (id)compactDescription;
- (id)description;
- (id)evaluateWithArgumentData:(id)a0 error:(out id *)a1;
- (id)initWithConditionExpression:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;

@end
