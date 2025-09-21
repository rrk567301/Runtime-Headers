@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate

@property (retain, nonatomic) ML3Predicate *predicate;

+ (char)supportsSecureCoding;
+ (id)predicateWithPredicate:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (id)databaseStatementParameters;

@end
