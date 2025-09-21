@interface ML3ContainsPredicate : ML3PropertyPredicate

@property (copy, nonatomic) id values;

+ (char)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;
+ (id)predicateWithProperty:(id)a0 valueSet:(id)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (char)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (id)databaseStatementParameters;
- (id)initWithProperty:(id)a0 values:(id)a1;

@end
