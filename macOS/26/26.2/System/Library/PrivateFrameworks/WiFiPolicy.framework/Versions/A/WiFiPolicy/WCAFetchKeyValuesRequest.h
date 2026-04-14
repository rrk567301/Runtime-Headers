@class NSArray;

@interface WCAFetchKeyValuesRequest : WCAFetchRequest

@property (copy, nonatomic) NSArray *keys;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
