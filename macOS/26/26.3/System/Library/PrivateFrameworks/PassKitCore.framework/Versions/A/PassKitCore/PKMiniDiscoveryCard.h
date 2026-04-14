@interface PKMiniDiscoveryCard : PKDiscoveryCard

@property (readonly, nonatomic) long long miniCardTemplateType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
