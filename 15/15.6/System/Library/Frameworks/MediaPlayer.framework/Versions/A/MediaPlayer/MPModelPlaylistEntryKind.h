@class NSArray;

@interface MPModelPlaylistEntryKind : MPModelKind

@property (readonly, nonatomic) NSArray *kinds;

+ (char)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithKinds:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;

@end
