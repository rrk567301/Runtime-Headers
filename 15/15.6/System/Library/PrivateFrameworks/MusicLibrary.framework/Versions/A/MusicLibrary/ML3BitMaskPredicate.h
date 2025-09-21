@interface ML3BitMaskPredicate : ML3PropertyPredicate

@property (nonatomic) long long mask;
@property (nonatomic) long long value;

+ (char)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 mask:(long long)a1 value:(long long)a2;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)databaseStatementParameters;
- (id)initWithProperty:(id)a0 mask:(long long)a1 value:(long long)a2;

@end
