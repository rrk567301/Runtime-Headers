@interface ML3BitMaskPredicate : ML3PropertyPredicate

@property (nonatomic) long long mask;
@property (nonatomic) long long value;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 mask:(long long)a1 value:(long long)a2;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProperty:(id)a0 mask:(long long)a1 value:(long long)a2;
- (id)description;
- (id)databaseStatementParameters;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
