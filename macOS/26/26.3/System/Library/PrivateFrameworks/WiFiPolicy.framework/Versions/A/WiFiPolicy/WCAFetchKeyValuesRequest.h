@class NSArray;

@interface WCAFetchKeyValuesRequest : WCAFetchRequest

@property (copy, nonatomic) NSArray *keys;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
