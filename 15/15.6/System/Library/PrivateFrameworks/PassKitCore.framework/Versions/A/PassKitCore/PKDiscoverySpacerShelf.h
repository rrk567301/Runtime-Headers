@interface PKDiscoverySpacerShelf : PKDiscoveryShelf

@property (readonly, nonatomic) long long spacerType;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
