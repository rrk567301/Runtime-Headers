@class MPModelSongKind;

@interface MPModelAlbumKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) MPModelSongKind *songKind;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0 songKind:(id)a1 options:(unsigned long long)a2;

- (id)humanDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)msv_initWithJSONValue:(id)a0;
- (id)msv_jsonValue;

@end
