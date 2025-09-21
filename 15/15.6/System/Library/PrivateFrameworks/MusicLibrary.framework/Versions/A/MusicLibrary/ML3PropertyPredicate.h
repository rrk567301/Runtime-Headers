@class NSString;

@interface ML3PropertyPredicate : ML3Predicate

@property (copy, nonatomic) NSString *property;

+ (char)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProperty:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (char)isDynamicForEntityClass:(Class)a0;

@end
