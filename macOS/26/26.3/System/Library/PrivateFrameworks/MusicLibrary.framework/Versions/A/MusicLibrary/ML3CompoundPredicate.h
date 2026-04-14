@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate

@property (retain, nonatomic) NSArray *predicates;
@property (readonly, copy, nonatomic) NSString *compoundOperatorJoiner;

+ (BOOL)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)a0;

- (BOOL)isDynamicForEntityClass:(Class)a0;
- (id)description;
- (id)databaseStatementParameters;
- (id)spotlightPredicate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (id)SQLJoinClausesForClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPredicates:(id)a0;

@end
