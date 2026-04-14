@interface NUChannelComparisonExpression : NUChannelBinaryExpression

+ (long long)expressionTypeWithLeftExpression:(id)a0 rightExpression:(id)a1;

- (id)evaluateWithComparisonResult:(long long)a0 error:(out id *)a1;
- (id)evaluateWithLeftData:(id)a0 rightData:(id)a1 error:(out id *)a2;

@end
