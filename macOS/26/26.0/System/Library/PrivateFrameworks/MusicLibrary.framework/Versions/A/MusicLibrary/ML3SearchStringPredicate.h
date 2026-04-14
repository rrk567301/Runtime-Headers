@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate

@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSString *searchString;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConcatenatedProperties:(id)a0 searchString:(id)a1;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (id)description;
- (id)databaseStatementParameters;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (id)initWithConcatenatedProperties:(id)a0 searchString:(id)a1;

@end
