@class NSString;

@interface ML3PropertyPredicate : ML3Predicate

@property (copy, nonatomic) NSString *property;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0;

- (id)initWithProperty:(id)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDynamicForEntityClass:(Class)a0;

@end
