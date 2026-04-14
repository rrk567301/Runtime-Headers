@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate

@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSString *searchString;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConcatenatedProperties:(id)a0 searchString:(id)a1;

- (BOOL)isDynamicForEntityClass:(Class)a0;
- (id)description;
- (id)databaseStatementParameters;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConcatenatedProperties:(id)a0 searchString:(id)a1;

@end
