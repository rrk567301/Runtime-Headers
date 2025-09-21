@class MPModelPlaylistEntryKind;

@interface MPModelPlaylistKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) MPModelPlaylistEntryKind *playlistEntryKind;
@property (readonly, nonatomic) unsigned long long options;

+ (char)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0 playlistEntryKind:(id)a1 options:(unsigned long long)a2;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;

@end
