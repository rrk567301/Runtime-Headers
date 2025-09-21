@interface MPModelSongKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) unsigned long long options;

+ (char)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;

@end
