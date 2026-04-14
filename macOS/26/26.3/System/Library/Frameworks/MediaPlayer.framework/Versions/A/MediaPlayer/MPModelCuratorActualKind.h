@interface MPModelCuratorActualKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0;

- (id)humanDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
