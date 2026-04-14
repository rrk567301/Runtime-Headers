@protocol NUChannelOutputPort;

@interface NUChannelStaticExpression : NUChannelExpression

@property (readonly, nonatomic) id<NUChannelOutputPort> port;

- (id)debugDescription;
- (id)description;
- (id)compactDescription;
- (void).cxx_destruct;
- (id)inputPorts;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;
- (id)initWithPort:(id)a0 expressionType:(long long)a1;

@end
