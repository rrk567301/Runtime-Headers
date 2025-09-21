@interface ML3NegationPredicate : ML3UnaryPredicate

+ (char)supportsSecureCoding;

- (id)description;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;

@end
