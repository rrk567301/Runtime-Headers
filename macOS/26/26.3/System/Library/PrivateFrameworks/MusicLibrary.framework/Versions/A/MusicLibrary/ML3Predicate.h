@interface ML3Predicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isDynamicForEntityClass:(Class)a0;
- (id)databaseStatementParameters;
- (id)spotlightPredicate;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (id)SQLJoinClausesForClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)SQLForEntityClass:(Class)a0;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;

@end
