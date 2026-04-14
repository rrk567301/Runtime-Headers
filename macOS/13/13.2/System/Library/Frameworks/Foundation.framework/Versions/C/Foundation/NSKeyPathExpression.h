@interface NSKeyPathExpression : NSFunctionExpression

- (void)dealloc;
- (unsigned long long)expressionType;
- (id)predicateFormat;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)keyPath;
- (id)initWithKeyPath:(id)a0;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;
- (id)pathExpression;

@end
