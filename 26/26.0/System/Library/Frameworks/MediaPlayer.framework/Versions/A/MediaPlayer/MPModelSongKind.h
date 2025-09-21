@interface MPModelSongKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)msv_initWithJSONValue:(id)a0;
- (id)msv_jsonValue;

@end
