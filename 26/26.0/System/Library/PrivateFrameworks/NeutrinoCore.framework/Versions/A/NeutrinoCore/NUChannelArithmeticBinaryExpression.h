@interface NUChannelArithmeticBinaryExpression : NUChannelBinaryExpression

+ (long long)expressionTypeWithLeftExpression:(id)a0 rightExpression:(id)a1;

- (id)evaluateWithLeftData:(id)a0 rightData:(id)a1 error:(out id *)a2;
- (id)evaluateWithLeftValue:(id)a0 rightValue:(id)a1 error:(out id *)a2;

@end
