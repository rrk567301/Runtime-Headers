@interface NSKeyPathExpression : NSFunctionExpression

- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)keyPath;
- (void)dealloc;
- (id)predicateFormat;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)pathExpression;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;
- (id)initWithKeyPath:(id)a0;

@end
