@interface NSKeyPathExpression : NSFunctionExpression

- (id)keyPath;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)predicateFormat;
- (unsigned long long)expressionType;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)pathExpression;
- (id)initWithKeyPath:(id)a0;
- (void)dealloc;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;

@end
