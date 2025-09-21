@class NSArray;

@interface WCAFetchKeyValuesRequest : WCAFetchRequest

@property (copy, nonatomic) NSArray *keys;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
