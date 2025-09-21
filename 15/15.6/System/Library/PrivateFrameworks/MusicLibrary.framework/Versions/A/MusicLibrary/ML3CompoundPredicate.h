@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate

@property (retain, nonatomic) NSArray *predicates;
@property (readonly, copy, nonatomic) NSString *compoundOperatorJoiner;

+ (char)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicates:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (char)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (id)databaseStatementParameters;
- (char)isDynamicForEntityClass:(Class)a0;
- (id)spotlightPredicate;

@end
