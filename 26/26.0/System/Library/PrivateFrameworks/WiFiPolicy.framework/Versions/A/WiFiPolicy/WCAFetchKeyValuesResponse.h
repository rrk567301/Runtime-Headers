@class NSDictionary;

@interface WCAFetchKeyValuesResponse : WCAFetchResponse

@property (copy, nonatomic) NSDictionary *keyValues;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyValues:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
