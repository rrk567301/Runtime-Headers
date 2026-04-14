@interface NUChannelLessThanOrEqualExpression : NUChannelComparisonExpression

- (id)description;
- (id)compactDescription;
- (id)evaluateWithComparisonResult:(long long)a0 error:(out id *)a1;

@end
