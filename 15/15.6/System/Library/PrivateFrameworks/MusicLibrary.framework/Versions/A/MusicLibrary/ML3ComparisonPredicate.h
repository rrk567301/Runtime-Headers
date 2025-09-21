@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) int comparison;
@property (readonly, nonatomic) char caseInsensitive;
@property (readonly, copy, nonatomic) NSString *treatNullAsString;
@property (readonly, copy, nonatomic) NSString *transformFunction;

+ (char)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 equalToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 equalToInt64:(long long)a1;
+ (id)predicateWithProperty:(id)a0 equalToInteger:(long long)a1;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparison:(int)a2;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparison:(int)a2 caseInsensitive:(char)a3;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparison:(int)a2 caseInsensitive:(char)a3 treatNullAsString:(id)a4;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparison:(int)a2 transformFunction:(id)a3;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (char)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (id)databaseStatementParameters;
- (id)initWithProperty:(id)a0 value:(id)a1 comparison:(int)a2 caseInsensitive:(char)a3 transformFunction:(id)a4 treatNullAsString:(id)a5;
- (id)operator;
- (id)valueToBindForOperation:(long long)a0;

@end
