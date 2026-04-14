@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate

@property (retain, nonatomic) NSSet *values;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;

- (id)initWithProperty:(id)a0 values:(id)a1;
- (id)description;
- (id)databaseStatementParameters;
- (void).cxx_destruct;
- (id)_orderedValues;
- (id)initWithCoder:(id)a0;
- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;

@end
