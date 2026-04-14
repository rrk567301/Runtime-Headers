@class NSDictionary, NSString, NSArray;

@interface WCAFetchSQLiteRequest : WCAFetchRequest

@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSArray *columnNames;
@property (nonatomic) long long limit;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
