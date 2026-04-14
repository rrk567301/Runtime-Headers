@interface NUChannelSubtractionExpression : NUChannelArithmeticBinaryExpression

- (id)compactDescription;
- (id)description;
- (id)evaluateWithLeftValue:(id)a0 rightValue:(id)a1 error:(out id *)a2;

@end
