@class ML3Predicate;

@interface ML3ConditionalPredicate : ML3Predicate

@property (readonly, copy, nonatomic) ML3Predicate *conditionPredicate;
@property (readonly, copy, nonatomic) ML3Predicate *thenPredicate;
@property (readonly, copy, nonatomic) ML3Predicate *elsePredicate;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConditionPredicate:(id)a0 thenPredicate:(id)a1 elsePredicate:(id)a2;

- (id)SQLJoinClausesForClass:(Class)a0;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)databaseStatementParameters;
- (id)spotlightPredicate;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithConditionPredicate:(id)a0 thenPredicate:(id)a1 elsePredicate:(id)a2;

@end
