@class NSArray;

@interface WCAFetchKeyValuesRequest : WCAFetchRequest

@property (copy, nonatomic) NSArray *keys;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
