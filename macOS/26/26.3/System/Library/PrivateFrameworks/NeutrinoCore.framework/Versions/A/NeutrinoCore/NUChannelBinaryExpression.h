@class NUChannelExpression;

@interface NUChannelBinaryExpression : NUChannelExpression

@property (readonly, nonatomic) NUChannelExpression *leftExpression;
@property (readonly, nonatomic) NUChannelExpression *rightExpression;

+ (long long)expressionTypeWithLeftExpression:(id)a0 rightExpression:(id)a1;

- (id)debugDescription;
- (id)evaluateWithArgumentData:(id)a0 error:(out id *)a1;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)evaluateWithLeftData:(id)a0 rightData:(id)a1 error:(out id *)a2;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;
- (id)initWithLeftExpression:(id)a0 rightExpression:(id)a1;

@end
