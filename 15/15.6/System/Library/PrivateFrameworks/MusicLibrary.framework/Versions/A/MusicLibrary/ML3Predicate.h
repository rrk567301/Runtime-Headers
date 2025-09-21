@interface ML3Predicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (char)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (id)databaseStatementParameters;
- (char)isDynamicForEntityClass:(Class)a0;
- (char)isFalseAlways;
- (char)isTrueAlways;
- (id)spotlightPredicate;

@end
