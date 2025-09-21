@protocol NUChannelOutputPort;

@interface NUChannelStaticExpression : NUChannelExpression

@property (readonly, nonatomic) id<NUChannelOutputPort> port;

- (id)compactDescription;
- (id)debugDescription;
- (id)inputPorts;
- (id)description;
- (void).cxx_destruct;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;
- (id)initWithPort:(id)a0 expressionType:(long long)a1;

@end
