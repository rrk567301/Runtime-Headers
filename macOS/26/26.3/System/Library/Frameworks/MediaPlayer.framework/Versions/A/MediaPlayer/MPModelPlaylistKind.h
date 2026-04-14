@class MPModelPlaylistEntryKind;

@interface MPModelPlaylistKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) MPModelPlaylistEntryKind *playlistEntryKind;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0 playlistEntryKind:(id)a1 options:(unsigned long long)a2;

- (id)humanDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
