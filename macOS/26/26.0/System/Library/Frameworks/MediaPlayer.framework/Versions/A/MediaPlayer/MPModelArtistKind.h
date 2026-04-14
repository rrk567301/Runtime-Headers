@class MPModelAlbumKind;

@interface MPModelArtistKind : MPModelKind

@property (readonly, copy, nonatomic) MPModelAlbumKind *albumKind;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithAlbumKind:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)msv_initWithJSONValue:(id)a0;
- (id)msv_jsonValue;

@end
