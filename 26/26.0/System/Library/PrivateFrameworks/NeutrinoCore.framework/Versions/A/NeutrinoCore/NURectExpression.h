@class NUChannelExpression;

@interface NURectExpression : NUChannelExpression

@property (readonly, nonatomic) NUChannelExpression *xExpression;
@property (readonly, nonatomic) NUChannelExpression *yExpression;
@property (readonly, nonatomic) NUChannelExpression *widthExpression;
@property (readonly, nonatomic) NUChannelExpression *heightExpression;

- (id)compactDescription;
- (id)description;
- (id)evaluateWithArgumentData:(id)a0 error:(out id *)a1;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;
- (id)initWithXExpression:(id)a0 yExpression:(id)a1 widthExpression:(id)a2 heightExpression:(id)a3;

@end
