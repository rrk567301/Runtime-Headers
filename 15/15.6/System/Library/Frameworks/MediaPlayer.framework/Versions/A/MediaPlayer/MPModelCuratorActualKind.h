@interface MPModelCuratorActualKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;

+ (char)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;

@end
