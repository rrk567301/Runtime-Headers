@interface MPModelTVEpisodeKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;

- (id)humanDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)msv_initWithJSONValue:(id)a0;
- (id)msv_jsonValue;

@end
