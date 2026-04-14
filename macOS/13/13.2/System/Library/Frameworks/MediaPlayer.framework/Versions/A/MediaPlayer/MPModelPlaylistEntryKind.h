@class NSArray;

@interface MPModelPlaylistEntryKind : MPModelKind

@property (readonly, nonatomic) NSArray *kinds;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithKinds:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)humanDescription;

@end
