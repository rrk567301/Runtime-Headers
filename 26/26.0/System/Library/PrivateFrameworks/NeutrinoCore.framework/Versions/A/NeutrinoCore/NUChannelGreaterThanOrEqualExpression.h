@interface NUChannelGreaterThanOrEqualExpression : NUChannelComparisonExpression

- (id)compactDescription;
- (id)description;
- (id)evaluateWithComparisonResult:(long long)a0 error:(out id *)a1;

@end
