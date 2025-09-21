@class MPModelAlbumKind;

@interface MPModelArtistKind : MPModelKind

@property (readonly, copy, nonatomic) MPModelAlbumKind *albumKind;

+ (char)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithAlbumKind:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;

@end
