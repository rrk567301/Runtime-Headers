@class ML3Predicate;

@interface ML3ConditionalPredicate : ML3Predicate

@property (readonly, copy, nonatomic) ML3Predicate *conditionPredicate;
@property (readonly, copy, nonatomic) ML3Predicate *thenPredicate;
@property (readonly, copy, nonatomic) ML3Predicate *elsePredicate;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConditionPredicate:(id)a0 thenPredicate:(id)a1 elsePredicate:(id)a2;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (id)description;
- (id)spotlightPredicate;
- (id)databaseStatementParameters;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (id)initWithConditionPredicate:(id)a0 thenPredicate:(id)a1 elsePredicate:(id)a2;

@end
