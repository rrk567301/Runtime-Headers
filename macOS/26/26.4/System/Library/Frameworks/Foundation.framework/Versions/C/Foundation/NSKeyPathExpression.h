@interface NSKeyPathExpression : NSFunctionExpression

- (unsigned long long)expressionType;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;
- (id)initWithKeyPath:(id)a0;
- (id)predicateFormat;
- (id)keyPath;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)dealloc;
- (id)pathExpression;

@end
