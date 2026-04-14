@interface NUChannelNullExpression : NUChannelExpression

- (id)compactDescription;
- (id)init;
- (id)description;
- (BOOL)isCompatibleWithExpressionType:(long long)a0;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;

@end
