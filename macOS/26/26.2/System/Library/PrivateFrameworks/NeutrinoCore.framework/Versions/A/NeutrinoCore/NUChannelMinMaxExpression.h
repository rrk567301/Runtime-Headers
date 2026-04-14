@interface NUChannelMinMaxExpression : NUChannelExpression

@property (class, readonly, nonatomic) long long minMaxOrder;

- (id)initWithExpressions:(id)a0;
- (id)evaluateWithArgumentData:(id)a0 error:(out id *)a1;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;

@end
