@interface NSKeyPathExpression : NSFunctionExpression

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)pathExpression;
- (id)keyPath;
- (id)predicateFormat;
- (id)initWithKeyPath:(id)a0;
- (void)dealloc;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;

@end
