@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate

@property (retain, nonatomic) NSSet *values;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)initWithProperty:(id)a0 values:(id)a1;
- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)databaseStatementParameters;
- (id)initWithCoder:(id)a0;
- (id)_orderedValues;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
